/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_Environment.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LPP_Environment_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_Environment_value2enum_1[] = {
	{ 0,	7,	"badArea" },
	{ 1,	10,	"notBadArea" },
	{ 2,	9,	"mixedArea" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_Environment_enum2value_1[] = {
	0,	/* badArea(0) */
	2,	/* mixedArea(2) */
	1	/* notBadArea(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_LPP_Environment_specs_1 = {
	asn_MAP_LPP_Environment_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_Environment_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_Environment_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LPP_Environment = {
	"Environment",
	"Environment",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_Environment_tags_1,
	sizeof(asn_DEF_LPP_Environment_tags_1)
		/sizeof(asn_DEF_LPP_Environment_tags_1[0]), /* 1 */
	asn_DEF_LPP_Environment_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_Environment_tags_1)
		/sizeof(asn_DEF_LPP_Environment_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_Environment_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_Environment_specs_1	/* Additional specs */
};

