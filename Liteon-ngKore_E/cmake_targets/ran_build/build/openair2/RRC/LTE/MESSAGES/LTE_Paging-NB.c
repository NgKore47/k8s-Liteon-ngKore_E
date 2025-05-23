/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_Paging-NB.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_systemInfoModification_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_systemInfoModification_eDRX_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_systemInfoModification_r13_value2enum_3[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_systemInfoModification_r13_enum2value_3[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_systemInfoModification_r13_specs_3 = {
	asn_MAP_LTE_systemInfoModification_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_systemInfoModification_r13_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_systemInfoModification_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_systemInfoModification_r13_3 = {
	"systemInfoModification-r13",
	"systemInfoModification-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_systemInfoModification_r13_tags_3,
	sizeof(asn_DEF_LTE_systemInfoModification_r13_tags_3)
		/sizeof(asn_DEF_LTE_systemInfoModification_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_systemInfoModification_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_systemInfoModification_r13_tags_3)
		/sizeof(asn_DEF_LTE_systemInfoModification_r13_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_systemInfoModification_r13_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_systemInfoModification_r13_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_systemInfoModification_eDRX_r13_value2enum_5[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_systemInfoModification_eDRX_r13_enum2value_5[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_systemInfoModification_eDRX_r13_specs_5 = {
	asn_MAP_LTE_systemInfoModification_eDRX_r13_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_systemInfoModification_eDRX_r13_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_systemInfoModification_eDRX_r13_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_systemInfoModification_eDRX_r13_5 = {
	"systemInfoModification-eDRX-r13",
	"systemInfoModification-eDRX-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_systemInfoModification_eDRX_r13_tags_5,
	sizeof(asn_DEF_LTE_systemInfoModification_eDRX_r13_tags_5)
		/sizeof(asn_DEF_LTE_systemInfoModification_eDRX_r13_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_systemInfoModification_eDRX_r13_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_systemInfoModification_eDRX_r13_tags_5)
		/sizeof(asn_DEF_LTE_systemInfoModification_eDRX_r13_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_systemInfoModification_eDRX_r13_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_systemInfoModification_eDRX_r13_specs_5	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_nonCriticalExtension_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonCriticalExtension_specs_7 = {
	sizeof(struct LTE_Paging_NB__nonCriticalExtension),
	offsetof(struct LTE_Paging_NB__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonCriticalExtension_7 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonCriticalExtension_tags_7,
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_nonCriticalExtension_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_LTE_nonCriticalExtension_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_Paging_NB_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LTE_Paging_NB, pagingRecordList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PagingRecordList_NB_r13,
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
		"pagingRecordList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_Paging_NB, systemInfoModification_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_systemInfoModification_r13_3,
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
		"systemInfoModification-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_Paging_NB, systemInfoModification_eDRX_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_systemInfoModification_eDRX_r13_5,
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
		"systemInfoModification-eDRX-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_Paging_NB, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_nonCriticalExtension_7,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_Paging_NB_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_Paging_NB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_Paging_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingRecordList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* systemInfoModification-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* systemInfoModification-eDRX-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_Paging_NB_specs_1 = {
	sizeof(struct LTE_Paging_NB),
	offsetof(struct LTE_Paging_NB, _asn_ctx),
	asn_MAP_LTE_Paging_NB_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_Paging_NB_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_Paging_NB = {
	"Paging-NB",
	"Paging-NB",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_Paging_NB_tags_1,
	sizeof(asn_DEF_LTE_Paging_NB_tags_1)
		/sizeof(asn_DEF_LTE_Paging_NB_tags_1[0]), /* 1 */
	asn_DEF_LTE_Paging_NB_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_Paging_NB_tags_1)
		/sizeof(asn_DEF_LTE_Paging_NB_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_Paging_NB_1,
	4,	/* Elements count */
	&asn_SPC_LTE_Paging_NB_specs_1	/* Additional specs */
};

