/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_UEAssistanceInformation-v1700-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_bfd_MeasRelaxationState_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1UL && size <= 32UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_scg_DeactivationPreference_r17_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_uplinkData_r17_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_bfd_MeasRelaxationState_r17_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_nonSDT_DataIndication_r17_10[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_UEAssistanceInformation_v1700_IEs__nonSDT_DataIndication_r17, resumeCause_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ResumeCause,
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
		"resumeCause-r17"
		},
};
static const int asn_MAP_NR_nonSDT_DataIndication_r17_oms_10[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_nonSDT_DataIndication_r17_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_nonSDT_DataIndication_r17_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* resumeCause-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nonSDT_DataIndication_r17_specs_10 = {
	sizeof(struct NR_UEAssistanceInformation_v1700_IEs__nonSDT_DataIndication_r17),
	offsetof(struct NR_UEAssistanceInformation_v1700_IEs__nonSDT_DataIndication_r17, _asn_ctx),
	asn_MAP_NR_nonSDT_DataIndication_r17_tag2el_10,
	1,	/* Count of tags in the map */
	asn_MAP_NR_nonSDT_DataIndication_r17_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nonSDT_DataIndication_r17_10 = {
	"nonSDT-DataIndication-r17",
	"nonSDT-DataIndication-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nonSDT_DataIndication_r17_tags_10,
	sizeof(asn_DEF_NR_nonSDT_DataIndication_r17_tags_10)
		/sizeof(asn_DEF_NR_nonSDT_DataIndication_r17_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_nonSDT_DataIndication_r17_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_nonSDT_DataIndication_r17_tags_10)
		/sizeof(asn_DEF_NR_nonSDT_DataIndication_r17_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_nonSDT_DataIndication_r17_10,
	1,	/* Elements count */
	&asn_SPC_NR_nonSDT_DataIndication_r17_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_scg_DeactivationPreference_r17_value2enum_12[] = {
	{ 0,	24,	"scgDeactivationPreferred" },
	{ 1,	12,	"noPreference" }
};
static const unsigned int asn_MAP_NR_scg_DeactivationPreference_r17_enum2value_12[] = {
	1,	/* noPreference(1) */
	0	/* scgDeactivationPreferred(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_scg_DeactivationPreference_r17_specs_12 = {
	asn_MAP_NR_scg_DeactivationPreference_r17_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_scg_DeactivationPreference_r17_enum2value_12,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_scg_DeactivationPreference_r17_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_scg_DeactivationPreference_r17_12 = {
	"scg-DeactivationPreference-r17",
	"scg-DeactivationPreference-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_scg_DeactivationPreference_r17_tags_12,
	sizeof(asn_DEF_NR_scg_DeactivationPreference_r17_tags_12)
		/sizeof(asn_DEF_NR_scg_DeactivationPreference_r17_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_scg_DeactivationPreference_r17_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_scg_DeactivationPreference_r17_tags_12)
		/sizeof(asn_DEF_NR_scg_DeactivationPreference_r17_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_scg_DeactivationPreference_r17_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_scg_DeactivationPreference_r17_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_uplinkData_r17_value2enum_15[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_uplinkData_r17_enum2value_15[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_uplinkData_r17_specs_15 = {
	asn_MAP_NR_uplinkData_r17_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_uplinkData_r17_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_uplinkData_r17_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_uplinkData_r17_15 = {
	"uplinkData-r17",
	"uplinkData-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_uplinkData_r17_tags_15,
	sizeof(asn_DEF_NR_uplinkData_r17_tags_15)
		/sizeof(asn_DEF_NR_uplinkData_r17_tags_15[0]) - 1, /* 1 */
	asn_DEF_NR_uplinkData_r17_tags_15,	/* Same as above */
	sizeof(asn_DEF_NR_uplinkData_r17_tags_15)
		/sizeof(asn_DEF_NR_uplinkData_r17_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_uplinkData_r17_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_uplinkData_r17_specs_15	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NR_nonCriticalExtension_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nonCriticalExtension_specs_19 = {
	sizeof(struct NR_UEAssistanceInformation_v1700_IEs__nonCriticalExtension),
	offsetof(struct NR_UEAssistanceInformation_v1700_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nonCriticalExtension_19 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nonCriticalExtension_tags_19,
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_19)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_19[0]) - 1, /* 1 */
	asn_DEF_NR_nonCriticalExtension_tags_19,	/* Same as above */
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_19)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_NR_nonCriticalExtension_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_UEAssistanceInformation_v1700_IEs_1[] = {
	{ ATF_POINTER, 14, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, ul_GapFR2_Preference_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UL_GapFR2_Preference_r17,
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
		"ul-GapFR2-Preference-r17"
		},
	{ ATF_POINTER, 13, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, musim_Assistance_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MUSIM_Assistance_r17,
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
		"musim-Assistance-r17"
		},
	{ ATF_POINTER, 12, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, overheatingAssistance_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_OverheatingAssistance_r17,
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
		"overheatingAssistance-r17"
		},
	{ ATF_POINTER, 11, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, maxBW_PreferenceFR2_2_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MaxBW_PreferenceFR2_2_r17,
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
		"maxBW-PreferenceFR2-2-r17"
		},
	{ ATF_POINTER, 10, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, maxMIMO_LayerPreferenceFR2_2_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MaxMIMO_LayerPreferenceFR2_2_r17,
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
		"maxMIMO-LayerPreferenceFR2-2-r17"
		},
	{ ATF_POINTER, 9, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, minSchedulingOffsetPreferenceExt_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MinSchedulingOffsetPreferenceExt_r17,
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
		"minSchedulingOffsetPreferenceExt-r17"
		},
	{ ATF_POINTER, 8, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, rlm_MeasRelaxationState_r17),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"rlm-MeasRelaxationState-r17"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, bfd_MeasRelaxationState_r17),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_bfd_MeasRelaxationState_r17_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_bfd_MeasRelaxationState_r17_constraint_1
		},
		0, 0, /* No default value */
		"bfd-MeasRelaxationState-r17"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, nonSDT_DataIndication_r17),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_NR_nonSDT_DataIndication_r17_10,
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
		"nonSDT-DataIndication-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, scg_DeactivationPreference_r17),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_scg_DeactivationPreference_r17_12,
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
		"scg-DeactivationPreference-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, uplinkData_r17),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_uplinkData_r17_15,
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
		"uplinkData-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, rrm_MeasRelaxationFulfilment_r17),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"rrm-MeasRelaxationFulfilment-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, propagationDelayDifference_r17),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PropagationDelayDifference_r17,
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
		"propagationDelayDifference-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_UEAssistanceInformation_v1700_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		0,
		&asn_DEF_NR_nonCriticalExtension_19,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_NR_UEAssistanceInformation_v1700_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
static const ber_tlv_tag_t asn_DEF_NR_UEAssistanceInformation_v1700_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UEAssistanceInformation_v1700_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-GapFR2-Preference-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* musim-Assistance-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* overheatingAssistance-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxBW-PreferenceFR2-2-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* maxMIMO-LayerPreferenceFR2-2-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* minSchedulingOffsetPreferenceExt-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rlm-MeasRelaxationState-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* bfd-MeasRelaxationState-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* nonSDT-DataIndication-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* scg-DeactivationPreference-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* uplinkData-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* rrm-MeasRelaxationFulfilment-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* propagationDelayDifference-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_UEAssistanceInformation_v1700_IEs_specs_1 = {
	sizeof(struct NR_UEAssistanceInformation_v1700_IEs),
	offsetof(struct NR_UEAssistanceInformation_v1700_IEs, _asn_ctx),
	asn_MAP_NR_UEAssistanceInformation_v1700_IEs_tag2el_1,
	14,	/* Count of tags in the map */
	asn_MAP_NR_UEAssistanceInformation_v1700_IEs_oms_1,	/* Optional members */
	14, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_UEAssistanceInformation_v1700_IEs = {
	"UEAssistanceInformation-v1700-IEs",
	"UEAssistanceInformation-v1700-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_UEAssistanceInformation_v1700_IEs_tags_1,
	sizeof(asn_DEF_NR_UEAssistanceInformation_v1700_IEs_tags_1)
		/sizeof(asn_DEF_NR_UEAssistanceInformation_v1700_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_UEAssistanceInformation_v1700_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_UEAssistanceInformation_v1700_IEs_tags_1)
		/sizeof(asn_DEF_NR_UEAssistanceInformation_v1700_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_UEAssistanceInformation_v1700_IEs_1,
	14,	/* Elements count */
	&asn_SPC_NR_UEAssistanceInformation_v1700_IEs_specs_1	/* Additional specs */
};

