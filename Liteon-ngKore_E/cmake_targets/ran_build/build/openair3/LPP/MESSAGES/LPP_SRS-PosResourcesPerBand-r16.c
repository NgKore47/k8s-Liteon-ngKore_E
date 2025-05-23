/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_SRS-PosResourcesPerBand-r16.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_maxNumberSRS_PosResourcesPerBWP_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_constr_34 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_value2enum_3[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n12" },
	{ 5,	3,	"n16" }
};
static const unsigned int asn_MAP_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_enum2value_3[] = {
	0,	/* n1(0) */
	4,	/* n12(4) */
	5,	/* n16(5) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_specs_3 = {
	asn_MAP_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_enum2value_3,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_3 = {
	"maxNumberSRS-PosResourceSetsPerBWP-r16",
	"maxNumberSRS-PosResourceSetsPerBWP-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_tags_3,
	sizeof(asn_DEF_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_tags_3)
		/sizeof(asn_DEF_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_tags_3)
		/sizeof(asn_DEF_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LPP_maxNumberSRS_PosResourcesPerBWP_r16_value2enum_10[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" }
};
static const unsigned int asn_MAP_LPP_maxNumberSRS_PosResourcesPerBWP_r16_enum2value_10[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_maxNumberSRS_PosResourcesPerBWP_r16_specs_10 = {
	asn_MAP_LPP_maxNumberSRS_PosResourcesPerBWP_r16_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_maxNumberSRS_PosResourcesPerBWP_r16_enum2value_10,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_maxNumberSRS_PosResourcesPerBWP_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_maxNumberSRS_PosResourcesPerBWP_r16_10 = {
	"maxNumberSRS-PosResourcesPerBWP-r16",
	"maxNumberSRS-PosResourcesPerBWP-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_maxNumberSRS_PosResourcesPerBWP_r16_tags_10,
	sizeof(asn_DEF_LPP_maxNumberSRS_PosResourcesPerBWP_r16_tags_10)
		/sizeof(asn_DEF_LPP_maxNumberSRS_PosResourcesPerBWP_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_LPP_maxNumberSRS_PosResourcesPerBWP_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_LPP_maxNumberSRS_PosResourcesPerBWP_r16_tags_10)
		/sizeof(asn_DEF_LPP_maxNumberSRS_PosResourcesPerBWP_r16_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_maxNumberSRS_PosResourcesPerBWP_r16_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_maxNumberSRS_PosResourcesPerBWP_r16_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_value2enum_18[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" }
};
static const unsigned int asn_MAP_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_enum2value_18[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_specs_18 = {
	asn_MAP_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_enum2value_18,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_18 = {
	"maxNumberPeriodicSRS-PosResourcesPerBWP-r16",
	"maxNumberPeriodicSRS-PosResourcesPerBWP-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_18,
	sizeof(asn_DEF_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_18)
		/sizeof(asn_DEF_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_18[0]) - 1, /* 1 */
	asn_DEF_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_18,	/* Same as above */
	sizeof(asn_DEF_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_18)
		/sizeof(asn_DEF_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_specs_18	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_value2enum_26[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" }
};
static const unsigned int asn_MAP_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_enum2value_26[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_specs_26 = {
	asn_MAP_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_enum2value_26,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_26 = {
	"maxNumberAP-SRS-PosResourcesPerBWP-r16",
	"maxNumberAP-SRS-PosResourcesPerBWP-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_26,
	sizeof(asn_DEF_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_26)
		/sizeof(asn_DEF_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_26[0]) - 1, /* 1 */
	asn_DEF_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_26,	/* Same as above */
	sizeof(asn_DEF_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_26)
		/sizeof(asn_DEF_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_tags_26[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_constr_26,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_value2enum_34[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" }
};
static const unsigned int asn_MAP_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_enum2value_34[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_specs_34 = {
	asn_MAP_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_value2enum_34,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_enum2value_34,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_tags_34[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_34 = {
	"maxNumberSP-SRS-PosResourcesPerBWP-r16",
	"maxNumberSP-SRS-PosResourcesPerBWP-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_tags_34,
	sizeof(asn_DEF_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_tags_34)
		/sizeof(asn_DEF_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_tags_34[0]) - 1, /* 1 */
	asn_DEF_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_tags_34,	/* Same as above */
	sizeof(asn_DEF_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_tags_34)
		/sizeof(asn_DEF_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_tags_34[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_constr_34,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_specs_34	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_SRS_PosResourcesPerBand_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_SRS_PosResourcesPerBand_r16, freqBandIndicatorNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_FreqBandIndicatorNR_r16,
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
		"freqBandIndicatorNR-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_SRS_PosResourcesPerBand_r16, maxNumberSRS_PosResourceSetsPerBWP_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_maxNumberSRS_PosResourceSetsPerBWP_r16_3,
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
		"maxNumberSRS-PosResourceSetsPerBWP-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_SRS_PosResourcesPerBand_r16, maxNumberSRS_PosResourcesPerBWP_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_maxNumberSRS_PosResourcesPerBWP_r16_10,
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
		"maxNumberSRS-PosResourcesPerBWP-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_SRS_PosResourcesPerBand_r16, maxNumberPeriodicSRS_PosResourcesPerBWP_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_18,
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
		"maxNumberPeriodicSRS-PosResourcesPerBWP-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_SRS_PosResourcesPerBand_r16, maxNumberAP_SRS_PosResourcesPerBWP_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_maxNumberAP_SRS_PosResourcesPerBWP_r16_26,
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
		"maxNumberAP-SRS-PosResourcesPerBWP-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_SRS_PosResourcesPerBand_r16, maxNumberSP_SRS_PosResourcesPerBWP_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_maxNumberSP_SRS_PosResourcesPerBWP_r16_34,
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
		"maxNumberSP-SRS-PosResourcesPerBWP-r16"
		},
};
static const int asn_MAP_LPP_SRS_PosResourcesPerBand_r16_oms_1[] = { 4, 5 };
static const ber_tlv_tag_t asn_DEF_LPP_SRS_PosResourcesPerBand_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_SRS_PosResourcesPerBand_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freqBandIndicatorNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberSRS-PosResourceSetsPerBWP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxNumberSRS-PosResourcesPerBWP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxNumberPeriodicSRS-PosResourcesPerBWP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* maxNumberAP-SRS-PosResourcesPerBWP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* maxNumberSP-SRS-PosResourcesPerBWP-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_SRS_PosResourcesPerBand_r16_specs_1 = {
	sizeof(struct LPP_SRS_PosResourcesPerBand_r16),
	offsetof(struct LPP_SRS_PosResourcesPerBand_r16, _asn_ctx),
	asn_MAP_LPP_SRS_PosResourcesPerBand_r16_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LPP_SRS_PosResourcesPerBand_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_SRS_PosResourcesPerBand_r16 = {
	"SRS-PosResourcesPerBand-r16",
	"SRS-PosResourcesPerBand-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_SRS_PosResourcesPerBand_r16_tags_1,
	sizeof(asn_DEF_LPP_SRS_PosResourcesPerBand_r16_tags_1)
		/sizeof(asn_DEF_LPP_SRS_PosResourcesPerBand_r16_tags_1[0]), /* 1 */
	asn_DEF_LPP_SRS_PosResourcesPerBand_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_SRS_PosResourcesPerBand_r16_tags_1)
		/sizeof(asn_DEF_LPP_SRS_PosResourcesPerBand_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_SRS_PosResourcesPerBand_r16_1,
	6,	/* Elements count */
	&asn_SPC_LPP_SRS_PosResourcesPerBand_r16_specs_1	/* Additional specs */
};

