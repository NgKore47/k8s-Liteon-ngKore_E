/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SRS-SwitchingTimeNR.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_switchingTimeDL_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_switchingTimeUL_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_switchingTimeDL_value2enum_2[] = {
	{ 0,	4,	"n0us" },
	{ 1,	5,	"n30us" },
	{ 2,	6,	"n100us" },
	{ 3,	6,	"n140us" },
	{ 4,	6,	"n200us" },
	{ 5,	6,	"n300us" },
	{ 6,	6,	"n500us" },
	{ 7,	6,	"n900us" }
};
static const unsigned int asn_MAP_NR_switchingTimeDL_enum2value_2[] = {
	0,	/* n0us(0) */
	2,	/* n100us(2) */
	3,	/* n140us(3) */
	4,	/* n200us(4) */
	5,	/* n300us(5) */
	1,	/* n30us(1) */
	6,	/* n500us(6) */
	7	/* n900us(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_switchingTimeDL_specs_2 = {
	asn_MAP_NR_switchingTimeDL_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_switchingTimeDL_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_switchingTimeDL_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_switchingTimeDL_2 = {
	"switchingTimeDL",
	"switchingTimeDL",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_switchingTimeDL_tags_2,
	sizeof(asn_DEF_NR_switchingTimeDL_tags_2)
		/sizeof(asn_DEF_NR_switchingTimeDL_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_switchingTimeDL_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_switchingTimeDL_tags_2)
		/sizeof(asn_DEF_NR_switchingTimeDL_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_switchingTimeDL_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_switchingTimeDL_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_switchingTimeUL_value2enum_11[] = {
	{ 0,	4,	"n0us" },
	{ 1,	5,	"n30us" },
	{ 2,	6,	"n100us" },
	{ 3,	6,	"n140us" },
	{ 4,	6,	"n200us" },
	{ 5,	6,	"n300us" },
	{ 6,	6,	"n500us" },
	{ 7,	6,	"n900us" }
};
static const unsigned int asn_MAP_NR_switchingTimeUL_enum2value_11[] = {
	0,	/* n0us(0) */
	2,	/* n100us(2) */
	3,	/* n140us(3) */
	4,	/* n200us(4) */
	5,	/* n300us(5) */
	1,	/* n30us(1) */
	6,	/* n500us(6) */
	7	/* n900us(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_switchingTimeUL_specs_11 = {
	asn_MAP_NR_switchingTimeUL_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_switchingTimeUL_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_switchingTimeUL_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_switchingTimeUL_11 = {
	"switchingTimeUL",
	"switchingTimeUL",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_switchingTimeUL_tags_11,
	sizeof(asn_DEF_NR_switchingTimeUL_tags_11)
		/sizeof(asn_DEF_NR_switchingTimeUL_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_switchingTimeUL_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_switchingTimeUL_tags_11)
		/sizeof(asn_DEF_NR_switchingTimeUL_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_switchingTimeUL_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_switchingTimeUL_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SRS_SwitchingTimeNR_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_SRS_SwitchingTimeNR, switchingTimeDL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_switchingTimeDL_2,
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
		"switchingTimeDL"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SRS_SwitchingTimeNR, switchingTimeUL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_switchingTimeUL_11,
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
		"switchingTimeUL"
		},
};
static const int asn_MAP_NR_SRS_SwitchingTimeNR_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_SRS_SwitchingTimeNR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SRS_SwitchingTimeNR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* switchingTimeDL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* switchingTimeUL */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SRS_SwitchingTimeNR_specs_1 = {
	sizeof(struct NR_SRS_SwitchingTimeNR),
	offsetof(struct NR_SRS_SwitchingTimeNR, _asn_ctx),
	asn_MAP_NR_SRS_SwitchingTimeNR_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_SRS_SwitchingTimeNR_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SRS_SwitchingTimeNR = {
	"SRS-SwitchingTimeNR",
	"SRS-SwitchingTimeNR",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SRS_SwitchingTimeNR_tags_1,
	sizeof(asn_DEF_NR_SRS_SwitchingTimeNR_tags_1)
		/sizeof(asn_DEF_NR_SRS_SwitchingTimeNR_tags_1[0]), /* 1 */
	asn_DEF_NR_SRS_SwitchingTimeNR_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SRS_SwitchingTimeNR_tags_1)
		/sizeof(asn_DEF_NR_SRS_SwitchingTimeNR_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SRS_SwitchingTimeNR_1,
	2,	/* Elements count */
	&asn_SPC_NR_SRS_SwitchingTimeNR_specs_1	/* Additional specs */
};

