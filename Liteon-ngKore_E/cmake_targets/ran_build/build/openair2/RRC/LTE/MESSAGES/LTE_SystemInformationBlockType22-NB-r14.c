/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SystemInformationBlockType22-NB-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pagingDistribution_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_nprach_Distribution_r15_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_pagingDistribution_r15_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_pagingDistribution_r15_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pagingDistribution_r15_specs_12 = {
	asn_MAP_LTE_pagingDistribution_r15_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pagingDistribution_r15_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pagingDistribution_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pagingDistribution_r15_12 = {
	"pagingDistribution-r15",
	"pagingDistribution-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pagingDistribution_r15_tags_12,
	sizeof(asn_DEF_LTE_pagingDistribution_r15_tags_12)
		/sizeof(asn_DEF_LTE_pagingDistribution_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_pagingDistribution_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_pagingDistribution_r15_tags_12)
		/sizeof(asn_DEF_LTE_pagingDistribution_r15_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pagingDistribution_r15_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pagingDistribution_r15_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_Distribution_r15_value2enum_14[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_nprach_Distribution_r15_enum2value_14[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_Distribution_r15_specs_14 = {
	asn_MAP_LTE_nprach_Distribution_r15_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_Distribution_r15_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_Distribution_r15_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_Distribution_r15_14 = {
	"nprach-Distribution-r15",
	"nprach-Distribution-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_Distribution_r15_tags_14,
	sizeof(asn_DEF_LTE_nprach_Distribution_r15_tags_14)
		/sizeof(asn_DEF_LTE_nprach_Distribution_r15_tags_14[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_Distribution_r15_tags_14,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_Distribution_r15_tags_14)
		/sizeof(asn_DEF_LTE_nprach_Distribution_r15_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_nprach_Distribution_r15_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_Distribution_r15_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_mixedOperationModeConfig_r15_9[] = {
	{ ATF_POINTER, 4, offsetof(struct LTE_SystemInformationBlockType22_NB_r14__ext1__mixedOperationModeConfig_r15, dl_ConfigListMixed_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DL_ConfigCommonList_NB_r14,
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
		"dl-ConfigListMixed-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType22_NB_r14__ext1__mixedOperationModeConfig_r15, ul_ConfigListMixed_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UL_ConfigCommonList_NB_r14,
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
		"ul-ConfigListMixed-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType22_NB_r14__ext1__mixedOperationModeConfig_r15, pagingDistribution_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pagingDistribution_r15_12,
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
		"pagingDistribution-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType22_NB_r14__ext1__mixedOperationModeConfig_r15, nprach_Distribution_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_Distribution_r15_14,
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
		"nprach-Distribution-r15"
		},
};
static const int asn_MAP_LTE_mixedOperationModeConfig_r15_oms_9[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_mixedOperationModeConfig_r15_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_mixedOperationModeConfig_r15_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-ConfigListMixed-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-ConfigListMixed-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pagingDistribution-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nprach-Distribution-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_mixedOperationModeConfig_r15_specs_9 = {
	sizeof(struct LTE_SystemInformationBlockType22_NB_r14__ext1__mixedOperationModeConfig_r15),
	offsetof(struct LTE_SystemInformationBlockType22_NB_r14__ext1__mixedOperationModeConfig_r15, _asn_ctx),
	asn_MAP_LTE_mixedOperationModeConfig_r15_tag2el_9,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_mixedOperationModeConfig_r15_oms_9,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mixedOperationModeConfig_r15_9 = {
	"mixedOperationModeConfig-r15",
	"mixedOperationModeConfig-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_mixedOperationModeConfig_r15_tags_9,
	sizeof(asn_DEF_LTE_mixedOperationModeConfig_r15_tags_9)
		/sizeof(asn_DEF_LTE_mixedOperationModeConfig_r15_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_mixedOperationModeConfig_r15_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_mixedOperationModeConfig_r15_tags_9)
		/sizeof(asn_DEF_LTE_mixedOperationModeConfig_r15_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_mixedOperationModeConfig_r15_9,
	4,	/* Elements count */
	&asn_SPC_LTE_mixedOperationModeConfig_r15_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_8[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType22_NB_r14__ext1, mixedOperationModeConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_mixedOperationModeConfig_r15_9,
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
		"mixedOperationModeConfig-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType22_NB_r14__ext1, ul_ConfigList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UL_ConfigCommonListTDD_NB_r15,
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
		"ul-ConfigList-r15"
		},
};
static const int asn_MAP_LTE_ext1_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mixedOperationModeConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-ConfigList-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_8 = {
	sizeof(struct LTE_SystemInformationBlockType22_NB_r14__ext1),
	offsetof(struct LTE_SystemInformationBlockType22_NB_r14__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_8 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_8,
	sizeof(asn_DEF_LTE_ext1_tags_8)
		/sizeof(asn_DEF_LTE_ext1_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_8)
		/sizeof(asn_DEF_LTE_ext1_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext1_8,
	2,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType22_NB_r14_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_SystemInformationBlockType22_NB_r14, dl_ConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DL_ConfigCommonList_NB_r14,
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
		"dl-ConfigList-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SystemInformationBlockType22_NB_r14, ul_ConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UL_ConfigCommonList_NB_r14,
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
		"ul-ConfigList-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SystemInformationBlockType22_NB_r14, pagingWeightAnchor_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PagingWeight_NB_r14,
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
		"pagingWeightAnchor-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType22_NB_r14, nprach_ProbabilityAnchorList_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NPRACH_ProbabilityAnchorList_NB_r14,
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
		"nprach-ProbabilityAnchorList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType22_NB_r14, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
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
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType22_NB_r14, ext1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_ext1_8,
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
};
static const int asn_MAP_LTE_SystemInformationBlockType22_NB_r14_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType22_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-ConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-ConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pagingWeightAnchor-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nprach-ProbabilityAnchorList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType22_NB_r14_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType22_NB_r14),
	offsetof(struct LTE_SystemInformationBlockType22_NB_r14, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType22_NB_r14_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType22_NB_r14_oms_1,	/* Optional members */
	5, 1,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType22_NB_r14 = {
	"SystemInformationBlockType22-NB-r14",
	"SystemInformationBlockType22-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SystemInformationBlockType22_NB_r14_1,
	6,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType22_NB_r14_specs_1	/* Additional specs */
};

