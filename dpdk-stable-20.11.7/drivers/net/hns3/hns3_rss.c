/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2018-2021 HiSilicon Limited.
 */

#include <rte_ethdev.h>
#include <rte_io.h>
#include <rte_malloc.h>

#include "hns3_ethdev.h"
#include "hns3_logs.h"

/* Default hash keys */
const uint8_t hns3_hash_key[HNS3_RSS_KEY_SIZE] = {
	0x6D, 0x5A, 0x56, 0xDA, 0x25, 0x5B, 0x0E, 0xC2,
	0x41, 0x67, 0x25, 0x3D, 0x43, 0xA3, 0x8F, 0xB0,
	0xD0, 0xCA, 0x2B, 0xCB, 0xAE, 0x7B, 0x30, 0xB4,
	0x77, 0xCB, 0x2D, 0xA3, 0x80, 0x30, 0xF2, 0x0C,
	0x6A, 0x42, 0xB7, 0x3B, 0xBE, 0xAC, 0x01, 0xFA
};

enum hns3_tuple_field {
	/* IPV4_TCP ENABLE FIELD */
	HNS3_RSS_FIELD_IPV4_TCP_EN_TCP_D = 0,
	HNS3_RSS_FIELD_IPV4_TCP_EN_TCP_S,
	HNS3_RSS_FIELD_IPV4_TCP_EN_IP_D,
	HNS3_RSS_FIELD_IPV4_TCP_EN_IP_S,

	/* IPV4_UDP ENABLE FIELD */
	HNS3_RSS_FIELD_IPV4_UDP_EN_UDP_D = 8,
	HNS3_RSS_FIELD_IPV4_UDP_EN_UDP_S,
	HNS3_RSS_FIELD_IPV4_UDP_EN_IP_D,
	HNS3_RSS_FIELD_IPV4_UDP_EN_IP_S,

	/* IPV4_SCTP ENABLE FIELD */
	HNS3_RSS_FIELD_IPV4_SCTP_EN_SCTP_D = 16,
	HNS3_RSS_FIELD_IPV4_SCTP_EN_SCTP_S,
	HNS3_RSS_FIELD_IPV4_SCTP_EN_IP_D,
	HNS3_RSS_FIELD_IPV4_SCTP_EN_IP_S,
	HNS3_RSS_FIELD_IPV4_SCTP_EN_SCTP_VER,

	/* IPV4 ENABLE FIELD */
	HNS3_RSS_FIELD_IPV4_EN_NONFRAG_IP_D = 24,
	HNS3_RSS_FIELD_IPV4_EN_NONFRAG_IP_S,
	HNS3_RSS_FIELD_IPV4_EN_FRAG_IP_D,
	HNS3_RSS_FIELD_IPV4_EN_FRAG_IP_S,

	/* IPV6_TCP ENABLE FIELD */
	HNS3_RSS_FIELD_IPV6_TCP_EN_TCP_D = 32,
	HNS3_RSS_FIELD_IPV6_TCP_EN_TCP_S,
	HNS3_RSS_FIELD_IPV6_TCP_EN_IP_D,
	HNS3_RSS_FIELD_IPV6_TCP_EN_IP_S,

	/* IPV6_UDP ENABLE FIELD */
	HNS3_RSS_FIELD_IPV6_UDP_EN_UDP_D = 40,
	HNS3_RSS_FIELD_IPV6_UDP_EN_UDP_S,
	HNS3_RSS_FIELD_IPV6_UDP_EN_IP_D,
	HNS3_RSS_FIELD_IPV6_UDP_EN_IP_S,

	/* IPV6_SCTP ENABLE FIELD */
	HNS3_RSS_FIELD_IPV6_SCTP_EN_SCTP_D = 48,
	HNS3_RSS_FIELD_IPV6_SCTP_EN_SCTP_S,
	HNS3_RSS_FIELD_IPV6_SCTP_EN_IP_D,
	HNS3_RSS_FIELD_IPV6_SCTP_EN_IP_S,
	HNS3_RSS_FIELD_IPV6_SCTP_EN_SCTP_VER,

	/* IPV6 ENABLE FIELD */
	HNS3_RSS_FIELD_IPV6_NONFRAG_IP_D = 56,
	HNS3_RSS_FIELD_IPV6_NONFRAG_IP_S,
	HNS3_RSS_FIELD_IPV6_FRAG_IP_D,
	HNS3_RSS_FIELD_IPV6_FRAG_IP_S
};

enum hns3_rss_tuple_type {
	HNS3_RSS_IP_TUPLE,
	HNS3_RSS_IP_L4_TUPLE,
};

static const struct {
	uint64_t rss_types;
	uint16_t tuple_type;
	uint64_t rss_field;
} hns3_set_tuple_table[] = {
	/* IPV4-FRAG */
	{ ETH_RSS_FRAG_IPV4 | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_FRAG_IP_S) },
	{ ETH_RSS_FRAG_IPV4 | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_FRAG_IP_D) },
	{ ETH_RSS_FRAG_IPV4,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_FRAG_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_FRAG_IP_D) },

	/* IPV4 */
	{ ETH_RSS_IPV4 | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_NONFRAG_IP_S) },
	{ ETH_RSS_IPV4 | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_NONFRAG_IP_D) },
	{ ETH_RSS_IPV4,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_NONFRAG_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_NONFRAG_IP_D) },

	/* IPV4-OTHER */
	{ ETH_RSS_NONFRAG_IPV4_OTHER | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_NONFRAG_IP_S) },
	{ ETH_RSS_NONFRAG_IPV4_OTHER | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_NONFRAG_IP_D) },
	{ ETH_RSS_NONFRAG_IPV4_OTHER,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_NONFRAG_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_EN_NONFRAG_IP_D) },

	/* IPV4-TCP */
	{ ETH_RSS_NONFRAG_IPV4_TCP | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_TCP_EN_IP_S) },
	{ ETH_RSS_NONFRAG_IPV4_TCP | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_TCP_EN_IP_D) },
	{ ETH_RSS_NONFRAG_IPV4_TCP | ETH_RSS_L4_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_TCP_EN_TCP_S) },
	{ ETH_RSS_NONFRAG_IPV4_TCP | ETH_RSS_L4_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_TCP_EN_TCP_D) },
	{ ETH_RSS_NONFRAG_IPV4_TCP,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_TCP_EN_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_TCP_EN_IP_D) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_TCP_EN_TCP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_TCP_EN_TCP_D) },

	/* IPV4-UDP */
	{ ETH_RSS_NONFRAG_IPV4_UDP | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_UDP_EN_IP_S) },
	{ ETH_RSS_NONFRAG_IPV4_UDP | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_UDP_EN_IP_D) },
	{ ETH_RSS_NONFRAG_IPV4_UDP | ETH_RSS_L4_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_UDP_EN_UDP_S) },
	{ ETH_RSS_NONFRAG_IPV4_UDP | ETH_RSS_L4_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_UDP_EN_UDP_D) },
	{ ETH_RSS_NONFRAG_IPV4_UDP,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_UDP_EN_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_UDP_EN_IP_D) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_UDP_EN_UDP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_UDP_EN_UDP_D) },

	/* IPV4-SCTP */
	{ ETH_RSS_NONFRAG_IPV4_SCTP | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_SCTP_EN_IP_S) },
	{ ETH_RSS_NONFRAG_IPV4_SCTP | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_SCTP_EN_IP_D) },
	{ ETH_RSS_NONFRAG_IPV4_SCTP | ETH_RSS_L4_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_SCTP_EN_SCTP_S) },
	{ ETH_RSS_NONFRAG_IPV4_SCTP | ETH_RSS_L4_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_SCTP_EN_SCTP_D) },
	{ ETH_RSS_NONFRAG_IPV4_SCTP,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_SCTP_EN_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_SCTP_EN_IP_D) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_SCTP_EN_SCTP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_SCTP_EN_SCTP_D) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV4_SCTP_EN_SCTP_VER) },

	/* IPV6-FRAG */
	{ ETH_RSS_FRAG_IPV6 | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_FRAG_IP_S) },
	{ ETH_RSS_FRAG_IPV6 | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_FRAG_IP_D) },
	{ ETH_RSS_FRAG_IPV6,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_FRAG_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_FRAG_IP_D) },

	/* IPV6 */
	{ ETH_RSS_IPV6 | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_NONFRAG_IP_S) },
	{ ETH_RSS_IPV6 | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_NONFRAG_IP_D) },
	{ ETH_RSS_IPV6,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_NONFRAG_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_NONFRAG_IP_D) },

	/* IPV6-OTHER */
	{ ETH_RSS_NONFRAG_IPV6_OTHER | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_NONFRAG_IP_S) },
	{ ETH_RSS_NONFRAG_IPV6_OTHER | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_NONFRAG_IP_D) },
	{ ETH_RSS_NONFRAG_IPV6_OTHER,
	  HNS3_RSS_IP_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_NONFRAG_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_NONFRAG_IP_D) },

	/* IPV6-TCP */
	{ ETH_RSS_NONFRAG_IPV6_TCP | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_TCP_EN_IP_S) },
	{ ETH_RSS_NONFRAG_IPV6_TCP | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_TCP_EN_IP_D) },
	{ ETH_RSS_NONFRAG_IPV6_TCP | ETH_RSS_L4_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_TCP_EN_TCP_S) },
	{ ETH_RSS_NONFRAG_IPV6_TCP | ETH_RSS_L4_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_TCP_EN_TCP_D) },
	{ ETH_RSS_NONFRAG_IPV6_TCP,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_TCP_EN_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_TCP_EN_IP_D) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_TCP_EN_TCP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_TCP_EN_TCP_D) },

	/* IPV6-UDP */
	{ ETH_RSS_NONFRAG_IPV6_UDP | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_UDP_EN_IP_S) },
	{ ETH_RSS_NONFRAG_IPV6_UDP | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_UDP_EN_IP_D) },
	{ ETH_RSS_NONFRAG_IPV6_UDP | ETH_RSS_L4_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_UDP_EN_UDP_S) },
	{ ETH_RSS_NONFRAG_IPV6_UDP | ETH_RSS_L4_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_UDP_EN_UDP_D) },
	{ ETH_RSS_NONFRAG_IPV6_UDP,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_UDP_EN_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_UDP_EN_IP_D) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_UDP_EN_UDP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_UDP_EN_UDP_D) },

	/* IPV6-SCTP */
	{ ETH_RSS_NONFRAG_IPV6_SCTP | ETH_RSS_L3_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_SCTP_EN_IP_S) },
	{ ETH_RSS_NONFRAG_IPV6_SCTP | ETH_RSS_L3_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_SCTP_EN_IP_D) },
	{ ETH_RSS_NONFRAG_IPV6_SCTP | ETH_RSS_L4_SRC_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_SCTP_EN_SCTP_S) },
	{ ETH_RSS_NONFRAG_IPV6_SCTP | ETH_RSS_L4_DST_ONLY,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_SCTP_EN_SCTP_D) },
	{ ETH_RSS_NONFRAG_IPV6_SCTP,
	  HNS3_RSS_IP_L4_TUPLE,
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_SCTP_EN_IP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_SCTP_EN_IP_D) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_SCTP_EN_SCTP_D) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_SCTP_EN_SCTP_S) |
	  BIT_ULL(HNS3_RSS_FIELD_IPV6_SCTP_EN_SCTP_VER) },
};

/*
 * rss_generic_config command function, opcode:0x0D01.
 * Used to set algorithm, key_offset and hash key of rss.
 */
int
hns3_set_rss_algo_key(struct hns3_hw *hw, const uint8_t *key)
{
#define HNS3_KEY_OFFSET_MAX	3
#define HNS3_SET_HASH_KEY_BYTE_FOUR	2

	struct hns3_rss_generic_config_cmd *req;
	struct hns3_cmd_desc desc;
	uint32_t key_offset, key_size;
	const uint8_t *key_cur;
	uint8_t cur_offset;
	int ret;

	req = (struct hns3_rss_generic_config_cmd *)desc.data;

	/*
	 * key_offset=0, hash key byte0~15 is set to hardware.
	 * key_offset=1, hash key byte16~31 is set to hardware.
	 * key_offset=2, hash key byte32~39 is set to hardware.
	 */
	for (key_offset = 0; key_offset < HNS3_KEY_OFFSET_MAX; key_offset++) {
		hns3_cmd_setup_basic_desc(&desc, HNS3_OPC_RSS_GENERIC_CONFIG,
					  false);

		req->hash_config |=
			(hw->rss_info.hash_algo & HNS3_RSS_HASH_ALGO_MASK);
		req->hash_config |= (key_offset << HNS3_RSS_HASH_KEY_OFFSET_B);

		if (key_offset == HNS3_SET_HASH_KEY_BYTE_FOUR)
			key_size = HNS3_RSS_KEY_SIZE - HNS3_RSS_HASH_KEY_NUM *
			HNS3_SET_HASH_KEY_BYTE_FOUR;
		else
			key_size = HNS3_RSS_HASH_KEY_NUM;

		cur_offset = key_offset * HNS3_RSS_HASH_KEY_NUM;
		key_cur = key + cur_offset;
		memcpy(req->hash_key, key_cur, key_size);

		ret = hns3_cmd_send(hw, &desc, 1);
		if (ret) {
			hns3_err(hw, "Configure RSS algo key failed %d", ret);
			return ret;
		}
	}
	/* Update the shadow RSS key with user specified */
	memcpy(hw->rss_info.key, key, HNS3_RSS_KEY_SIZE);
	return 0;
}

/*
 * rss_indirection_table command function, opcode:0x0D07.
 * Used to configure the indirection table of rss.
 */
int
hns3_set_rss_indir_table(struct hns3_hw *hw, uint16_t *indir, uint16_t size)
{
	struct hns3_rss_indirection_table_cmd *req;
	struct hns3_cmd_desc desc;
	uint8_t qid_msb_off;
	uint8_t qid_msb_val;
	uint16_t q_id;
	uint16_t i, j;
	int ret;

	req = (struct hns3_rss_indirection_table_cmd *)desc.data;

	for (i = 0; i < size / HNS3_RSS_CFG_TBL_SIZE; i++) {
		hns3_cmd_setup_basic_desc(&desc, HNS3_OPC_RSS_INDIR_TABLE,
					  false);
		req->start_table_index =
				rte_cpu_to_le_16(i * HNS3_RSS_CFG_TBL_SIZE);
		req->rss_set_bitmap = rte_cpu_to_le_16(HNS3_RSS_SET_BITMAP_MSK);
		for (j = 0; j < HNS3_RSS_CFG_TBL_SIZE; j++) {
			q_id = indir[i * HNS3_RSS_CFG_TBL_SIZE + j];
			req->rss_result_l[j] = q_id & 0xff;

			qid_msb_off =
				j * HNS3_RSS_CFG_TBL_BW_H / HNS3_BITS_PER_BYTE;
			qid_msb_val = (q_id >> HNS3_RSS_CFG_TBL_BW_L & 0x1)
					<< (j * HNS3_RSS_CFG_TBL_BW_H %
					HNS3_BITS_PER_BYTE);
			req->rss_result_h[qid_msb_off] |= qid_msb_val;
		}

		ret = hns3_cmd_send(hw, &desc, 1);
		if (ret) {
			hns3_err(hw,
				 "Sets RSS indirection table failed %d size %u",
				 ret, size);
			return ret;
		}
	}

	/* Update redirection table of hw */
	memcpy(hw->rss_info.rss_indirection_tbl, indir,
	       sizeof(uint16_t) * size);

	return 0;
}

int
hns3_rss_reset_indir_table(struct hns3_hw *hw)
{
	uint16_t *lut;
	int ret;

	lut = rte_zmalloc("hns3_rss_lut",
			  hw->rss_ind_tbl_size * sizeof(uint16_t), 0);
	if (lut == NULL) {
		hns3_err(hw, "No hns3_rss_lut memory can be allocated");
		return -ENOMEM;
	}

	ret = hns3_set_rss_indir_table(hw, lut, hw->rss_ind_tbl_size);
	if (ret)
		hns3_err(hw, "RSS uninit indir table failed: %d", ret);
	rte_free(lut);

	return ret;
}

static void
hns3_rss_check_l3l4_types(struct hns3_hw *hw, uint64_t rss_hf)
{
	uint64_t ip_mask = ETH_RSS_IPV4 | ETH_RSS_FRAG_IPV4 |
			   ETH_RSS_NONFRAG_IPV4_OTHER |
			   ETH_RSS_IPV6 | ETH_RSS_FRAG_IPV6 |
			   ETH_RSS_NONFRAG_IPV6_OTHER;
	uint64_t l4_mask = ETH_RSS_NONFRAG_IPV4_TCP |
			   ETH_RSS_NONFRAG_IPV4_UDP |
			   ETH_RSS_NONFRAG_IPV4_SCTP |
			   ETH_RSS_NONFRAG_IPV6_TCP |
			   ETH_RSS_NONFRAG_IPV6_UDP |
			   ETH_RSS_NONFRAG_IPV6_SCTP;
	uint64_t l3_src_dst_mask = ETH_RSS_L3_SRC_ONLY |
				   ETH_RSS_L3_DST_ONLY;
	uint64_t l4_src_dst_mask = ETH_RSS_L4_SRC_ONLY |
				   ETH_RSS_L4_DST_ONLY;

	if (rss_hf & l3_src_dst_mask &&
	    !(rss_hf & ip_mask || rss_hf & l4_mask))
		hns3_warn(hw, "packet type isn't specified, L3_SRC/DST_ONLY is ignored.");

	if (rss_hf & l4_src_dst_mask && !(rss_hf & l4_mask))
		hns3_warn(hw, "packet type isn't specified, L4_SRC/DST_ONLY is ignored.");
}

static uint64_t
hns3_rss_calc_tuple_filed(struct hns3_hw *hw, uint64_t rss_hf)
{
	uint64_t l3_only_mask = ETH_RSS_L3_SRC_ONLY |
				ETH_RSS_L3_DST_ONLY;
	uint64_t l4_only_mask = ETH_RSS_L4_SRC_ONLY |
				ETH_RSS_L4_DST_ONLY;
	uint64_t l3_l4_only_mask = l3_only_mask | l4_only_mask;
	bool has_l3_l4_only = !!(rss_hf & l3_l4_only_mask);
	bool has_l3_only = !!(rss_hf & l3_only_mask);
	uint64_t tuple = 0;
	uint32_t i;

	for (i = 0; i < RTE_DIM(hns3_set_tuple_table); i++) {
		if ((rss_hf & hns3_set_tuple_table[i].rss_types) !=
		    hns3_set_tuple_table[i].rss_types)
			continue;

		if (hns3_set_tuple_table[i].tuple_type == HNS3_RSS_IP_TUPLE) {
			if (hns3_set_tuple_table[i].rss_types & l3_only_mask ||
			    !has_l3_only)
				tuple |= hns3_set_tuple_table[i].rss_field;
			continue;
		}

		/* For IP types with L4, we need check both L3 and L4 */
		if (hns3_set_tuple_table[i].rss_types & l3_l4_only_mask ||
		    !has_l3_l4_only)
			tuple |= hns3_set_tuple_table[i].rss_field;
	}
	hns3_rss_check_l3l4_types(hw, rss_hf);

	return tuple;
}

int
hns3_set_rss_tuple_by_rss_hf(struct hns3_hw *hw, uint64_t rss_hf)
{
	struct hns3_rss_input_tuple_cmd *req;
	struct hns3_cmd_desc desc;
	uint64_t tuple_field;
	int ret;

	hns3_cmd_setup_basic_desc(&desc, HNS3_OPC_RSS_INPUT_TUPLE, false);
	req = (struct hns3_rss_input_tuple_cmd *)desc.data;

	tuple_field = hns3_rss_calc_tuple_filed(hw, rss_hf);
	req->tuple_field = rte_cpu_to_le_64(tuple_field);
	ret = hns3_cmd_send(hw, &desc, 1);
	if (ret) {
		hns3_err(hw, "Update RSS flow types tuples failed %d", ret);
		return ret;
	}

	/* Update supported flow types when set tuple success */
	hw->rss_info.conf.types = rss_hf;

	return 0;
}

/*
 * Configure RSS hash protocols and hash key.
 * @param dev
 *   Pointer to Ethernet device.
 * @praram rss_conf
 *   The configuration select of  rss key size and tuple flow_types.
 * @return
 *   0 on success, a negative errno value otherwise is set.
 */
int
hns3_dev_rss_hash_update(struct rte_eth_dev *dev,
			 struct rte_eth_rss_conf *rss_conf)
{
	struct hns3_hw *hw = HNS3_DEV_PRIVATE_TO_HW(dev->data->dev_private);
	uint64_t rss_hf_bk = hw->rss_info.conf.types;
	uint8_t key_len = rss_conf->rss_key_len;
	uint64_t rss_hf = rss_conf->rss_hf;
	uint8_t *key = rss_conf->rss_key;
	int ret;

	if (key && key_len != HNS3_RSS_KEY_SIZE) {
		hns3_err(hw, "the hash key len(%u) is invalid, must be %u",
			 key_len, HNS3_RSS_KEY_SIZE);
		return -EINVAL;
	}

	rte_spinlock_lock(&hw->lock);
	ret = hns3_set_rss_tuple_by_rss_hf(hw, rss_hf);
	if (ret)
		goto set_tuple_fail;

	if (key) {
		ret = hns3_set_rss_algo_key(hw, key);
		if (ret)
			goto set_algo_key_fail;
	}
	rte_spinlock_unlock(&hw->lock);

	return 0;

set_algo_key_fail:
	(void)hns3_set_rss_tuple_by_rss_hf(hw, rss_hf_bk);
set_tuple_fail:
	rte_spinlock_unlock(&hw->lock);
	return ret;
}

/*
 * Get rss key and rss_hf types set of RSS hash configuration.
 * @param dev
 *   Pointer to Ethernet device.
 * @praram rss_conf
 *   The buffer to get rss key size and tuple types.
 * @return
 *   0 on success.
 */
int
hns3_dev_rss_hash_conf_get(struct rte_eth_dev *dev,
			   struct rte_eth_rss_conf *rss_conf)
{
	struct hns3_adapter *hns = dev->data->dev_private;
	struct hns3_hw *hw = &hns->hw;
	struct hns3_rss_conf *rss_cfg = &hw->rss_info;

	rte_spinlock_lock(&hw->lock);
	rss_conf->rss_hf = rss_cfg->conf.types;

	/* Get the RSS Key required by the user */
	if (rss_conf->rss_key && rss_conf->rss_key_len >= HNS3_RSS_KEY_SIZE) {
		memcpy(rss_conf->rss_key, rss_cfg->key, HNS3_RSS_KEY_SIZE);
		rss_conf->rss_key_len = HNS3_RSS_KEY_SIZE;
	}
	rte_spinlock_unlock(&hw->lock);

	return 0;
}

/*
 * Update rss redirection table of RSS.
 * @param dev
 *   Pointer to Ethernet device.
 * @praram reta_conf
 *   Pointer to the configuration select of mask and redirection tables.
 * @param reta_size
 *   Redirection table size.
 * @return
 *   0 on success, a negative errno value otherwise is set.
 */
int
hns3_dev_rss_reta_update(struct rte_eth_dev *dev,
			 struct rte_eth_rss_reta_entry64 *reta_conf,
			 uint16_t reta_size)
{
	struct hns3_adapter *hns = dev->data->dev_private;
	struct hns3_hw *hw = &hns->hw;
	struct hns3_rss_conf *rss_cfg = &hw->rss_info;
	uint16_t indirection_tbl[HNS3_RSS_IND_TBL_SIZE_MAX];
	uint16_t idx, shift;
	uint16_t i;
	int ret;

	if (reta_size != hw->rss_ind_tbl_size) {
		hns3_err(hw, "The size of hash lookup table configured (%u)"
			 "doesn't match the number hardware can supported"
			 "(%u)", reta_size, hw->rss_ind_tbl_size);
		return -EINVAL;
	}
	rte_spinlock_lock(&hw->lock);
	memcpy(indirection_tbl, rss_cfg->rss_indirection_tbl,
	       sizeof(rss_cfg->rss_indirection_tbl));
	for (i = 0; i < reta_size; i++) {
		idx = i / RTE_RETA_GROUP_SIZE;
		shift = i % RTE_RETA_GROUP_SIZE;
		if (reta_conf[idx].reta[shift] >= hw->alloc_rss_size) {
			rte_spinlock_unlock(&hw->lock);
			hns3_err(hw, "queue id(%u) set to redirection table "
				 "exceeds queue number(%u) allocated to a TC",
				 reta_conf[idx].reta[shift],
				 hw->alloc_rss_size);
			return -EINVAL;
		}

		if (reta_conf[idx].mask & (1ULL << shift))
			indirection_tbl[i] = reta_conf[idx].reta[shift];
	}

	ret = hns3_set_rss_indir_table(hw, indirection_tbl,
				       hw->rss_ind_tbl_size);

	rte_spinlock_unlock(&hw->lock);
	return ret;
}

/*
 * Get rss redirection table of RSS hash configuration.
 * @param dev
 *   Pointer to Ethernet device.
 * @praram reta_conf
 *   Pointer to the configuration select of mask and redirection tables.
 * @param reta_size
 *   Redirection table size.
 * @return
 *   0 on success, a negative errno value otherwise is set.
 */
int
hns3_dev_rss_reta_query(struct rte_eth_dev *dev,
			struct rte_eth_rss_reta_entry64 *reta_conf,
			uint16_t reta_size)
{
	struct hns3_adapter *hns = dev->data->dev_private;
	struct hns3_hw *hw = &hns->hw;
	struct hns3_rss_conf *rss_cfg = &hw->rss_info;
	uint16_t idx, shift;
	uint16_t i;

	if (reta_size != hw->rss_ind_tbl_size) {
		hns3_err(hw, "The size of hash lookup table configured (%u)"
			 " doesn't match the number hardware can supported"
			 "(%u)", reta_size, hw->rss_ind_tbl_size);
		return -EINVAL;
	}
	rte_spinlock_lock(&hw->lock);
	for (i = 0; i < reta_size; i++) {
		idx = i / RTE_RETA_GROUP_SIZE;
		shift = i % RTE_RETA_GROUP_SIZE;
		if (reta_conf[idx].mask & (1ULL << shift))
			reta_conf[idx].reta[shift] =
						rss_cfg->rss_indirection_tbl[i];
	}
	rte_spinlock_unlock(&hw->lock);
	return 0;
}

static void
hns3_set_rss_tc_mode_entry(struct hns3_hw *hw, uint8_t *tc_valid,
			   uint16_t *tc_size, uint16_t *tc_offset,
			   uint8_t tc_num)
{
	struct hns3_adapter *hns = HNS3_DEV_HW_TO_ADAPTER(hw);
	uint16_t rss_size = hw->alloc_rss_size;
	uint16_t roundup_size;
	uint16_t i;

	roundup_size = roundup_pow_of_two(rss_size);
	roundup_size = ilog2(roundup_size);

	for (i = 0; i < tc_num; i++) {
		if (hns->is_vf) {
			/*
			 * For packets with VLAN priorities destined for the VF,
			 * hardware still assign Rx queue based on the Up-to-TC
			 * mapping PF configured. But VF has only one TC. If
			 * other TC don't enable, it causes that the priority
			 * packets that aren't destined for TC0 aren't received
			 * by RSS hash but is destined for queue 0. So driver
			 * has to enable the unused TC by using TC0 queue
			 * mapping configuration.
			 */
			tc_valid[i] = (hw->hw_tc_map & BIT(i)) ?
					!!(hw->hw_tc_map & BIT(i)) : 1;
			tc_size[i] = roundup_size;
			tc_offset[i] = (hw->hw_tc_map & BIT(i)) ?
					rss_size * i : 0;
		} else {
			tc_valid[i] = !!(hw->hw_tc_map & BIT(i));
			tc_size[i] = tc_valid[i] ? roundup_size : 0;
			tc_offset[i] = tc_valid[i] ? rss_size * i : 0;
		}
	}
}

static int
hns3_set_rss_tc_mode(struct hns3_hw *hw)
{
	struct hns3_rss_tc_mode_cmd *req;
	uint16_t tc_offset[HNS3_MAX_TC_NUM];
	uint8_t tc_valid[HNS3_MAX_TC_NUM];
	uint16_t tc_size[HNS3_MAX_TC_NUM];
	struct hns3_cmd_desc desc;
	uint16_t i;
	int ret;

	hns3_set_rss_tc_mode_entry(hw, tc_valid, tc_size,
				   tc_offset, HNS3_MAX_TC_NUM);

	req = (struct hns3_rss_tc_mode_cmd *)desc.data;
	hns3_cmd_setup_basic_desc(&desc, HNS3_OPC_RSS_TC_MODE, false);
	for (i = 0; i < HNS3_MAX_TC_NUM; i++) {
		uint16_t mode = 0;

		hns3_set_bit(mode, HNS3_RSS_TC_VALID_B, (tc_valid[i] & 0x1));
		hns3_set_field(mode, HNS3_RSS_TC_SIZE_M, HNS3_RSS_TC_SIZE_S,
			       tc_size[i]);
		if (tc_size[i] >> HNS3_RSS_TC_SIZE_MSB_OFFSET > 0)
			hns3_set_bit(mode, HNS3_RSS_TC_SIZE_MSB_S, 1);
		hns3_set_field(mode, HNS3_RSS_TC_OFFSET_M, HNS3_RSS_TC_OFFSET_S,
			       tc_offset[i]);

		req->rss_tc_mode[i] = rte_cpu_to_le_16(mode);
	}
	ret = hns3_cmd_send(hw, &desc, 1);
	if (ret)
		hns3_err(hw, "Sets rss tc mode failed %d", ret);

	return ret;
}

static void
hns3_rss_tuple_uninit(struct hns3_hw *hw)
{
	struct hns3_rss_input_tuple_cmd *req;
	struct hns3_cmd_desc desc;
	int ret;

	hns3_cmd_setup_basic_desc(&desc, HNS3_OPC_RSS_INPUT_TUPLE, false);

	req = (struct hns3_rss_input_tuple_cmd *)desc.data;

	memset(req, 0, sizeof(struct hns3_rss_tuple_cfg));

	ret = hns3_cmd_send(hw, &desc, 1);
	if (ret) {
		hns3_err(hw, "RSS uninit tuple failed %d", ret);
		return;
	}
}

/*
 * Set the default rss configuration in the init of driver.
 */
void
hns3_set_default_rss_args(struct hns3_hw *hw)
{
	struct hns3_rss_conf *rss_cfg = &hw->rss_info;
	uint16_t queue_num = hw->alloc_rss_size;
	int i;

	/* Default hash algorithm */
	rss_cfg->conf.func = RTE_ETH_HASH_FUNCTION_TOEPLITZ;

	/* Default RSS key */
	memcpy(rss_cfg->key, hns3_hash_key, HNS3_RSS_KEY_SIZE);

	/* Initialize RSS indirection table */
	for (i = 0; i < hw->rss_ind_tbl_size; i++)
		rss_cfg->rss_indirection_tbl[i] = i % queue_num;
}

/*
 * RSS initialization for hns3 PMD.
 */
int
hns3_config_rss(struct hns3_adapter *hns)
{
	struct hns3_hw *hw = &hns->hw;
	struct hns3_rss_conf *rss_cfg = &hw->rss_info;
	uint8_t *hash_key = rss_cfg->key;
	uint64_t rss_hf;
	int ret;

	enum rte_eth_rx_mq_mode mq_mode = hw->data->dev_conf.rxmode.mq_mode;

	switch (hw->rss_info.conf.func) {
	case RTE_ETH_HASH_FUNCTION_SIMPLE_XOR:
		hw->rss_info.hash_algo = HNS3_RSS_HASH_ALGO_SIMPLE;
		break;
	case RTE_ETH_HASH_FUNCTION_SYMMETRIC_TOEPLITZ:
		hw->rss_info.hash_algo = HNS3_RSS_HASH_ALGO_SYMMETRIC_TOEP;
		break;
	default:
		hw->rss_info.hash_algo = HNS3_RSS_HASH_ALGO_TOEPLITZ;
		break;
	}

	/* Configure RSS hash algorithm and hash key offset */
	ret = hns3_set_rss_algo_key(hw, hash_key);
	if (ret)
		return ret;

	ret = hns3_set_rss_indir_table(hw, rss_cfg->rss_indirection_tbl,
				       hw->rss_ind_tbl_size);
	if (ret)
		return ret;

	ret = hns3_set_rss_tc_mode(hw);
	if (ret)
		return ret;

	/*
	 * When muli-queue RSS mode flag is not set or unsupported tuples are
	 * set, disable all tuples.
	 */
	rss_hf = hw->rss_info.conf.types;
	if (!((uint32_t)mq_mode & ETH_MQ_RX_RSS_FLAG) ||
	    !(rss_hf & HNS3_ETH_RSS_SUPPORT))
		rss_hf = 0;

	return hns3_set_rss_tuple_by_rss_hf(hw, rss_hf);
}

/*
 * RSS uninitialization for hns3 PMD.
 */
void
hns3_rss_uninit(struct hns3_adapter *hns)
{
	struct hns3_hw *hw = &hns->hw;
	int ret;

	hns3_rss_tuple_uninit(hw);
	ret = hns3_rss_reset_indir_table(hw);
	if (ret != 0)
		return;

	/* Disable RSS */
	hw->rss_info.conf.types = 0;
}
