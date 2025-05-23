/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_UplinkDataCompression-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_bufferSize_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_dictionary_r17_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NR_UplinkDataCompression_r17_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_bufferSize_r17_value2enum_3[] = {
	{ 0,	6,	"kbyte2" },
	{ 1,	6,	"kbyte4" },
	{ 2,	6,	"kbyte8" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_bufferSize_r17_enum2value_3[] = {
	0,	/* kbyte2(0) */
	1,	/* kbyte4(1) */
	2,	/* kbyte8(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_bufferSize_r17_specs_3 = {
	asn_MAP_NR_bufferSize_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_bufferSize_r17_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_bufferSize_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_bufferSize_r17_3 = {
	"bufferSize-r17",
	"bufferSize-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_bufferSize_r17_tags_3,
	sizeof(asn_DEF_NR_bufferSize_r17_tags_3)
		/sizeof(asn_DEF_NR_bufferSize_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_bufferSize_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_bufferSize_r17_tags_3)
		/sizeof(asn_DEF_NR_bufferSize_r17_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_bufferSize_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_bufferSize_r17_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_dictionary_r17_value2enum_8[] = {
	{ 0,	7,	"sip-SDP" },
	{ 1,	8,	"operator" }
};
static const unsigned int asn_MAP_NR_dictionary_r17_enum2value_8[] = {
	1,	/* operator(1) */
	0	/* sip-SDP(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_dictionary_r17_specs_8 = {
	asn_MAP_NR_dictionary_r17_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_dictionary_r17_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_dictionary_r17_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_dictionary_r17_8 = {
	"dictionary-r17",
	"dictionary-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_dictionary_r17_tags_8,
	sizeof(asn_DEF_NR_dictionary_r17_tags_8)
		/sizeof(asn_DEF_NR_dictionary_r17_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_dictionary_r17_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_dictionary_r17_tags_8)
		/sizeof(asn_DEF_NR_dictionary_r17_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_dictionary_r17_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_dictionary_r17_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_newSetup_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UplinkDataCompression_r17__newSetup, bufferSize_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_bufferSize_r17_3,
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
		"bufferSize-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_UplinkDataCompression_r17__newSetup, dictionary_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_dictionary_r17_8,
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
		"dictionary-r17"
		},
};
static const int asn_MAP_NR_newSetup_oms_2[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_newSetup_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_newSetup_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bufferSize-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dictionary-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_newSetup_specs_2 = {
	sizeof(struct NR_UplinkDataCompression_r17__newSetup),
	offsetof(struct NR_UplinkDataCompression_r17__newSetup, _asn_ctx),
	asn_MAP_NR_newSetup_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_NR_newSetup_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_newSetup_2 = {
	"newSetup",
	"newSetup",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_newSetup_tags_2,
	sizeof(asn_DEF_NR_newSetup_tags_2)
		/sizeof(asn_DEF_NR_newSetup_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_newSetup_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_newSetup_tags_2)
		/sizeof(asn_DEF_NR_newSetup_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_newSetup_2,
	2,	/* Elements count */
	&asn_SPC_NR_newSetup_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_UplinkDataCompression_r17_1[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_UplinkDataCompression_r17, choice.newSetup),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_newSetup_2,
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
		"newSetup"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UplinkDataCompression_r17, choice.drb_ContinueUDC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"drb-ContinueUDC"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UplinkDataCompression_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* newSetup */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* drb-ContinueUDC */
};
asn_CHOICE_specifics_t asn_SPC_NR_UplinkDataCompression_r17_specs_1 = {
	sizeof(struct NR_UplinkDataCompression_r17),
	offsetof(struct NR_UplinkDataCompression_r17, _asn_ctx),
	offsetof(struct NR_UplinkDataCompression_r17, present),
	sizeof(((struct NR_UplinkDataCompression_r17 *)0)->present),
	asn_MAP_NR_UplinkDataCompression_r17_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NR_UplinkDataCompression_r17 = {
	"UplinkDataCompression-r17",
	"UplinkDataCompression-r17",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_UplinkDataCompression_r17_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_UplinkDataCompression_r17_1,
	2,	/* Elements count */
	&asn_SPC_NR_UplinkDataCompression_r17_specs_1	/* Additional specs */
};

