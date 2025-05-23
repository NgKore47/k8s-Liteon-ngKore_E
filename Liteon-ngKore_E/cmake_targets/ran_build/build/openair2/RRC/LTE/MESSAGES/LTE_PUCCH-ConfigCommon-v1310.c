/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PUCCH-ConfigCommon-v1310.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_value2enum_3[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" }
};
static const unsigned int asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_enum2value_3[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_specs_3 = {
	asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_3 = {
	"pucch-NumRepetitionCE-Msg4-Level0-r13",
	"pucch-NumRepetitionCE-Msg4-Level0-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_tags_3,
	sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_tags_3)
		/sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_tags_3)
		/sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_value2enum_8[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" }
};
static const unsigned int asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_enum2value_8[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_specs_8 = {
	asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_enum2value_8,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_8 = {
	"pucch-NumRepetitionCE-Msg4-Level1-r13",
	"pucch-NumRepetitionCE-Msg4-Level1-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_tags_8,
	sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_tags_8)
		/sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_tags_8)
		/sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_value2enum_13[] = {
	{ 0,	2,	"n4" },
	{ 1,	2,	"n8" },
	{ 2,	3,	"n16" },
	{ 3,	3,	"n32" }
};
static const unsigned int asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_enum2value_13[] = {
	2,	/* n16(2) */
	3,	/* n32(3) */
	0,	/* n4(0) */
	1	/* n8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_specs_13 = {
	asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_enum2value_13,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_13 = {
	"pucch-NumRepetitionCE-Msg4-Level2-r13",
	"pucch-NumRepetitionCE-Msg4-Level2-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_tags_13,
	sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_tags_13)
		/sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_tags_13)
		/sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_value2enum_18[] = {
	{ 0,	2,	"n4" },
	{ 1,	2,	"n8" },
	{ 2,	3,	"n16" },
	{ 3,	3,	"n32" }
};
static const unsigned int asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_enum2value_18[] = {
	2,	/* n16(2) */
	3,	/* n32(3) */
	0,	/* n4(0) */
	1	/* n8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_specs_18 = {
	asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_enum2value_18,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_18 = {
	"pucch-NumRepetitionCE-Msg4-Level3-r13",
	"pucch-NumRepetitionCE-Msg4-Level3-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_tags_18,
	sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_tags_18)
		/sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_tags_18[0]) - 1, /* 1 */
	asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_tags_18,	/* Same as above */
	sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_tags_18)
		/sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_specs_18	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PUCCH_ConfigCommon_v1310_1[] = {
	{ ATF_POINTER, 5, offsetof(struct LTE_PUCCH_ConfigCommon_v1310, n1PUCCH_AN_InfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_N1PUCCH_AN_InfoList_r13,
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
		"n1PUCCH-AN-InfoList-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_PUCCH_ConfigCommon_v1310, pucch_NumRepetitionCE_Msg4_Level0_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_3,
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
		"pucch-NumRepetitionCE-Msg4-Level0-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_PUCCH_ConfigCommon_v1310, pucch_NumRepetitionCE_Msg4_Level1_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_8,
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
		"pucch-NumRepetitionCE-Msg4-Level1-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_PUCCH_ConfigCommon_v1310, pucch_NumRepetitionCE_Msg4_Level2_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_13,
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
		"pucch-NumRepetitionCE-Msg4-Level2-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PUCCH_ConfigCommon_v1310, pucch_NumRepetitionCE_Msg4_Level3_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_18,
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
		"pucch-NumRepetitionCE-Msg4-Level3-r13"
		},
};
static const int asn_MAP_LTE_PUCCH_ConfigCommon_v1310_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_PUCCH_ConfigCommon_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PUCCH_ConfigCommon_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n1PUCCH-AN-InfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pucch-NumRepetitionCE-Msg4-Level0-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pucch-NumRepetitionCE-Msg4-Level1-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pucch-NumRepetitionCE-Msg4-Level2-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* pucch-NumRepetitionCE-Msg4-Level3-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PUCCH_ConfigCommon_v1310_specs_1 = {
	sizeof(struct LTE_PUCCH_ConfigCommon_v1310),
	offsetof(struct LTE_PUCCH_ConfigCommon_v1310, _asn_ctx),
	asn_MAP_LTE_PUCCH_ConfigCommon_v1310_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_PUCCH_ConfigCommon_v1310_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PUCCH_ConfigCommon_v1310 = {
	"PUCCH-ConfigCommon-v1310",
	"PUCCH-ConfigCommon-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PUCCH_ConfigCommon_v1310_tags_1,
	sizeof(asn_DEF_LTE_PUCCH_ConfigCommon_v1310_tags_1)
		/sizeof(asn_DEF_LTE_PUCCH_ConfigCommon_v1310_tags_1[0]), /* 1 */
	asn_DEF_LTE_PUCCH_ConfigCommon_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PUCCH_ConfigCommon_v1310_tags_1)
		/sizeof(asn_DEF_LTE_PUCCH_ConfigCommon_v1310_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_PUCCH_ConfigCommon_v1310_1,
	5,	/* Elements count */
	&asn_SPC_LTE_PUCCH_ConfigCommon_v1310_specs_1	/* Additional specs */
};

