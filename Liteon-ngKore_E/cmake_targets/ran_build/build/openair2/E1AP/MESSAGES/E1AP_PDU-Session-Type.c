/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_PDU-Session-Type.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_E1AP_PDU_Session_Type_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_E1AP_PDU_Session_Type_value2enum_1[] = {
	{ 0,	4,	"ipv4" },
	{ 1,	4,	"ipv6" },
	{ 2,	6,	"ipv4v6" },
	{ 3,	8,	"ethernet" },
	{ 4,	12,	"unstructured" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_E1AP_PDU_Session_Type_enum2value_1[] = {
	3,	/* ethernet(3) */
	0,	/* ipv4(0) */
	2,	/* ipv4v6(2) */
	1,	/* ipv6(1) */
	4	/* unstructured(4) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_E1AP_PDU_Session_Type_specs_1 = {
	asn_MAP_E1AP_PDU_Session_Type_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_E1AP_PDU_Session_Type_enum2value_1,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_E1AP_PDU_Session_Type_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E1AP_PDU_Session_Type = {
	"PDU-Session-Type",
	"PDU-Session-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_E1AP_PDU_Session_Type_tags_1,
	sizeof(asn_DEF_E1AP_PDU_Session_Type_tags_1)
		/sizeof(asn_DEF_E1AP_PDU_Session_Type_tags_1[0]), /* 1 */
	asn_DEF_E1AP_PDU_Session_Type_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_PDU_Session_Type_tags_1)
		/sizeof(asn_DEF_E1AP_PDU_Session_Type_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_E1AP_PDU_Session_Type_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_E1AP_PDU_Session_Type_specs_1	/* Additional specs */
};

