/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_MBMS-SAI-InterFreq-NB-r14.h"

asn_TYPE_member_t asn_MBR_LTE_MBMS_SAI_InterFreq_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBMS_SAI_InterFreq_NB_r14, dl_CarrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CarrierFreq_NB_r13,
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
		"dl-CarrierFreq-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBMS_SAI_InterFreq_NB_r14, mbms_SAI_List_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MBMS_SAI_List_r11,
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
		"mbms-SAI-List-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MBMS_SAI_InterFreq_NB_r14, multiBandInfoList_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AdditionalBandInfoList_NB_r14,
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
		"multiBandInfoList-r14"
		},
};
static const int asn_MAP_LTE_MBMS_SAI_InterFreq_NB_r14_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_LTE_MBMS_SAI_InterFreq_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MBMS_SAI_InterFreq_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CarrierFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-SAI-List-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* multiBandInfoList-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMS_SAI_InterFreq_NB_r14_specs_1 = {
	sizeof(struct LTE_MBMS_SAI_InterFreq_NB_r14),
	offsetof(struct LTE_MBMS_SAI_InterFreq_NB_r14, _asn_ctx),
	asn_MAP_LTE_MBMS_SAI_InterFreq_NB_r14_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_MBMS_SAI_InterFreq_NB_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MBMS_SAI_InterFreq_NB_r14 = {
	"MBMS-SAI-InterFreq-NB-r14",
	"MBMS-SAI-InterFreq-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MBMS_SAI_InterFreq_NB_r14_tags_1,
	sizeof(asn_DEF_LTE_MBMS_SAI_InterFreq_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_MBMS_SAI_InterFreq_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_MBMS_SAI_InterFreq_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MBMS_SAI_InterFreq_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_MBMS_SAI_InterFreq_NB_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_MBMS_SAI_InterFreq_NB_r14_1,
	3,	/* Elements count */
	&asn_SPC_LTE_MBMS_SAI_InterFreq_NB_r14_specs_1	/* Additional specs */
};

