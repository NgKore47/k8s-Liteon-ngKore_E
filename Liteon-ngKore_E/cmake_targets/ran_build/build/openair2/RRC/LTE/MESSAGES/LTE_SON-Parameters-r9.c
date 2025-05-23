/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SON-Parameters-r9.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_rach_Report_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_rach_Report_r9_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_rach_Report_r9_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_rach_Report_r9_specs_2 = {
	asn_MAP_LTE_rach_Report_r9_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_rach_Report_r9_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_rach_Report_r9_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rach_Report_r9_2 = {
	"rach-Report-r9",
	"rach-Report-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_rach_Report_r9_tags_2,
	sizeof(asn_DEF_LTE_rach_Report_r9_tags_2)
		/sizeof(asn_DEF_LTE_rach_Report_r9_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_rach_Report_r9_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_rach_Report_r9_tags_2)
		/sizeof(asn_DEF_LTE_rach_Report_r9_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_rach_Report_r9_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_rach_Report_r9_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SON_Parameters_r9_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SON_Parameters_r9, rach_Report_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_rach_Report_r9_2,
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
		"rach-Report-r9"
		},
};
static const int asn_MAP_LTE_SON_Parameters_r9_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_SON_Parameters_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SON_Parameters_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rach-Report-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SON_Parameters_r9_specs_1 = {
	sizeof(struct LTE_SON_Parameters_r9),
	offsetof(struct LTE_SON_Parameters_r9, _asn_ctx),
	asn_MAP_LTE_SON_Parameters_r9_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_SON_Parameters_r9_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SON_Parameters_r9 = {
	"SON-Parameters-r9",
	"SON-Parameters-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SON_Parameters_r9_tags_1,
	sizeof(asn_DEF_LTE_SON_Parameters_r9_tags_1)
		/sizeof(asn_DEF_LTE_SON_Parameters_r9_tags_1[0]), /* 1 */
	asn_DEF_LTE_SON_Parameters_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SON_Parameters_r9_tags_1)
		/sizeof(asn_DEF_LTE_SON_Parameters_r9_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SON_Parameters_r9_1,
	1,	/* Elements count */
	&asn_SPC_LTE_SON_Parameters_r9_specs_1	/* Additional specs */
};

