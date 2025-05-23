/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_CommonIEsError.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_errorCause_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_errorCause_value2enum_2[] = {
	{ 0,	9,	"undefined" },
	{ 1,	21,	"lppMessageHeaderError" },
	{ 2,	19,	"lppMessageBodyError" },
	{ 3,	9,	"epduError" },
	{ 4,	18,	"incorrectDataValue" },
	{ 5,	26,	"lppSegmentationError-v1450" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_errorCause_enum2value_2[] = {
	3,	/* epduError(3) */
	4,	/* incorrectDataValue(4) */
	2,	/* lppMessageBodyError(2) */
	1,	/* lppMessageHeaderError(1) */
	5,	/* lppSegmentationError-v1450(5) */
	0	/* undefined(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_errorCause_specs_2 = {
	asn_MAP_LPP_errorCause_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_errorCause_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_errorCause_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_errorCause_2 = {
	"errorCause",
	"errorCause",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_errorCause_tags_2,
	sizeof(asn_DEF_LPP_errorCause_tags_2)
		/sizeof(asn_DEF_LPP_errorCause_tags_2[0]) - 1, /* 1 */
	asn_DEF_LPP_errorCause_tags_2,	/* Same as above */
	sizeof(asn_DEF_LPP_errorCause_tags_2)
		/sizeof(asn_DEF_LPP_errorCause_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_errorCause_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_errorCause_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_CommonIEsError_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_CommonIEsError, errorCause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_errorCause_2,
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
		"errorCause"
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_CommonIEsError_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_CommonIEsError_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* errorCause */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_CommonIEsError_specs_1 = {
	sizeof(struct LPP_CommonIEsError),
	offsetof(struct LPP_CommonIEsError, _asn_ctx),
	asn_MAP_LPP_CommonIEsError_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_CommonIEsError = {
	"CommonIEsError",
	"CommonIEsError",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_CommonIEsError_tags_1,
	sizeof(asn_DEF_LPP_CommonIEsError_tags_1)
		/sizeof(asn_DEF_LPP_CommonIEsError_tags_1[0]), /* 1 */
	asn_DEF_LPP_CommonIEsError_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_CommonIEsError_tags_1)
		/sizeof(asn_DEF_LPP_CommonIEsError_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_CommonIEsError_1,
	1,	/* Elements count */
	&asn_SPC_LPP_CommonIEsError_specs_1	/* Additional specs */
};

