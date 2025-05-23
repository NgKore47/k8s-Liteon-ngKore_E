/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_UE-TimersAndConstantsRemoteUE-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_t300_RemoteUE_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_t301_RemoteUE_r17_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_t319_RemoteUE_r17_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_t300_RemoteUE_r17_value2enum_2[] = {
	{ 0,	5,	"ms100" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms300" },
	{ 3,	5,	"ms400" },
	{ 4,	5,	"ms600" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms1500" },
	{ 7,	6,	"ms2000" }
};
static const unsigned int asn_MAP_NR_t300_RemoteUE_r17_enum2value_2[] = {
	0,	/* ms100(0) */
	5,	/* ms1000(5) */
	6,	/* ms1500(6) */
	1,	/* ms200(1) */
	7,	/* ms2000(7) */
	2,	/* ms300(2) */
	3,	/* ms400(3) */
	4	/* ms600(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_t300_RemoteUE_r17_specs_2 = {
	asn_MAP_NR_t300_RemoteUE_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_t300_RemoteUE_r17_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_t300_RemoteUE_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_t300_RemoteUE_r17_2 = {
	"t300-RemoteUE-r17",
	"t300-RemoteUE-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_t300_RemoteUE_r17_tags_2,
	sizeof(asn_DEF_NR_t300_RemoteUE_r17_tags_2)
		/sizeof(asn_DEF_NR_t300_RemoteUE_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_t300_RemoteUE_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_t300_RemoteUE_r17_tags_2)
		/sizeof(asn_DEF_NR_t300_RemoteUE_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_t300_RemoteUE_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_t300_RemoteUE_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_t301_RemoteUE_r17_value2enum_11[] = {
	{ 0,	5,	"ms100" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms300" },
	{ 3,	5,	"ms400" },
	{ 4,	5,	"ms600" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms1500" },
	{ 7,	6,	"ms2000" }
};
static const unsigned int asn_MAP_NR_t301_RemoteUE_r17_enum2value_11[] = {
	0,	/* ms100(0) */
	5,	/* ms1000(5) */
	6,	/* ms1500(6) */
	1,	/* ms200(1) */
	7,	/* ms2000(7) */
	2,	/* ms300(2) */
	3,	/* ms400(3) */
	4	/* ms600(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_t301_RemoteUE_r17_specs_11 = {
	asn_MAP_NR_t301_RemoteUE_r17_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_t301_RemoteUE_r17_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_t301_RemoteUE_r17_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_t301_RemoteUE_r17_11 = {
	"t301-RemoteUE-r17",
	"t301-RemoteUE-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_t301_RemoteUE_r17_tags_11,
	sizeof(asn_DEF_NR_t301_RemoteUE_r17_tags_11)
		/sizeof(asn_DEF_NR_t301_RemoteUE_r17_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_t301_RemoteUE_r17_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_t301_RemoteUE_r17_tags_11)
		/sizeof(asn_DEF_NR_t301_RemoteUE_r17_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_t301_RemoteUE_r17_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_t301_RemoteUE_r17_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_t319_RemoteUE_r17_value2enum_20[] = {
	{ 0,	5,	"ms100" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms300" },
	{ 3,	5,	"ms400" },
	{ 4,	5,	"ms600" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms1500" },
	{ 7,	6,	"ms2000" }
};
static const unsigned int asn_MAP_NR_t319_RemoteUE_r17_enum2value_20[] = {
	0,	/* ms100(0) */
	5,	/* ms1000(5) */
	6,	/* ms1500(6) */
	1,	/* ms200(1) */
	7,	/* ms2000(7) */
	2,	/* ms300(2) */
	3,	/* ms400(3) */
	4	/* ms600(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_t319_RemoteUE_r17_specs_20 = {
	asn_MAP_NR_t319_RemoteUE_r17_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_t319_RemoteUE_r17_enum2value_20,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_t319_RemoteUE_r17_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_t319_RemoteUE_r17_20 = {
	"t319-RemoteUE-r17",
	"t319-RemoteUE-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_t319_RemoteUE_r17_tags_20,
	sizeof(asn_DEF_NR_t319_RemoteUE_r17_tags_20)
		/sizeof(asn_DEF_NR_t319_RemoteUE_r17_tags_20[0]) - 1, /* 1 */
	asn_DEF_NR_t319_RemoteUE_r17_tags_20,	/* Same as above */
	sizeof(asn_DEF_NR_t319_RemoteUE_r17_tags_20)
		/sizeof(asn_DEF_NR_t319_RemoteUE_r17_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_t319_RemoteUE_r17_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_t319_RemoteUE_r17_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_UE_TimersAndConstantsRemoteUE_r17_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_UE_TimersAndConstantsRemoteUE_r17, t300_RemoteUE_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_t300_RemoteUE_r17_2,
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
		"t300-RemoteUE-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_UE_TimersAndConstantsRemoteUE_r17, t301_RemoteUE_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_t301_RemoteUE_r17_11,
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
		"t301-RemoteUE-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_UE_TimersAndConstantsRemoteUE_r17, t319_RemoteUE_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_t319_RemoteUE_r17_20,
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
		"t319-RemoteUE-r17"
		},
};
static const int asn_MAP_NR_UE_TimersAndConstantsRemoteUE_r17_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_UE_TimersAndConstantsRemoteUE_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UE_TimersAndConstantsRemoteUE_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t300-RemoteUE-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t301-RemoteUE-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* t319-RemoteUE-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_UE_TimersAndConstantsRemoteUE_r17_specs_1 = {
	sizeof(struct NR_UE_TimersAndConstantsRemoteUE_r17),
	offsetof(struct NR_UE_TimersAndConstantsRemoteUE_r17, _asn_ctx),
	asn_MAP_NR_UE_TimersAndConstantsRemoteUE_r17_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_UE_TimersAndConstantsRemoteUE_r17_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_UE_TimersAndConstantsRemoteUE_r17 = {
	"UE-TimersAndConstantsRemoteUE-r17",
	"UE-TimersAndConstantsRemoteUE-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_UE_TimersAndConstantsRemoteUE_r17_tags_1,
	sizeof(asn_DEF_NR_UE_TimersAndConstantsRemoteUE_r17_tags_1)
		/sizeof(asn_DEF_NR_UE_TimersAndConstantsRemoteUE_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_UE_TimersAndConstantsRemoteUE_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_UE_TimersAndConstantsRemoteUE_r17_tags_1)
		/sizeof(asn_DEF_NR_UE_TimersAndConstantsRemoteUE_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_UE_TimersAndConstantsRemoteUE_r17_1,
	3,	/* Elements count */
	&asn_SPC_NR_UE_TimersAndConstantsRemoteUE_r17_specs_1	/* Additional specs */
};

