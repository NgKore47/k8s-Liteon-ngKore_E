/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_UplinkTxDirectCurrentCarrierInfo-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_deactivatedCarrier_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_servCellInfo_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_deactivatedCarrier_r16_value2enum_5[] = {
	{ 0,	11,	"deactivated" }
};
static const unsigned int asn_MAP_NR_deactivatedCarrier_r16_enum2value_5[] = {
	0	/* deactivated(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_deactivatedCarrier_r16_specs_5 = {
	asn_MAP_NR_deactivatedCarrier_r16_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_deactivatedCarrier_r16_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_deactivatedCarrier_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_deactivatedCarrier_r16_5 = {
	"deactivatedCarrier-r16",
	"deactivatedCarrier-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_deactivatedCarrier_r16_tags_5,
	sizeof(asn_DEF_NR_deactivatedCarrier_r16_tags_5)
		/sizeof(asn_DEF_NR_deactivatedCarrier_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_deactivatedCarrier_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_deactivatedCarrier_r16_tags_5)
		/sizeof(asn_DEF_NR_deactivatedCarrier_r16_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_deactivatedCarrier_r16_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_deactivatedCarrier_r16_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_servCellInfo_r16_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UplinkTxDirectCurrentCarrierInfo_r16__servCellInfo_r16, choice.bwp_Id_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BWP_Id,
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
		"bwp-Id-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UplinkTxDirectCurrentCarrierInfo_r16__servCellInfo_r16, choice.deactivatedCarrier_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_deactivatedCarrier_r16_5,
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
		"deactivatedCarrier-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_servCellInfo_r16_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bwp-Id-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* deactivatedCarrier-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_servCellInfo_r16_specs_3 = {
	sizeof(struct NR_UplinkTxDirectCurrentCarrierInfo_r16__servCellInfo_r16),
	offsetof(struct NR_UplinkTxDirectCurrentCarrierInfo_r16__servCellInfo_r16, _asn_ctx),
	offsetof(struct NR_UplinkTxDirectCurrentCarrierInfo_r16__servCellInfo_r16, present),
	sizeof(((struct NR_UplinkTxDirectCurrentCarrierInfo_r16__servCellInfo_r16 *)0)->present),
	asn_MAP_NR_servCellInfo_r16_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_servCellInfo_r16_3 = {
	"servCellInfo-r16",
	"servCellInfo-r16",
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
		&asn_PER_type_NR_servCellInfo_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_servCellInfo_r16_3,
	2,	/* Elements count */
	&asn_SPC_NR_servCellInfo_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_UplinkTxDirectCurrentCarrierInfo_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UplinkTxDirectCurrentCarrierInfo_r16, servCellIndex_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ServCellIndex,
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
		"servCellIndex-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UplinkTxDirectCurrentCarrierInfo_r16, servCellInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_servCellInfo_r16_3,
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
		"servCellInfo-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_UplinkTxDirectCurrentCarrierInfo_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UplinkTxDirectCurrentCarrierInfo_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servCellIndex-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* servCellInfo-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_UplinkTxDirectCurrentCarrierInfo_r16_specs_1 = {
	sizeof(struct NR_UplinkTxDirectCurrentCarrierInfo_r16),
	offsetof(struct NR_UplinkTxDirectCurrentCarrierInfo_r16, _asn_ctx),
	asn_MAP_NR_UplinkTxDirectCurrentCarrierInfo_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_UplinkTxDirectCurrentCarrierInfo_r16 = {
	"UplinkTxDirectCurrentCarrierInfo-r16",
	"UplinkTxDirectCurrentCarrierInfo-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_UplinkTxDirectCurrentCarrierInfo_r16_tags_1,
	sizeof(asn_DEF_NR_UplinkTxDirectCurrentCarrierInfo_r16_tags_1)
		/sizeof(asn_DEF_NR_UplinkTxDirectCurrentCarrierInfo_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_UplinkTxDirectCurrentCarrierInfo_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_UplinkTxDirectCurrentCarrierInfo_r16_tags_1)
		/sizeof(asn_DEF_NR_UplinkTxDirectCurrentCarrierInfo_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_UplinkTxDirectCurrentCarrierInfo_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_UplinkTxDirectCurrentCarrierInfo_r16_specs_1	/* Additional specs */
};

