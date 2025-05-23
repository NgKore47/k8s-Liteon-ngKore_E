/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_ResumeCause.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LTE_ResumeCause_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_ResumeCause_value2enum_1[] = {
	{ 0,	9,	"emergency" },
	{ 1,	18,	"highPriorityAccess" },
	{ 2,	9,	"mt-Access" },
	{ 3,	13,	"mo-Signalling" },
	{ 4,	7,	"mo-Data" },
	{ 5,	25,	"delayTolerantAccess-v1020" },
	{ 6,	18,	"mo-VoiceCall-v1280" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_ResumeCause_enum2value_1[] = {
	5,	/* delayTolerantAccess-v1020(5) */
	0,	/* emergency(0) */
	1,	/* highPriorityAccess(1) */
	4,	/* mo-Data(4) */
	3,	/* mo-Signalling(3) */
	6,	/* mo-VoiceCall-v1280(6) */
	2,	/* mt-Access(2) */
	7	/* spare1(7) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_ResumeCause_specs_1 = {
	asn_MAP_LTE_ResumeCause_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ResumeCause_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ResumeCause_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_ResumeCause = {
	"ResumeCause",
	"ResumeCause",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ResumeCause_tags_1,
	sizeof(asn_DEF_LTE_ResumeCause_tags_1)
		/sizeof(asn_DEF_LTE_ResumeCause_tags_1[0]), /* 1 */
	asn_DEF_LTE_ResumeCause_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_ResumeCause_tags_1)
		/sizeof(asn_DEF_LTE_ResumeCause_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_ResumeCause_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ResumeCause_specs_1	/* Additional specs */
};

