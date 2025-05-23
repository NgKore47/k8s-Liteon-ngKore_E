/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SIB4.h"

static asn_TYPE_member_t asn_MBR_NR_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SIB4__ext1, interFreqCarrierFreqList_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_InterFreqCarrierFreqList_v1610,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"interFreqCarrierFreqList-v1610"
		},
};
static const int asn_MAP_NR_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* interFreqCarrierFreqList-v1610 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_5 = {
	sizeof(struct NR_SIB4__ext1),
	offsetof(struct NR_SIB4__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_5,
	sizeof(asn_DEF_NR_ext1_tags_5)
		/sizeof(asn_DEF_NR_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_5)
		/sizeof(asn_DEF_NR_ext1_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext1_5,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext2_7[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SIB4__ext2, interFreqCarrierFreqList_v1700),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_InterFreqCarrierFreqList_v1700,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"interFreqCarrierFreqList-v1700"
		},
};
static const int asn_MAP_NR_ext2_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext2_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext2_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* interFreqCarrierFreqList-v1700 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext2_specs_7 = {
	sizeof(struct NR_SIB4__ext2),
	offsetof(struct NR_SIB4__ext2, _asn_ctx),
	asn_MAP_NR_ext2_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext2_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext2_7 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext2_tags_7,
	sizeof(asn_DEF_NR_ext2_tags_7)
		/sizeof(asn_DEF_NR_ext2_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_ext2_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_ext2_tags_7)
		/sizeof(asn_DEF_NR_ext2_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext2_7,
	1,	/* Elements count */
	&asn_SPC_NR_ext2_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext3_9[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SIB4__ext3, interFreqCarrierFreqList_v1720),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_InterFreqCarrierFreqList_v1720,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"interFreqCarrierFreqList-v1720"
		},
};
static const int asn_MAP_NR_ext3_oms_9[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext3_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext3_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* interFreqCarrierFreqList-v1720 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext3_specs_9 = {
	sizeof(struct NR_SIB4__ext3),
	offsetof(struct NR_SIB4__ext3, _asn_ctx),
	asn_MAP_NR_ext3_tag2el_9,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext3_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext3_9 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext3_tags_9,
	sizeof(asn_DEF_NR_ext3_tags_9)
		/sizeof(asn_DEF_NR_ext3_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_ext3_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_ext3_tags_9)
		/sizeof(asn_DEF_NR_ext3_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext3_9,
	1,	/* Elements count */
	&asn_SPC_NR_ext3_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext4_11[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SIB4__ext4, interFreqCarrierFreqList_v1730),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_InterFreqCarrierFreqList_v1730,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"interFreqCarrierFreqList-v1730"
		},
};
static const int asn_MAP_NR_ext4_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext4_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext4_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* interFreqCarrierFreqList-v1730 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext4_specs_11 = {
	sizeof(struct NR_SIB4__ext4),
	offsetof(struct NR_SIB4__ext4, _asn_ctx),
	asn_MAP_NR_ext4_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext4_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext4_11 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext4_tags_11,
	sizeof(asn_DEF_NR_ext4_tags_11)
		/sizeof(asn_DEF_NR_ext4_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_ext4_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_ext4_tags_11)
		/sizeof(asn_DEF_NR_ext4_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext4_11,
	1,	/* Elements count */
	&asn_SPC_NR_ext4_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SIB4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SIB4, interFreqCarrierFreqList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_InterFreqCarrierFreqList,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"interFreqCarrierFreqList"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_SIB4, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_SIB4, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_ext1_5,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SIB4, ext2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_ext2_7,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SIB4, ext3),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_ext3_9,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SIB4, ext4),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_ext4_11,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ext4"
		},
};
static const int asn_MAP_NR_SIB4_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_SIB4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SIB4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext4 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SIB4_specs_1 = {
	sizeof(struct NR_SIB4),
	offsetof(struct NR_SIB4, _asn_ctx),
	asn_MAP_NR_SIB4_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_SIB4_oms_1,	/* Optional members */
	1, 4,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SIB4 = {
	"SIB4",
	"SIB4",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SIB4_tags_1,
	sizeof(asn_DEF_NR_SIB4_tags_1)
		/sizeof(asn_DEF_NR_SIB4_tags_1[0]), /* 1 */
	asn_DEF_NR_SIB4_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SIB4_tags_1)
		/sizeof(asn_DEF_NR_SIB4_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SIB4_1,
	6,	/* Elements count */
	&asn_SPC_NR_SIB4_specs_1	/* Additional specs */
};

