/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PCCH-Config.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_defaultPagingCycle_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_nB_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_defaultPagingCycle_value2enum_2[] = {
	{ 0,	4,	"rf32" },
	{ 1,	4,	"rf64" },
	{ 2,	5,	"rf128" },
	{ 3,	5,	"rf256" }
};
static const unsigned int asn_MAP_LTE_defaultPagingCycle_enum2value_2[] = {
	2,	/* rf128(2) */
	3,	/* rf256(3) */
	0,	/* rf32(0) */
	1	/* rf64(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_defaultPagingCycle_specs_2 = {
	asn_MAP_LTE_defaultPagingCycle_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_defaultPagingCycle_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_defaultPagingCycle_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_defaultPagingCycle_2 = {
	"defaultPagingCycle",
	"defaultPagingCycle",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_defaultPagingCycle_tags_2,
	sizeof(asn_DEF_LTE_defaultPagingCycle_tags_2)
		/sizeof(asn_DEF_LTE_defaultPagingCycle_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_defaultPagingCycle_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_defaultPagingCycle_tags_2)
		/sizeof(asn_DEF_LTE_defaultPagingCycle_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_defaultPagingCycle_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_defaultPagingCycle_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nB_value2enum_7[] = {
	{ 0,	5,	"fourT" },
	{ 1,	4,	"twoT" },
	{ 2,	4,	"oneT" },
	{ 3,	5,	"halfT" },
	{ 4,	8,	"quarterT" },
	{ 5,	10,	"oneEighthT" },
	{ 6,	13,	"oneSixteenthT" },
	{ 7,	16,	"oneThirtySecondT" }
};
static const unsigned int asn_MAP_LTE_nB_enum2value_7[] = {
	0,	/* fourT(0) */
	3,	/* halfT(3) */
	5,	/* oneEighthT(5) */
	6,	/* oneSixteenthT(6) */
	2,	/* oneT(2) */
	7,	/* oneThirtySecondT(7) */
	4,	/* quarterT(4) */
	1	/* twoT(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nB_specs_7 = {
	asn_MAP_LTE_nB_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nB_enum2value_7,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nB_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nB_7 = {
	"nB",
	"nB",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nB_tags_7,
	sizeof(asn_DEF_LTE_nB_tags_7)
		/sizeof(asn_DEF_LTE_nB_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_nB_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_nB_tags_7)
		/sizeof(asn_DEF_LTE_nB_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_nB_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nB_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PCCH_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PCCH_Config, defaultPagingCycle),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_defaultPagingCycle_2,
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
		"defaultPagingCycle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PCCH_Config, nB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nB_7,
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
		"nB"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PCCH_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PCCH_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultPagingCycle */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nB */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PCCH_Config_specs_1 = {
	sizeof(struct LTE_PCCH_Config),
	offsetof(struct LTE_PCCH_Config, _asn_ctx),
	asn_MAP_LTE_PCCH_Config_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PCCH_Config = {
	"PCCH-Config",
	"PCCH-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PCCH_Config_tags_1,
	sizeof(asn_DEF_LTE_PCCH_Config_tags_1)
		/sizeof(asn_DEF_LTE_PCCH_Config_tags_1[0]), /* 1 */
	asn_DEF_LTE_PCCH_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PCCH_Config_tags_1)
		/sizeof(asn_DEF_LTE_PCCH_Config_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_PCCH_Config_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PCCH_Config_specs_1	/* Additional specs */
};

