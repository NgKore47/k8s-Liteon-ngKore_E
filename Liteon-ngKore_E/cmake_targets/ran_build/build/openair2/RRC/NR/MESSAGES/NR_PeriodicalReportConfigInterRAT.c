/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_PeriodicalReportConfigInterRAT.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_maxReportCells_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 8L)) {
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
static asn_per_constraints_t asn_PER_type_NR_reportAmount_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_includeCommonLocationInfo_r16_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_maxReportCells_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_reportAmount_value2enum_3[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	8,	"infinity" }
};
static const unsigned int asn_MAP_NR_reportAmount_enum2value_3[] = {
	7,	/* infinity(7) */
	0,	/* r1(0) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_reportAmount_specs_3 = {
	asn_MAP_NR_reportAmount_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_reportAmount_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_reportAmount_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_reportAmount_3 = {
	"reportAmount",
	"reportAmount",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_reportAmount_tags_3,
	sizeof(asn_DEF_NR_reportAmount_tags_3)
		/sizeof(asn_DEF_NR_reportAmount_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_reportAmount_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_reportAmount_tags_3)
		/sizeof(asn_DEF_NR_reportAmount_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_reportAmount_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_reportAmount_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_15[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_PeriodicalReportConfigInterRAT__ext1, reportQuantityUTRA_FDD_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasReportQuantityUTRA_FDD_r16,
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
		"reportQuantityUTRA-FDD-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_15[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* reportQuantityUTRA-FDD-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_15 = {
	sizeof(struct NR_PeriodicalReportConfigInterRAT__ext1),
	offsetof(struct NR_PeriodicalReportConfigInterRAT__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_15,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_15,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_15 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_15,
	sizeof(asn_DEF_NR_ext1_tags_15)
		/sizeof(asn_DEF_NR_ext1_tags_15[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_15,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_15)
		/sizeof(asn_DEF_NR_ext1_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext1_15,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_includeCommonLocationInfo_r16_value2enum_18[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_includeCommonLocationInfo_r16_enum2value_18[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_includeCommonLocationInfo_r16_specs_18 = {
	asn_MAP_NR_includeCommonLocationInfo_r16_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_includeCommonLocationInfo_r16_enum2value_18,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_includeCommonLocationInfo_r16_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_includeCommonLocationInfo_r16_18 = {
	"includeCommonLocationInfo-r16",
	"includeCommonLocationInfo-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_includeCommonLocationInfo_r16_tags_18,
	sizeof(asn_DEF_NR_includeCommonLocationInfo_r16_tags_18)
		/sizeof(asn_DEF_NR_includeCommonLocationInfo_r16_tags_18[0]) - 1, /* 1 */
	asn_DEF_NR_includeCommonLocationInfo_r16_tags_18,	/* Same as above */
	sizeof(asn_DEF_NR_includeCommonLocationInfo_r16_tags_18)
		/sizeof(asn_DEF_NR_includeCommonLocationInfo_r16_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_includeCommonLocationInfo_r16_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_includeCommonLocationInfo_r16_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext2_17[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_PeriodicalReportConfigInterRAT__ext2, includeCommonLocationInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_includeCommonLocationInfo_r16_18,
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
		"includeCommonLocationInfo-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_PeriodicalReportConfigInterRAT__ext2, includeBT_Meas_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_BT_NameList_r16,
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
		"includeBT-Meas-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_PeriodicalReportConfigInterRAT__ext2, includeWLAN_Meas_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_WLAN_NameList_r16,
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
		"includeWLAN-Meas-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_PeriodicalReportConfigInterRAT__ext2, includeSensor_Meas_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_Sensor_NameList_r16,
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
		"includeSensor-Meas-r16"
		},
};
static const int asn_MAP_NR_ext2_oms_17[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_ext2_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext2_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* includeCommonLocationInfo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* includeBT-Meas-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* includeWLAN-Meas-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* includeSensor-Meas-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext2_specs_17 = {
	sizeof(struct NR_PeriodicalReportConfigInterRAT__ext2),
	offsetof(struct NR_PeriodicalReportConfigInterRAT__ext2, _asn_ctx),
	asn_MAP_NR_ext2_tag2el_17,
	4,	/* Count of tags in the map */
	asn_MAP_NR_ext2_oms_17,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext2_17 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext2_tags_17,
	sizeof(asn_DEF_NR_ext2_tags_17)
		/sizeof(asn_DEF_NR_ext2_tags_17[0]) - 1, /* 1 */
	asn_DEF_NR_ext2_tags_17,	/* Same as above */
	sizeof(asn_DEF_NR_ext2_tags_17)
		/sizeof(asn_DEF_NR_ext2_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext2_17,
	4,	/* Elements count */
	&asn_SPC_NR_ext2_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext3_23[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_PeriodicalReportConfigInterRAT__ext3, reportQuantityRelay_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SL_MeasReportQuantity_r16,
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
		"reportQuantityRelay-r17"
		},
};
static const int asn_MAP_NR_ext3_oms_23[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext3_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext3_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* reportQuantityRelay-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext3_specs_23 = {
	sizeof(struct NR_PeriodicalReportConfigInterRAT__ext3),
	offsetof(struct NR_PeriodicalReportConfigInterRAT__ext3, _asn_ctx),
	asn_MAP_NR_ext3_tag2el_23,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext3_oms_23,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext3_23 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext3_tags_23,
	sizeof(asn_DEF_NR_ext3_tags_23)
		/sizeof(asn_DEF_NR_ext3_tags_23[0]) - 1, /* 1 */
	asn_DEF_NR_ext3_tags_23,	/* Same as above */
	sizeof(asn_DEF_NR_ext3_tags_23)
		/sizeof(asn_DEF_NR_ext3_tags_23[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext3_23,
	1,	/* Elements count */
	&asn_SPC_NR_ext3_specs_23	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_PeriodicalReportConfigInterRAT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PeriodicalReportConfigInterRAT, reportInterval),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ReportInterval,
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
		"reportInterval"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PeriodicalReportConfigInterRAT, reportAmount),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_reportAmount_3,
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
		"reportAmount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PeriodicalReportConfigInterRAT, reportQuantity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasReportQuantity,
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
		"reportQuantity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PeriodicalReportConfigInterRAT, maxReportCells),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_maxReportCells_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_maxReportCells_constraint_1
		},
		0, 0, /* No default value */
		"maxReportCells"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_PeriodicalReportConfigInterRAT, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_ext1_15,
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
	{ ATF_POINTER, 2, offsetof(struct NR_PeriodicalReportConfigInterRAT, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_ext2_17,
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
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_PeriodicalReportConfigInterRAT, ext3),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_NR_ext3_23,
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
		"ext3"
		},
};
static const int asn_MAP_NR_PeriodicalReportConfigInterRAT_oms_1[] = { 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_NR_PeriodicalReportConfigInterRAT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PeriodicalReportConfigInterRAT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reportInterval */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportAmount */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportQuantity */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxReportCells */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PeriodicalReportConfigInterRAT_specs_1 = {
	sizeof(struct NR_PeriodicalReportConfigInterRAT),
	offsetof(struct NR_PeriodicalReportConfigInterRAT, _asn_ctx),
	asn_MAP_NR_PeriodicalReportConfigInterRAT_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_NR_PeriodicalReportConfigInterRAT_oms_1,	/* Optional members */
	0, 3,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PeriodicalReportConfigInterRAT = {
	"PeriodicalReportConfigInterRAT",
	"PeriodicalReportConfigInterRAT",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PeriodicalReportConfigInterRAT_tags_1,
	sizeof(asn_DEF_NR_PeriodicalReportConfigInterRAT_tags_1)
		/sizeof(asn_DEF_NR_PeriodicalReportConfigInterRAT_tags_1[0]), /* 1 */
	asn_DEF_NR_PeriodicalReportConfigInterRAT_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PeriodicalReportConfigInterRAT_tags_1)
		/sizeof(asn_DEF_NR_PeriodicalReportConfigInterRAT_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_PeriodicalReportConfigInterRAT_1,
	7,	/* Elements count */
	&asn_SPC_NR_PeriodicalReportConfigInterRAT_specs_1	/* Additional specs */
};

