/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_BandCombination-UplinkTxSwitch-r16.h"

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
static int
memb_NR_supportedBandPairListNR_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 32UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_supportedBandPairListNR_r16_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_uplinkTxSwitching_OptionSupport_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_uplinkTxSwitching_PowerBoosting_r16_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_supportedBandPairListNR_r16_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_supportedBandPairListNR_r16_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_ULTxSwitchingBandPair_r16,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_supportedBandPairListNR_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_supportedBandPairListNR_r16_specs_9 = {
	sizeof(struct NR_BandCombination_UplinkTxSwitch_r16__supportedBandPairListNR_r16),
	offsetof(struct NR_BandCombination_UplinkTxSwitch_r16__supportedBandPairListNR_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_supportedBandPairListNR_r16_9 = {
	"supportedBandPairListNR-r16",
	"supportedBandPairListNR-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_supportedBandPairListNR_r16_tags_9,
	sizeof(asn_DEF_NR_supportedBandPairListNR_r16_tags_9)
		/sizeof(asn_DEF_NR_supportedBandPairListNR_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_supportedBandPairListNR_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_supportedBandPairListNR_r16_tags_9)
		/sizeof(asn_DEF_NR_supportedBandPairListNR_r16_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_supportedBandPairListNR_r16_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_supportedBandPairListNR_r16_9,
	1,	/* Single element */
	&asn_SPC_NR_supportedBandPairListNR_r16_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_uplinkTxSwitching_OptionSupport_r16_value2enum_11[] = {
	{ 0,	10,	"switchedUL" },
	{ 1,	6,	"dualUL" },
	{ 2,	4,	"both" }
};
static const unsigned int asn_MAP_NR_uplinkTxSwitching_OptionSupport_r16_enum2value_11[] = {
	2,	/* both(2) */
	1,	/* dualUL(1) */
	0	/* switchedUL(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_uplinkTxSwitching_OptionSupport_r16_specs_11 = {
	asn_MAP_NR_uplinkTxSwitching_OptionSupport_r16_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_uplinkTxSwitching_OptionSupport_r16_enum2value_11,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_uplinkTxSwitching_OptionSupport_r16_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_uplinkTxSwitching_OptionSupport_r16_11 = {
	"uplinkTxSwitching-OptionSupport-r16",
	"uplinkTxSwitching-OptionSupport-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_uplinkTxSwitching_OptionSupport_r16_tags_11,
	sizeof(asn_DEF_NR_uplinkTxSwitching_OptionSupport_r16_tags_11)
		/sizeof(asn_DEF_NR_uplinkTxSwitching_OptionSupport_r16_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_uplinkTxSwitching_OptionSupport_r16_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_uplinkTxSwitching_OptionSupport_r16_tags_11)
		/sizeof(asn_DEF_NR_uplinkTxSwitching_OptionSupport_r16_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_uplinkTxSwitching_OptionSupport_r16_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_uplinkTxSwitching_OptionSupport_r16_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_uplinkTxSwitching_PowerBoosting_r16_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_uplinkTxSwitching_PowerBoosting_r16_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_uplinkTxSwitching_PowerBoosting_r16_specs_15 = {
	asn_MAP_NR_uplinkTxSwitching_PowerBoosting_r16_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_uplinkTxSwitching_PowerBoosting_r16_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_uplinkTxSwitching_PowerBoosting_r16_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_uplinkTxSwitching_PowerBoosting_r16_15 = {
	"uplinkTxSwitching-PowerBoosting-r16",
	"uplinkTxSwitching-PowerBoosting-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_uplinkTxSwitching_PowerBoosting_r16_tags_15,
	sizeof(asn_DEF_NR_uplinkTxSwitching_PowerBoosting_r16_tags_15)
		/sizeof(asn_DEF_NR_uplinkTxSwitching_PowerBoosting_r16_tags_15[0]) - 1, /* 1 */
	asn_DEF_NR_uplinkTxSwitching_PowerBoosting_r16_tags_15,	/* Same as above */
	sizeof(asn_DEF_NR_uplinkTxSwitching_PowerBoosting_r16_tags_15)
		/sizeof(asn_DEF_NR_uplinkTxSwitching_PowerBoosting_r16_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_uplinkTxSwitching_PowerBoosting_r16_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_uplinkTxSwitching_PowerBoosting_r16_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_value2enum_19[] = {
	{ 0,	11,	"nonCoherent" },
	{ 1,	12,	"fullCoherent" }
};
static const unsigned int asn_MAP_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_enum2value_19[] = {
	1,	/* fullCoherent(1) */
	0	/* nonCoherent(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_specs_19 = {
	asn_MAP_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_enum2value_19,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_19 = {
	"uplinkTxSwitching-PUSCH-TransCoherence-r16",
	"uplinkTxSwitching-PUSCH-TransCoherence-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_tags_19,
	sizeof(asn_DEF_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_tags_19)
		/sizeof(asn_DEF_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_tags_19[0]) - 1, /* 1 */
	asn_DEF_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_tags_19,	/* Same as above */
	sizeof(asn_DEF_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_tags_19)
		/sizeof(asn_DEF_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_18[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16__ext1, uplinkTxSwitching_PUSCH_TransCoherence_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_uplinkTxSwitching_PUSCH_TransCoherence_r16_19,
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
		"uplinkTxSwitching-PUSCH-TransCoherence-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_18[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* uplinkTxSwitching-PUSCH-TransCoherence-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_18 = {
	sizeof(struct NR_BandCombination_UplinkTxSwitch_r16__ext1),
	offsetof(struct NR_BandCombination_UplinkTxSwitch_r16__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_18,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_18,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_18 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_18,
	sizeof(asn_DEF_NR_ext1_tags_18)
		/sizeof(asn_DEF_NR_ext1_tags_18[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_18,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_18)
		/sizeof(asn_DEF_NR_ext1_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext1_18,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_18	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_BandCombination_UplinkTxSwitch_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, bandCombination_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombination,
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
		"bandCombination-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, bandCombination_v1540),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombination_v1540,
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
		"bandCombination-v1540"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, bandCombination_v1560),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombination_v1560,
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
		"bandCombination-v1560"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, bandCombination_v1570),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombination_v1570,
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
		"bandCombination-v1570"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, bandCombination_v1580),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombination_v1580,
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
		"bandCombination-v1580"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, bandCombination_v1590),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombination_v1590,
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
		"bandCombination-v1590"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, bandCombination_v1610),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandCombination_v1610,
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
		"bandCombination-v1610"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, supportedBandPairListNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_NR_supportedBandPairListNR_r16_9,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_supportedBandPairListNR_r16_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_supportedBandPairListNR_r16_constraint_1
		},
		0, 0, /* No default value */
		"supportedBandPairListNR-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, uplinkTxSwitching_OptionSupport_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_uplinkTxSwitching_OptionSupport_r16_11,
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
		"uplinkTxSwitching-OptionSupport-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, uplinkTxSwitching_PowerBoosting_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_uplinkTxSwitching_PowerBoosting_r16_15,
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
		"uplinkTxSwitching-PowerBoosting-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, ext1),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_NR_ext1_18,
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
		"ext1"
		},
};
static const int asn_MAP_NR_BandCombination_UplinkTxSwitch_r16_oms_1[] = { 1, 2, 3, 4, 5, 6, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_NR_BandCombination_UplinkTxSwitch_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_BandCombination_UplinkTxSwitch_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandCombination-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bandCombination-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bandCombination-v1560 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* bandCombination-v1570 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* bandCombination-v1580 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* bandCombination-v1590 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* bandCombination-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* supportedBandPairListNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* uplinkTxSwitching-OptionSupport-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* uplinkTxSwitching-PowerBoosting-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_BandCombination_UplinkTxSwitch_r16_specs_1 = {
	sizeof(struct NR_BandCombination_UplinkTxSwitch_r16),
	offsetof(struct NR_BandCombination_UplinkTxSwitch_r16, _asn_ctx),
	asn_MAP_NR_BandCombination_UplinkTxSwitch_r16_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_NR_BandCombination_UplinkTxSwitch_r16_oms_1,	/* Optional members */
	8, 1,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_BandCombination_UplinkTxSwitch_r16 = {
	"BandCombination-UplinkTxSwitch-r16",
	"BandCombination-UplinkTxSwitch-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_BandCombination_UplinkTxSwitch_r16_tags_1,
	sizeof(asn_DEF_NR_BandCombination_UplinkTxSwitch_r16_tags_1)
		/sizeof(asn_DEF_NR_BandCombination_UplinkTxSwitch_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_BandCombination_UplinkTxSwitch_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_BandCombination_UplinkTxSwitch_r16_tags_1)
		/sizeof(asn_DEF_NR_BandCombination_UplinkTxSwitch_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_BandCombination_UplinkTxSwitch_r16_1,
	11,	/* Elements count */
	&asn_SPC_NR_BandCombination_UplinkTxSwitch_r16_specs_1	/* Additional specs */
};

