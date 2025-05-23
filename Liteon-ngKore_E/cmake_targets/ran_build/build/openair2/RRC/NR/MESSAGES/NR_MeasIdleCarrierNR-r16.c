/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_MeasIdleCarrierNR-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_nrofSS_BlocksToAverage_r16_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2L && value <= 16L)) {
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
static asn_per_constraints_t asn_PER_type_NR_reportQuantities_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_nrofSS_BlocksToAverage_r16_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  2,  16 }	/* (2..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_reportQuantities_r16_value2enum_6[] = {
	{ 0,	4,	"rsrp" },
	{ 1,	4,	"rsrq" },
	{ 2,	4,	"both" }
};
static const unsigned int asn_MAP_NR_reportQuantities_r16_enum2value_6[] = {
	2,	/* both(2) */
	0,	/* rsrp(0) */
	1	/* rsrq(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_reportQuantities_r16_specs_6 = {
	asn_MAP_NR_reportQuantities_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_reportQuantities_r16_enum2value_6,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_reportQuantities_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_reportQuantities_r16_6 = {
	"reportQuantities-r16",
	"reportQuantities-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_reportQuantities_r16_tags_6,
	sizeof(asn_DEF_NR_reportQuantities_r16_tags_6)
		/sizeof(asn_DEF_NR_reportQuantities_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_reportQuantities_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_reportQuantities_r16_tags_6)
		/sizeof(asn_DEF_NR_reportQuantities_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_reportQuantities_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_reportQuantities_r16_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_qualityThreshold_r16_10[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_MeasIdleCarrierNR_r16__qualityThreshold_r16, idleRSRP_Threshold_NR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RSRP_Range,
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
		"idleRSRP-Threshold-NR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MeasIdleCarrierNR_r16__qualityThreshold_r16, idleRSRQ_Threshold_NR_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RSRQ_Range,
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
		"idleRSRQ-Threshold-NR-r16"
		},
};
static const int asn_MAP_NR_qualityThreshold_r16_oms_10[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_qualityThreshold_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_qualityThreshold_r16_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idleRSRP-Threshold-NR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* idleRSRQ-Threshold-NR-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_qualityThreshold_r16_specs_10 = {
	sizeof(struct NR_MeasIdleCarrierNR_r16__qualityThreshold_r16),
	offsetof(struct NR_MeasIdleCarrierNR_r16__qualityThreshold_r16, _asn_ctx),
	asn_MAP_NR_qualityThreshold_r16_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_NR_qualityThreshold_r16_oms_10,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_qualityThreshold_r16_10 = {
	"qualityThreshold-r16",
	"qualityThreshold-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_qualityThreshold_r16_tags_10,
	sizeof(asn_DEF_NR_qualityThreshold_r16_tags_10)
		/sizeof(asn_DEF_NR_qualityThreshold_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_qualityThreshold_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_qualityThreshold_r16_tags_10)
		/sizeof(asn_DEF_NR_qualityThreshold_r16_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_qualityThreshold_r16_10,
	2,	/* Elements count */
	&asn_SPC_NR_qualityThreshold_r16_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ssb_MeasConfig_r16_13[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, nrofSS_BlocksToAverage_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_nrofSS_BlocksToAverage_r16_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_nrofSS_BlocksToAverage_r16_constraint_13
		},
		0, 0, /* No default value */
		"nrofSS-BlocksToAverage-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, absThreshSS_BlocksConsolidation_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ThresholdNR,
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
		"absThreshSS-BlocksConsolidation-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, smtc_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SSB_MTC,
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
		"smtc-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, ssb_ToMeasure_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SSB_ToMeasure,
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
		"ssb-ToMeasure-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, deriveSSB_IndexFromCell_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
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
		"deriveSSB-IndexFromCell-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, ss_RSSI_Measurement_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SS_RSSI_Measurement,
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
		"ss-RSSI-Measurement-r16"
		},
};
static const int asn_MAP_NR_ssb_MeasConfig_r16_oms_13[] = { 0, 1, 2, 3, 5 };
static const ber_tlv_tag_t asn_DEF_NR_ssb_MeasConfig_r16_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ssb_MeasConfig_r16_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrofSS-BlocksToAverage-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* absThreshSS-BlocksConsolidation-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* smtc-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ssb-ToMeasure-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* deriveSSB-IndexFromCell-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ss-RSSI-Measurement-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ssb_MeasConfig_r16_specs_13 = {
	sizeof(struct NR_MeasIdleCarrierNR_r16__ssb_MeasConfig_r16),
	offsetof(struct NR_MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, _asn_ctx),
	asn_MAP_NR_ssb_MeasConfig_r16_tag2el_13,
	6,	/* Count of tags in the map */
	asn_MAP_NR_ssb_MeasConfig_r16_oms_13,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ssb_MeasConfig_r16_13 = {
	"ssb-MeasConfig-r16",
	"ssb-MeasConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ssb_MeasConfig_r16_tags_13,
	sizeof(asn_DEF_NR_ssb_MeasConfig_r16_tags_13)
		/sizeof(asn_DEF_NR_ssb_MeasConfig_r16_tags_13[0]) - 1, /* 1 */
	asn_DEF_NR_ssb_MeasConfig_r16_tags_13,	/* Same as above */
	sizeof(asn_DEF_NR_ssb_MeasConfig_r16_tags_13)
		/sizeof(asn_DEF_NR_ssb_MeasConfig_r16_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ssb_MeasConfig_r16_13,
	6,	/* Elements count */
	&asn_SPC_NR_ssb_MeasConfig_r16_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_MeasIdleCarrierNR_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MeasIdleCarrierNR_r16, carrierFreq_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ARFCN_ValueNR,
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
		"carrierFreq-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MeasIdleCarrierNR_r16, ssbSubcarrierSpacing_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SubcarrierSpacing,
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
		"ssbSubcarrierSpacing-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_MeasIdleCarrierNR_r16, frequencyBandList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MultiFrequencyBandListNR,
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
		"frequencyBandList"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MeasIdleCarrierNR_r16, measCellListNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CellListNR_r16,
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
		"measCellListNR-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MeasIdleCarrierNR_r16, reportQuantities_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_reportQuantities_r16_6,
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
		"reportQuantities-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_MeasIdleCarrierNR_r16, qualityThreshold_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_qualityThreshold_r16_10,
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
		"qualityThreshold-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_MeasIdleCarrierNR_r16, ssb_MeasConfig_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_NR_ssb_MeasConfig_r16_13,
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
		"ssb-MeasConfig-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MeasIdleCarrierNR_r16, beamMeasConfigIdle_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BeamMeasConfigIdle_NR_r16,
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
		"beamMeasConfigIdle-r16"
		},
};
static const int asn_MAP_NR_MeasIdleCarrierNR_r16_oms_1[] = { 2, 3, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_NR_MeasIdleCarrierNR_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MeasIdleCarrierNR_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ssbSubcarrierSpacing-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frequencyBandList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measCellListNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* reportQuantities-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* qualityThreshold-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ssb-MeasConfig-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* beamMeasConfigIdle-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MeasIdleCarrierNR_r16_specs_1 = {
	sizeof(struct NR_MeasIdleCarrierNR_r16),
	offsetof(struct NR_MeasIdleCarrierNR_r16, _asn_ctx),
	asn_MAP_NR_MeasIdleCarrierNR_r16_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_NR_MeasIdleCarrierNR_r16_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MeasIdleCarrierNR_r16 = {
	"MeasIdleCarrierNR-r16",
	"MeasIdleCarrierNR-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MeasIdleCarrierNR_r16_tags_1,
	sizeof(asn_DEF_NR_MeasIdleCarrierNR_r16_tags_1)
		/sizeof(asn_DEF_NR_MeasIdleCarrierNR_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_MeasIdleCarrierNR_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MeasIdleCarrierNR_r16_tags_1)
		/sizeof(asn_DEF_NR_MeasIdleCarrierNR_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_MeasIdleCarrierNR_r16_1,
	8,	/* Elements count */
	&asn_SPC_NR_MeasIdleCarrierNR_r16_specs_1	/* Additional specs */
};

