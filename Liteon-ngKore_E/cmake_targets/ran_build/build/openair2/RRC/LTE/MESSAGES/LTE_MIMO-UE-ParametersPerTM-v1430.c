/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_MIMO-UE-ParametersPerTM-v1430.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_nMaxProc_r14_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 5L && value <= 32L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

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
static asn_per_constraints_t asn_PER_type_LTE_nMaxResource_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_nMaxProc_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  5,  32 }	/* (5..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_nMaxResource_r14_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_zp_CSI_RS_AperiodicInfo_r14_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_ul_dmrs_Enhancements_r14_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_densityReductionNP_r14_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_densityReductionBF_r14_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_hybridCSI_r14_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_semiOL_r14_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_csi_ReportingNP_r14_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_csi_ReportingAdvanced_r14_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_nMaxResource_r14_value2enum_4[] = {
	{ 0,	4,	"ffs1" },
	{ 1,	4,	"ffs2" },
	{ 2,	4,	"ffs3" },
	{ 3,	4,	"ffs4" }
};
static const unsigned int asn_MAP_LTE_nMaxResource_r14_enum2value_4[] = {
	0,	/* ffs1(0) */
	1,	/* ffs2(1) */
	2,	/* ffs3(2) */
	3	/* ffs4(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nMaxResource_r14_specs_4 = {
	asn_MAP_LTE_nMaxResource_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nMaxResource_r14_enum2value_4,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nMaxResource_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nMaxResource_r14_4 = {
	"nMaxResource-r14",
	"nMaxResource-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nMaxResource_r14_tags_4,
	sizeof(asn_DEF_LTE_nMaxResource_r14_tags_4)
		/sizeof(asn_DEF_LTE_nMaxResource_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_nMaxResource_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_nMaxResource_r14_tags_4)
		/sizeof(asn_DEF_LTE_nMaxResource_r14_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_nMaxResource_r14_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nMaxResource_r14_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_nzp_CSI_RS_AperiodicInfo_r14_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_AperiodicInfo_r14, nMaxProc_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_nMaxProc_r14_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_nMaxProc_r14_constraint_2
		},
		0, 0, /* No default value */
		"nMaxProc-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_AperiodicInfo_r14, nMaxResource_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nMaxResource_r14_4,
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
		"nMaxResource-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_nzp_CSI_RS_AperiodicInfo_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_nzp_CSI_RS_AperiodicInfo_r14_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nMaxProc-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nMaxResource-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nzp_CSI_RS_AperiodicInfo_r14_specs_2 = {
	sizeof(struct LTE_MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_AperiodicInfo_r14),
	offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_AperiodicInfo_r14, _asn_ctx),
	asn_MAP_LTE_nzp_CSI_RS_AperiodicInfo_r14_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nzp_CSI_RS_AperiodicInfo_r14_2 = {
	"nzp-CSI-RS-AperiodicInfo-r14",
	"nzp-CSI-RS-AperiodicInfo-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nzp_CSI_RS_AperiodicInfo_r14_tags_2,
	sizeof(asn_DEF_LTE_nzp_CSI_RS_AperiodicInfo_r14_tags_2)
		/sizeof(asn_DEF_LTE_nzp_CSI_RS_AperiodicInfo_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_nzp_CSI_RS_AperiodicInfo_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_nzp_CSI_RS_AperiodicInfo_r14_tags_2)
		/sizeof(asn_DEF_LTE_nzp_CSI_RS_AperiodicInfo_r14_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_nzp_CSI_RS_AperiodicInfo_r14_2,
	2,	/* Elements count */
	&asn_SPC_LTE_nzp_CSI_RS_AperiodicInfo_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nMaxResource_r14_value2enum_10[] = {
	{ 0,	4,	"ffs1" },
	{ 1,	4,	"ffs2" },
	{ 2,	4,	"ffs3" },
	{ 3,	4,	"ffs4" }
};
static const unsigned int asn_MAP_LTE_nMaxResource_r14_enum2value_10[] = {
	0,	/* ffs1(0) */
	1,	/* ffs2(1) */
	2,	/* ffs3(2) */
	3	/* ffs4(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nMaxResource_r14_specs_10 = {
	asn_MAP_LTE_nMaxResource_r14_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nMaxResource_r14_enum2value_10,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nMaxResource_r14_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nMaxResource_r14_10 = {
	"nMaxResource-r14",
	"nMaxResource-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nMaxResource_r14_tags_10,
	sizeof(asn_DEF_LTE_nMaxResource_r14_tags_10)
		/sizeof(asn_DEF_LTE_nMaxResource_r14_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_nMaxResource_r14_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_nMaxResource_r14_tags_10)
		/sizeof(asn_DEF_LTE_nMaxResource_r14_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_nMaxResource_r14_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nMaxResource_r14_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_nzp_CSI_RS_PeriodicInfo_r14_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_PeriodicInfo_r14, nMaxResource_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nMaxResource_r14_10,
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
		"nMaxResource-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_nzp_CSI_RS_PeriodicInfo_r14_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_nzp_CSI_RS_PeriodicInfo_r14_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nMaxResource-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nzp_CSI_RS_PeriodicInfo_r14_specs_9 = {
	sizeof(struct LTE_MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_PeriodicInfo_r14),
	offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430__nzp_CSI_RS_PeriodicInfo_r14, _asn_ctx),
	asn_MAP_LTE_nzp_CSI_RS_PeriodicInfo_r14_tag2el_9,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nzp_CSI_RS_PeriodicInfo_r14_9 = {
	"nzp-CSI-RS-PeriodicInfo-r14",
	"nzp-CSI-RS-PeriodicInfo-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nzp_CSI_RS_PeriodicInfo_r14_tags_9,
	sizeof(asn_DEF_LTE_nzp_CSI_RS_PeriodicInfo_r14_tags_9)
		/sizeof(asn_DEF_LTE_nzp_CSI_RS_PeriodicInfo_r14_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_nzp_CSI_RS_PeriodicInfo_r14_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_nzp_CSI_RS_PeriodicInfo_r14_tags_9)
		/sizeof(asn_DEF_LTE_nzp_CSI_RS_PeriodicInfo_r14_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_nzp_CSI_RS_PeriodicInfo_r14_9,
	1,	/* Elements count */
	&asn_SPC_LTE_nzp_CSI_RS_PeriodicInfo_r14_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_zp_CSI_RS_AperiodicInfo_r14_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_zp_CSI_RS_AperiodicInfo_r14_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_zp_CSI_RS_AperiodicInfo_r14_specs_15 = {
	asn_MAP_LTE_zp_CSI_RS_AperiodicInfo_r14_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_zp_CSI_RS_AperiodicInfo_r14_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_zp_CSI_RS_AperiodicInfo_r14_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_zp_CSI_RS_AperiodicInfo_r14_15 = {
	"zp-CSI-RS-AperiodicInfo-r14",
	"zp-CSI-RS-AperiodicInfo-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_zp_CSI_RS_AperiodicInfo_r14_tags_15,
	sizeof(asn_DEF_LTE_zp_CSI_RS_AperiodicInfo_r14_tags_15)
		/sizeof(asn_DEF_LTE_zp_CSI_RS_AperiodicInfo_r14_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_zp_CSI_RS_AperiodicInfo_r14_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_zp_CSI_RS_AperiodicInfo_r14_tags_15)
		/sizeof(asn_DEF_LTE_zp_CSI_RS_AperiodicInfo_r14_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_zp_CSI_RS_AperiodicInfo_r14_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_zp_CSI_RS_AperiodicInfo_r14_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ul_dmrs_Enhancements_r14_value2enum_17[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_ul_dmrs_Enhancements_r14_enum2value_17[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ul_dmrs_Enhancements_r14_specs_17 = {
	asn_MAP_LTE_ul_dmrs_Enhancements_r14_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ul_dmrs_Enhancements_r14_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ul_dmrs_Enhancements_r14_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ul_dmrs_Enhancements_r14_17 = {
	"ul-dmrs-Enhancements-r14",
	"ul-dmrs-Enhancements-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ul_dmrs_Enhancements_r14_tags_17,
	sizeof(asn_DEF_LTE_ul_dmrs_Enhancements_r14_tags_17)
		/sizeof(asn_DEF_LTE_ul_dmrs_Enhancements_r14_tags_17[0]) - 1, /* 1 */
	asn_DEF_LTE_ul_dmrs_Enhancements_r14_tags_17,	/* Same as above */
	sizeof(asn_DEF_LTE_ul_dmrs_Enhancements_r14_tags_17)
		/sizeof(asn_DEF_LTE_ul_dmrs_Enhancements_r14_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_ul_dmrs_Enhancements_r14_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ul_dmrs_Enhancements_r14_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_densityReductionNP_r14_value2enum_19[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_densityReductionNP_r14_enum2value_19[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_densityReductionNP_r14_specs_19 = {
	asn_MAP_LTE_densityReductionNP_r14_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_densityReductionNP_r14_enum2value_19,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_densityReductionNP_r14_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_densityReductionNP_r14_19 = {
	"densityReductionNP-r14",
	"densityReductionNP-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_densityReductionNP_r14_tags_19,
	sizeof(asn_DEF_LTE_densityReductionNP_r14_tags_19)
		/sizeof(asn_DEF_LTE_densityReductionNP_r14_tags_19[0]) - 1, /* 1 */
	asn_DEF_LTE_densityReductionNP_r14_tags_19,	/* Same as above */
	sizeof(asn_DEF_LTE_densityReductionNP_r14_tags_19)
		/sizeof(asn_DEF_LTE_densityReductionNP_r14_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_densityReductionNP_r14_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_densityReductionNP_r14_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_densityReductionBF_r14_value2enum_21[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_densityReductionBF_r14_enum2value_21[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_densityReductionBF_r14_specs_21 = {
	asn_MAP_LTE_densityReductionBF_r14_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_densityReductionBF_r14_enum2value_21,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_densityReductionBF_r14_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_densityReductionBF_r14_21 = {
	"densityReductionBF-r14",
	"densityReductionBF-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_densityReductionBF_r14_tags_21,
	sizeof(asn_DEF_LTE_densityReductionBF_r14_tags_21)
		/sizeof(asn_DEF_LTE_densityReductionBF_r14_tags_21[0]) - 1, /* 1 */
	asn_DEF_LTE_densityReductionBF_r14_tags_21,	/* Same as above */
	sizeof(asn_DEF_LTE_densityReductionBF_r14_tags_21)
		/sizeof(asn_DEF_LTE_densityReductionBF_r14_tags_21[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_densityReductionBF_r14_constr_21,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_densityReductionBF_r14_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_hybridCSI_r14_value2enum_23[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_hybridCSI_r14_enum2value_23[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_hybridCSI_r14_specs_23 = {
	asn_MAP_LTE_hybridCSI_r14_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_hybridCSI_r14_enum2value_23,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_hybridCSI_r14_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_hybridCSI_r14_23 = {
	"hybridCSI-r14",
	"hybridCSI-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_hybridCSI_r14_tags_23,
	sizeof(asn_DEF_LTE_hybridCSI_r14_tags_23)
		/sizeof(asn_DEF_LTE_hybridCSI_r14_tags_23[0]) - 1, /* 1 */
	asn_DEF_LTE_hybridCSI_r14_tags_23,	/* Same as above */
	sizeof(asn_DEF_LTE_hybridCSI_r14_tags_23)
		/sizeof(asn_DEF_LTE_hybridCSI_r14_tags_23[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_hybridCSI_r14_constr_23,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_hybridCSI_r14_specs_23	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_semiOL_r14_value2enum_25[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_semiOL_r14_enum2value_25[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_semiOL_r14_specs_25 = {
	asn_MAP_LTE_semiOL_r14_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_semiOL_r14_enum2value_25,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_semiOL_r14_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_semiOL_r14_25 = {
	"semiOL-r14",
	"semiOL-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_semiOL_r14_tags_25,
	sizeof(asn_DEF_LTE_semiOL_r14_tags_25)
		/sizeof(asn_DEF_LTE_semiOL_r14_tags_25[0]) - 1, /* 1 */
	asn_DEF_LTE_semiOL_r14_tags_25,	/* Same as above */
	sizeof(asn_DEF_LTE_semiOL_r14_tags_25)
		/sizeof(asn_DEF_LTE_semiOL_r14_tags_25[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_semiOL_r14_constr_25,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_semiOL_r14_specs_25	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_csi_ReportingNP_r14_value2enum_27[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_csi_ReportingNP_r14_enum2value_27[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_csi_ReportingNP_r14_specs_27 = {
	asn_MAP_LTE_csi_ReportingNP_r14_value2enum_27,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_csi_ReportingNP_r14_enum2value_27,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_csi_ReportingNP_r14_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_csi_ReportingNP_r14_27 = {
	"csi-ReportingNP-r14",
	"csi-ReportingNP-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_csi_ReportingNP_r14_tags_27,
	sizeof(asn_DEF_LTE_csi_ReportingNP_r14_tags_27)
		/sizeof(asn_DEF_LTE_csi_ReportingNP_r14_tags_27[0]) - 1, /* 1 */
	asn_DEF_LTE_csi_ReportingNP_r14_tags_27,	/* Same as above */
	sizeof(asn_DEF_LTE_csi_ReportingNP_r14_tags_27)
		/sizeof(asn_DEF_LTE_csi_ReportingNP_r14_tags_27[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_csi_ReportingNP_r14_constr_27,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_csi_ReportingNP_r14_specs_27	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_csi_ReportingAdvanced_r14_value2enum_29[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_csi_ReportingAdvanced_r14_enum2value_29[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_csi_ReportingAdvanced_r14_specs_29 = {
	asn_MAP_LTE_csi_ReportingAdvanced_r14_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_csi_ReportingAdvanced_r14_enum2value_29,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_csi_ReportingAdvanced_r14_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_csi_ReportingAdvanced_r14_29 = {
	"csi-ReportingAdvanced-r14",
	"csi-ReportingAdvanced-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_csi_ReportingAdvanced_r14_tags_29,
	sizeof(asn_DEF_LTE_csi_ReportingAdvanced_r14_tags_29)
		/sizeof(asn_DEF_LTE_csi_ReportingAdvanced_r14_tags_29[0]) - 1, /* 1 */
	asn_DEF_LTE_csi_ReportingAdvanced_r14_tags_29,	/* Same as above */
	sizeof(asn_DEF_LTE_csi_ReportingAdvanced_r14_tags_29)
		/sizeof(asn_DEF_LTE_csi_ReportingAdvanced_r14_tags_29[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_csi_ReportingAdvanced_r14_constr_29,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_csi_ReportingAdvanced_r14_specs_29	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MIMO_UE_ParametersPerTM_v1430_1[] = {
	{ ATF_POINTER, 10, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430, nzp_CSI_RS_AperiodicInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_nzp_CSI_RS_AperiodicInfo_r14_2,
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
		"nzp-CSI-RS-AperiodicInfo-r14"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430, nzp_CSI_RS_PeriodicInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_nzp_CSI_RS_PeriodicInfo_r14_9,
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
		"nzp-CSI-RS-PeriodicInfo-r14"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430, zp_CSI_RS_AperiodicInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_zp_CSI_RS_AperiodicInfo_r14_15,
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
		"zp-CSI-RS-AperiodicInfo-r14"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430, ul_dmrs_Enhancements_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ul_dmrs_Enhancements_r14_17,
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
		"ul-dmrs-Enhancements-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430, densityReductionNP_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_densityReductionNP_r14_19,
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
		"densityReductionNP-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430, densityReductionBF_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_densityReductionBF_r14_21,
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
		"densityReductionBF-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430, hybridCSI_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_hybridCSI_r14_23,
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
		"hybridCSI-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430, semiOL_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_semiOL_r14_25,
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
		"semiOL-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430, csi_ReportingNP_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_csi_ReportingNP_r14_27,
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
		"csi-ReportingNP-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430, csi_ReportingAdvanced_r14),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_csi_ReportingAdvanced_r14_29,
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
		"csi-ReportingAdvanced-r14"
		},
};
static const int asn_MAP_LTE_MIMO_UE_ParametersPerTM_v1430_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_LTE_MIMO_UE_ParametersPerTM_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MIMO_UE_ParametersPerTM_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nzp-CSI-RS-AperiodicInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nzp-CSI-RS-PeriodicInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* zp-CSI-RS-AperiodicInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ul-dmrs-Enhancements-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* densityReductionNP-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* densityReductionBF-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* hybridCSI-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* semiOL-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* csi-ReportingNP-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* csi-ReportingAdvanced-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MIMO_UE_ParametersPerTM_v1430_specs_1 = {
	sizeof(struct LTE_MIMO_UE_ParametersPerTM_v1430),
	offsetof(struct LTE_MIMO_UE_ParametersPerTM_v1430, _asn_ctx),
	asn_MAP_LTE_MIMO_UE_ParametersPerTM_v1430_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_LTE_MIMO_UE_ParametersPerTM_v1430_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MIMO_UE_ParametersPerTM_v1430 = {
	"MIMO-UE-ParametersPerTM-v1430",
	"MIMO-UE-ParametersPerTM-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MIMO_UE_ParametersPerTM_v1430_tags_1,
	sizeof(asn_DEF_LTE_MIMO_UE_ParametersPerTM_v1430_tags_1)
		/sizeof(asn_DEF_LTE_MIMO_UE_ParametersPerTM_v1430_tags_1[0]), /* 1 */
	asn_DEF_LTE_MIMO_UE_ParametersPerTM_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MIMO_UE_ParametersPerTM_v1430_tags_1)
		/sizeof(asn_DEF_LTE_MIMO_UE_ParametersPerTM_v1430_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_MIMO_UE_ParametersPerTM_v1430_1,
	10,	/* Elements count */
	&asn_SPC_LTE_MIMO_UE_ParametersPerTM_v1430_specs_1	/* Additional specs */
};

