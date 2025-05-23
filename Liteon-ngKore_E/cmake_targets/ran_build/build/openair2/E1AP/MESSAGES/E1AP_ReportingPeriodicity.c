/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_ReportingPeriodicity.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_E1AP_ReportingPeriodicity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_E1AP_ReportingPeriodicity_value2enum_1[] = {
	{ 0,	5,	"ms500" },
	{ 1,	6,	"ms1000" },
	{ 2,	6,	"ms2000" },
	{ 3,	6,	"ms5000" },
	{ 4,	7,	"ms10000" },
	{ 5,	7,	"ms20000" },
	{ 6,	7,	"ms30000" },
	{ 7,	7,	"ms40000" },
	{ 8,	7,	"ms50000" },
	{ 9,	7,	"ms60000" },
	{ 10,	7,	"ms70000" },
	{ 11,	7,	"ms80000" },
	{ 12,	7,	"ms90000" },
	{ 13,	8,	"ms100000" },
	{ 14,	8,	"ms110000" },
	{ 15,	8,	"ms120000" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_E1AP_ReportingPeriodicity_enum2value_1[] = {
	1,	/* ms1000(1) */
	4,	/* ms10000(4) */
	13,	/* ms100000(13) */
	14,	/* ms110000(14) */
	15,	/* ms120000(15) */
	2,	/* ms2000(2) */
	5,	/* ms20000(5) */
	6,	/* ms30000(6) */
	7,	/* ms40000(7) */
	0,	/* ms500(0) */
	3,	/* ms5000(3) */
	8,	/* ms50000(8) */
	9,	/* ms60000(9) */
	10,	/* ms70000(10) */
	11,	/* ms80000(11) */
	12	/* ms90000(12) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_E1AP_ReportingPeriodicity_specs_1 = {
	asn_MAP_E1AP_ReportingPeriodicity_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_E1AP_ReportingPeriodicity_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_E1AP_ReportingPeriodicity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E1AP_ReportingPeriodicity = {
	"ReportingPeriodicity",
	"ReportingPeriodicity",
	&asn_OP_NativeEnumerated,
	asn_DEF_E1AP_ReportingPeriodicity_tags_1,
	sizeof(asn_DEF_E1AP_ReportingPeriodicity_tags_1)
		/sizeof(asn_DEF_E1AP_ReportingPeriodicity_tags_1[0]), /* 1 */
	asn_DEF_E1AP_ReportingPeriodicity_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_ReportingPeriodicity_tags_1)
		/sizeof(asn_DEF_E1AP_ReportingPeriodicity_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_E1AP_ReportingPeriodicity_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_E1AP_ReportingPeriodicity_specs_1	/* Additional specs */
};

