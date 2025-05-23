/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_T-Reordering.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_E1AP_T_Reordering_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  6,  6,  0,  35 }	/* (0..35,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_E1AP_T_Reordering_value2enum_1[] = {
	{ 0,	3,	"ms0" },
	{ 1,	3,	"ms1" },
	{ 2,	3,	"ms2" },
	{ 3,	3,	"ms4" },
	{ 4,	3,	"ms5" },
	{ 5,	3,	"ms8" },
	{ 6,	4,	"ms10" },
	{ 7,	4,	"ms15" },
	{ 8,	4,	"ms20" },
	{ 9,	4,	"ms30" },
	{ 10,	4,	"ms40" },
	{ 11,	4,	"ms50" },
	{ 12,	4,	"ms60" },
	{ 13,	4,	"ms80" },
	{ 14,	5,	"ms100" },
	{ 15,	5,	"ms120" },
	{ 16,	5,	"ms140" },
	{ 17,	5,	"ms160" },
	{ 18,	5,	"ms180" },
	{ 19,	5,	"ms200" },
	{ 20,	5,	"ms220" },
	{ 21,	5,	"ms240" },
	{ 22,	5,	"ms260" },
	{ 23,	5,	"ms280" },
	{ 24,	5,	"ms300" },
	{ 25,	5,	"ms500" },
	{ 26,	5,	"ms750" },
	{ 27,	6,	"ms1000" },
	{ 28,	6,	"ms1250" },
	{ 29,	6,	"ms1500" },
	{ 30,	6,	"ms1750" },
	{ 31,	6,	"ms2000" },
	{ 32,	6,	"ms2250" },
	{ 33,	6,	"ms2500" },
	{ 34,	6,	"ms2750" },
	{ 35,	6,	"ms3000" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_E1AP_T_Reordering_enum2value_1[] = {
	0,	/* ms0(0) */
	1,	/* ms1(1) */
	6,	/* ms10(6) */
	14,	/* ms100(14) */
	27,	/* ms1000(27) */
	15,	/* ms120(15) */
	28,	/* ms1250(28) */
	16,	/* ms140(16) */
	7,	/* ms15(7) */
	29,	/* ms1500(29) */
	17,	/* ms160(17) */
	30,	/* ms1750(30) */
	18,	/* ms180(18) */
	2,	/* ms2(2) */
	8,	/* ms20(8) */
	19,	/* ms200(19) */
	31,	/* ms2000(31) */
	20,	/* ms220(20) */
	32,	/* ms2250(32) */
	21,	/* ms240(21) */
	33,	/* ms2500(33) */
	22,	/* ms260(22) */
	34,	/* ms2750(34) */
	23,	/* ms280(23) */
	9,	/* ms30(9) */
	24,	/* ms300(24) */
	35,	/* ms3000(35) */
	3,	/* ms4(3) */
	10,	/* ms40(10) */
	4,	/* ms5(4) */
	11,	/* ms50(11) */
	25,	/* ms500(25) */
	12,	/* ms60(12) */
	26,	/* ms750(26) */
	5,	/* ms8(5) */
	13	/* ms80(13) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_E1AP_T_Reordering_specs_1 = {
	asn_MAP_E1AP_T_Reordering_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_E1AP_T_Reordering_enum2value_1,	/* N => "tag"; sorted by N */
	36,	/* Number of elements in the maps */
	37,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_E1AP_T_Reordering_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E1AP_T_Reordering = {
	"T-Reordering",
	"T-Reordering",
	&asn_OP_NativeEnumerated,
	asn_DEF_E1AP_T_Reordering_tags_1,
	sizeof(asn_DEF_E1AP_T_Reordering_tags_1)
		/sizeof(asn_DEF_E1AP_T_Reordering_tags_1[0]), /* 1 */
	asn_DEF_E1AP_T_Reordering_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_T_Reordering_tags_1)
		/sizeof(asn_DEF_E1AP_T_Reordering_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_E1AP_T_Reordering_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_E1AP_T_Reordering_specs_1	/* Additional specs */
};

