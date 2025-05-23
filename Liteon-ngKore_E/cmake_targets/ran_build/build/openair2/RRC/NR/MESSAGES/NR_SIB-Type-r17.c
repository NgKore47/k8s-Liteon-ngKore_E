/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SIB-Type-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NR_SIB_Type_r17_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_SIB_Type_r17_value2enum_1[] = {
	{ 0,	8,	"sibType2" },
	{ 1,	8,	"sibType3" },
	{ 2,	8,	"sibType4" },
	{ 3,	8,	"sibType5" },
	{ 4,	8,	"sibType9" },
	{ 5,	15,	"sibType10-v1610" },
	{ 6,	15,	"sibType11-v1610" },
	{ 7,	15,	"sibType12-v1610" },
	{ 8,	15,	"sibType13-v1610" },
	{ 9,	15,	"sibType14-v1610" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_SIB_Type_r17_enum2value_1[] = {
	5,	/* sibType10-v1610(5) */
	6,	/* sibType11-v1610(6) */
	7,	/* sibType12-v1610(7) */
	8,	/* sibType13-v1610(8) */
	9,	/* sibType14-v1610(9) */
	0,	/* sibType2(0) */
	1,	/* sibType3(1) */
	2,	/* sibType4(2) */
	3,	/* sibType5(3) */
	4,	/* sibType9(4) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10	/* spare6(10) */
};
const asn_INTEGER_specifics_t asn_SPC_NR_SIB_Type_r17_specs_1 = {
	asn_MAP_NR_SIB_Type_r17_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_SIB_Type_r17_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_SIB_Type_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NR_SIB_Type_r17 = {
	"SIB-Type-r17",
	"SIB-Type-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_SIB_Type_r17_tags_1,
	sizeof(asn_DEF_NR_SIB_Type_r17_tags_1)
		/sizeof(asn_DEF_NR_SIB_Type_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_SIB_Type_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SIB_Type_r17_tags_1)
		/sizeof(asn_DEF_NR_SIB_Type_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_SIB_Type_r17_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_SIB_Type_r17_specs_1	/* Additional specs */
};

