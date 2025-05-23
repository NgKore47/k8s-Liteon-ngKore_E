/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PowerRampingParameters.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_powerRampingStep_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_preambleInitialReceivedTargetPower_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_powerRampingStep_value2enum_2[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB2" },
	{ 2,	3,	"dB4" },
	{ 3,	3,	"dB6" }
};
static const unsigned int asn_MAP_LTE_powerRampingStep_enum2value_2[] = {
	0,	/* dB0(0) */
	1,	/* dB2(1) */
	2,	/* dB4(2) */
	3	/* dB6(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_powerRampingStep_specs_2 = {
	asn_MAP_LTE_powerRampingStep_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_powerRampingStep_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_powerRampingStep_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_powerRampingStep_2 = {
	"powerRampingStep",
	"powerRampingStep",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_powerRampingStep_tags_2,
	sizeof(asn_DEF_LTE_powerRampingStep_tags_2)
		/sizeof(asn_DEF_LTE_powerRampingStep_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_powerRampingStep_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_powerRampingStep_tags_2)
		/sizeof(asn_DEF_LTE_powerRampingStep_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_powerRampingStep_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_powerRampingStep_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_preambleInitialReceivedTargetPower_value2enum_7[] = {
	{ 0,	7,	"dBm-120" },
	{ 1,	7,	"dBm-118" },
	{ 2,	7,	"dBm-116" },
	{ 3,	7,	"dBm-114" },
	{ 4,	7,	"dBm-112" },
	{ 5,	7,	"dBm-110" },
	{ 6,	7,	"dBm-108" },
	{ 7,	7,	"dBm-106" },
	{ 8,	7,	"dBm-104" },
	{ 9,	7,	"dBm-102" },
	{ 10,	7,	"dBm-100" },
	{ 11,	6,	"dBm-98" },
	{ 12,	6,	"dBm-96" },
	{ 13,	6,	"dBm-94" },
	{ 14,	6,	"dBm-92" },
	{ 15,	6,	"dBm-90" }
};
static const unsigned int asn_MAP_LTE_preambleInitialReceivedTargetPower_enum2value_7[] = {
	10,	/* dBm-100(10) */
	9,	/* dBm-102(9) */
	8,	/* dBm-104(8) */
	7,	/* dBm-106(7) */
	6,	/* dBm-108(6) */
	5,	/* dBm-110(5) */
	4,	/* dBm-112(4) */
	3,	/* dBm-114(3) */
	2,	/* dBm-116(2) */
	1,	/* dBm-118(1) */
	0,	/* dBm-120(0) */
	15,	/* dBm-90(15) */
	14,	/* dBm-92(14) */
	13,	/* dBm-94(13) */
	12,	/* dBm-96(12) */
	11	/* dBm-98(11) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_preambleInitialReceivedTargetPower_specs_7 = {
	asn_MAP_LTE_preambleInitialReceivedTargetPower_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_preambleInitialReceivedTargetPower_enum2value_7,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_preambleInitialReceivedTargetPower_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_preambleInitialReceivedTargetPower_7 = {
	"preambleInitialReceivedTargetPower",
	"preambleInitialReceivedTargetPower",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_preambleInitialReceivedTargetPower_tags_7,
	sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPower_tags_7)
		/sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPower_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_preambleInitialReceivedTargetPower_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPower_tags_7)
		/sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPower_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_preambleInitialReceivedTargetPower_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_preambleInitialReceivedTargetPower_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PowerRampingParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PowerRampingParameters, powerRampingStep),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_powerRampingStep_2,
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
		"powerRampingStep"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PowerRampingParameters, preambleInitialReceivedTargetPower),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_preambleInitialReceivedTargetPower_7,
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
		"preambleInitialReceivedTargetPower"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PowerRampingParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PowerRampingParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* powerRampingStep */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* preambleInitialReceivedTargetPower */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PowerRampingParameters_specs_1 = {
	sizeof(struct LTE_PowerRampingParameters),
	offsetof(struct LTE_PowerRampingParameters, _asn_ctx),
	asn_MAP_LTE_PowerRampingParameters_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PowerRampingParameters = {
	"PowerRampingParameters",
	"PowerRampingParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PowerRampingParameters_tags_1,
	sizeof(asn_DEF_LTE_PowerRampingParameters_tags_1)
		/sizeof(asn_DEF_LTE_PowerRampingParameters_tags_1[0]), /* 1 */
	asn_DEF_LTE_PowerRampingParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PowerRampingParameters_tags_1)
		/sizeof(asn_DEF_LTE_PowerRampingParameters_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_PowerRampingParameters_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PowerRampingParameters_specs_1	/* Additional specs */
};

