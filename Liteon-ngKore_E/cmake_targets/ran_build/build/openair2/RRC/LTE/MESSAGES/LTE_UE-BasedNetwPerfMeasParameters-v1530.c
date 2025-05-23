/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_UE-BasedNetwPerfMeasParameters-v1530.h"

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
static asn_per_constraints_t asn_PER_type_LTE_loggedMeasBT_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_loggedMeasWLAN_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_immMeasBT_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_immMeasWLAN_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_loggedMeasBT_r15_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_loggedMeasBT_r15_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_loggedMeasBT_r15_specs_2 = {
	asn_MAP_LTE_loggedMeasBT_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_loggedMeasBT_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_loggedMeasBT_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_loggedMeasBT_r15_2 = {
	"loggedMeasBT-r15",
	"loggedMeasBT-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_loggedMeasBT_r15_tags_2,
	sizeof(asn_DEF_LTE_loggedMeasBT_r15_tags_2)
		/sizeof(asn_DEF_LTE_loggedMeasBT_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_loggedMeasBT_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_loggedMeasBT_r15_tags_2)
		/sizeof(asn_DEF_LTE_loggedMeasBT_r15_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_loggedMeasBT_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_loggedMeasBT_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_loggedMeasWLAN_r15_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_loggedMeasWLAN_r15_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_loggedMeasWLAN_r15_specs_4 = {
	asn_MAP_LTE_loggedMeasWLAN_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_loggedMeasWLAN_r15_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_loggedMeasWLAN_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_loggedMeasWLAN_r15_4 = {
	"loggedMeasWLAN-r15",
	"loggedMeasWLAN-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_loggedMeasWLAN_r15_tags_4,
	sizeof(asn_DEF_LTE_loggedMeasWLAN_r15_tags_4)
		/sizeof(asn_DEF_LTE_loggedMeasWLAN_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_loggedMeasWLAN_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_loggedMeasWLAN_r15_tags_4)
		/sizeof(asn_DEF_LTE_loggedMeasWLAN_r15_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_loggedMeasWLAN_r15_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_loggedMeasWLAN_r15_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_immMeasBT_r15_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_immMeasBT_r15_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_immMeasBT_r15_specs_6 = {
	asn_MAP_LTE_immMeasBT_r15_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_immMeasBT_r15_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_immMeasBT_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_immMeasBT_r15_6 = {
	"immMeasBT-r15",
	"immMeasBT-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_immMeasBT_r15_tags_6,
	sizeof(asn_DEF_LTE_immMeasBT_r15_tags_6)
		/sizeof(asn_DEF_LTE_immMeasBT_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_immMeasBT_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_immMeasBT_r15_tags_6)
		/sizeof(asn_DEF_LTE_immMeasBT_r15_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_immMeasBT_r15_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_immMeasBT_r15_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_immMeasWLAN_r15_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_immMeasWLAN_r15_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_immMeasWLAN_r15_specs_8 = {
	asn_MAP_LTE_immMeasWLAN_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_immMeasWLAN_r15_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_immMeasWLAN_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_immMeasWLAN_r15_8 = {
	"immMeasWLAN-r15",
	"immMeasWLAN-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_immMeasWLAN_r15_tags_8,
	sizeof(asn_DEF_LTE_immMeasWLAN_r15_tags_8)
		/sizeof(asn_DEF_LTE_immMeasWLAN_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_immMeasWLAN_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_immMeasWLAN_r15_tags_8)
		/sizeof(asn_DEF_LTE_immMeasWLAN_r15_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_immMeasWLAN_r15_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_immMeasWLAN_r15_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UE_BasedNetwPerfMeasParameters_v1530_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LTE_UE_BasedNetwPerfMeasParameters_v1530, loggedMeasBT_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_loggedMeasBT_r15_2,
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
		"loggedMeasBT-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_UE_BasedNetwPerfMeasParameters_v1530, loggedMeasWLAN_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_loggedMeasWLAN_r15_4,
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
		"loggedMeasWLAN-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_BasedNetwPerfMeasParameters_v1530, immMeasBT_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_immMeasBT_r15_6,
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
		"immMeasBT-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_BasedNetwPerfMeasParameters_v1530, immMeasWLAN_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_immMeasWLAN_r15_8,
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
		"immMeasWLAN-r15"
		},
};
static const int asn_MAP_LTE_UE_BasedNetwPerfMeasParameters_v1530_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_BasedNetwPerfMeasParameters_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_BasedNetwPerfMeasParameters_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* loggedMeasBT-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* loggedMeasWLAN-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* immMeasBT-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* immMeasWLAN-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_BasedNetwPerfMeasParameters_v1530_specs_1 = {
	sizeof(struct LTE_UE_BasedNetwPerfMeasParameters_v1530),
	offsetof(struct LTE_UE_BasedNetwPerfMeasParameters_v1530, _asn_ctx),
	asn_MAP_LTE_UE_BasedNetwPerfMeasParameters_v1530_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_UE_BasedNetwPerfMeasParameters_v1530_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_BasedNetwPerfMeasParameters_v1530 = {
	"UE-BasedNetwPerfMeasParameters-v1530",
	"UE-BasedNetwPerfMeasParameters-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_BasedNetwPerfMeasParameters_v1530_tags_1,
	sizeof(asn_DEF_LTE_UE_BasedNetwPerfMeasParameters_v1530_tags_1)
		/sizeof(asn_DEF_LTE_UE_BasedNetwPerfMeasParameters_v1530_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_BasedNetwPerfMeasParameters_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_BasedNetwPerfMeasParameters_v1530_tags_1)
		/sizeof(asn_DEF_LTE_UE_BasedNetwPerfMeasParameters_v1530_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_UE_BasedNetwPerfMeasParameters_v1530_1,
	4,	/* Elements count */
	&asn_SPC_LTE_UE_BasedNetwPerfMeasParameters_v1530_specs_1	/* Additional specs */
};

