/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SL-CommResourcePoolV2X-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_syncConfigIndex_r14_constraint_49(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_startRB_Subchannel_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 99L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_startRB_PSCCH_Pool_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 99L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_zoneID_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 7L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_threshS_RSSI_CBR_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 45L)) {
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
static asn_per_constraints_t asn_PER_type_LTE_sizeSubchannel_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_numSubchannel_r14_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_syncConfigIndex_r14_constr_51 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_startRB_Subchannel_r14_constr_47 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  99 }	/* (0..99) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_startRB_PSCCH_Pool_r14_constr_48 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  99 }	/* (0..99) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_zoneID_r14_constr_53 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_threshS_RSSI_CBR_r14_constr_54 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  45 }	/* (0..45) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_sizeSubchannel_r14_value2enum_5[] = {
	{ 0,	2,	"n4" },
	{ 1,	2,	"n5" },
	{ 2,	2,	"n6" },
	{ 3,	2,	"n8" },
	{ 4,	2,	"n9" },
	{ 5,	3,	"n10" },
	{ 6,	3,	"n12" },
	{ 7,	3,	"n15" },
	{ 8,	3,	"n16" },
	{ 9,	3,	"n18" },
	{ 10,	3,	"n20" },
	{ 11,	3,	"n25" },
	{ 12,	3,	"n30" },
	{ 13,	3,	"n48" },
	{ 14,	3,	"n50" },
	{ 15,	3,	"n72" },
	{ 16,	3,	"n75" },
	{ 17,	3,	"n96" },
	{ 18,	4,	"n100" },
	{ 19,	7,	"spare13" },
	{ 20,	7,	"spare12" },
	{ 21,	7,	"spare11" },
	{ 22,	7,	"spare10" },
	{ 23,	6,	"spare9" },
	{ 24,	6,	"spare8" },
	{ 25,	6,	"spare7" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_sizeSubchannel_r14_enum2value_5[] = {
	5,	/* n10(5) */
	18,	/* n100(18) */
	6,	/* n12(6) */
	7,	/* n15(7) */
	8,	/* n16(8) */
	9,	/* n18(9) */
	10,	/* n20(10) */
	11,	/* n25(11) */
	12,	/* n30(12) */
	0,	/* n4(0) */
	13,	/* n48(13) */
	1,	/* n5(1) */
	14,	/* n50(14) */
	2,	/* n6(2) */
	15,	/* n72(15) */
	16,	/* n75(16) */
	3,	/* n8(3) */
	4,	/* n9(4) */
	17,	/* n96(17) */
	31,	/* spare1(31) */
	22,	/* spare10(22) */
	21,	/* spare11(21) */
	20,	/* spare12(20) */
	19,	/* spare13(19) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24,	/* spare8(24) */
	23	/* spare9(23) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_sizeSubchannel_r14_specs_5 = {
	asn_MAP_LTE_sizeSubchannel_r14_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_sizeSubchannel_r14_enum2value_5,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_sizeSubchannel_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_sizeSubchannel_r14_5 = {
	"sizeSubchannel-r14",
	"sizeSubchannel-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_sizeSubchannel_r14_tags_5,
	sizeof(asn_DEF_LTE_sizeSubchannel_r14_tags_5)
		/sizeof(asn_DEF_LTE_sizeSubchannel_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_sizeSubchannel_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_sizeSubchannel_r14_tags_5)
		/sizeof(asn_DEF_LTE_sizeSubchannel_r14_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_sizeSubchannel_r14_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_sizeSubchannel_r14_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_numSubchannel_r14_value2enum_38[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n5" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n10" },
	{ 5,	3,	"n15" },
	{ 6,	3,	"n20" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_numSubchannel_r14_enum2value_38[] = {
	0,	/* n1(0) */
	4,	/* n10(4) */
	5,	/* n15(5) */
	6,	/* n20(6) */
	1,	/* n3(1) */
	2,	/* n5(2) */
	3,	/* n8(3) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_numSubchannel_r14_specs_38 = {
	asn_MAP_LTE_numSubchannel_r14_value2enum_38,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_numSubchannel_r14_enum2value_38,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_numSubchannel_r14_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_numSubchannel_r14_38 = {
	"numSubchannel-r14",
	"numSubchannel-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_numSubchannel_r14_tags_38,
	sizeof(asn_DEF_LTE_numSubchannel_r14_tags_38)
		/sizeof(asn_DEF_LTE_numSubchannel_r14_tags_38[0]) - 1, /* 1 */
	asn_DEF_LTE_numSubchannel_r14_tags_38,	/* Same as above */
	sizeof(asn_DEF_LTE_numSubchannel_r14_tags_38)
		/sizeof(asn_DEF_LTE_numSubchannel_r14_tags_38[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_numSubchannel_r14_constr_38,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_numSubchannel_r14_specs_38	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_rxParametersNCell_r14_49[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_CommResourcePoolV2X_r14__rxParametersNCell_r14, tdd_Config_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_TDD_Config,
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
		"tdd-Config-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommResourcePoolV2X_r14__rxParametersNCell_r14, syncConfigIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_syncConfigIndex_r14_constr_51,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_syncConfigIndex_r14_constraint_49
		},
		0, 0, /* No default value */
		"syncConfigIndex-r14"
		},
};
static const int asn_MAP_LTE_rxParametersNCell_r14_oms_49[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_rxParametersNCell_r14_tags_49[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_rxParametersNCell_r14_tag2el_49[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd-Config-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* syncConfigIndex-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_rxParametersNCell_r14_specs_49 = {
	sizeof(struct LTE_SL_CommResourcePoolV2X_r14__rxParametersNCell_r14),
	offsetof(struct LTE_SL_CommResourcePoolV2X_r14__rxParametersNCell_r14, _asn_ctx),
	asn_MAP_LTE_rxParametersNCell_r14_tag2el_49,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_rxParametersNCell_r14_oms_49,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rxParametersNCell_r14_49 = {
	"rxParametersNCell-r14",
	"rxParametersNCell-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_rxParametersNCell_r14_tags_49,
	sizeof(asn_DEF_LTE_rxParametersNCell_r14_tags_49)
		/sizeof(asn_DEF_LTE_rxParametersNCell_r14_tags_49[0]) - 1, /* 1 */
	asn_DEF_LTE_rxParametersNCell_r14_tags_49,	/* Same as above */
	sizeof(asn_DEF_LTE_rxParametersNCell_r14_tags_49)
		/sizeof(asn_DEF_LTE_rxParametersNCell_r14_tags_49[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_rxParametersNCell_r14_49,
	2,	/* Elements count */
	&asn_SPC_LTE_rxParametersNCell_r14_specs_49	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_61[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_CommResourcePoolV2X_r14__ext1, sl_MinT2ValueList_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_MinT2ValueList_r15,
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
		"sl-MinT2ValueList-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_CommResourcePoolV2X_r14__ext1, cbr_pssch_TxConfigList_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CBR_PPPP_TxConfigList_v1530,
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
		"cbr-pssch-TxConfigList-v1530"
		},
};
static const int asn_MAP_LTE_ext1_oms_61[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_61[] = {
	(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_61[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-MinT2ValueList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cbr-pssch-TxConfigList-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_61 = {
	sizeof(struct LTE_SL_CommResourcePoolV2X_r14__ext1),
	offsetof(struct LTE_SL_CommResourcePoolV2X_r14__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_61,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_61,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_61 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_61,
	sizeof(asn_DEF_LTE_ext1_tags_61)
		/sizeof(asn_DEF_LTE_ext1_tags_61[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_61,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_61)
		/sizeof(asn_DEF_LTE_ext1_tags_61[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext1_61,
	2,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_61	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SL_CommResourcePoolV2X_r14_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, sl_OffsetIndicator_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicator_r12,
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
		"sl-OffsetIndicator-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, sl_Subframe_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_SubframeBitmapSL_r14,
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
		"sl-Subframe-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, adjacencyPSCCH_PSSCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
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
		"adjacencyPSCCH-PSSCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, sizeSubchannel_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_sizeSubchannel_r14_5,
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
		"sizeSubchannel-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, numSubchannel_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_numSubchannel_r14_38,
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
		"numSubchannel-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, startRB_Subchannel_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_startRB_Subchannel_r14_constr_47,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_startRB_Subchannel_r14_constraint_1
		},
		0, 0, /* No default value */
		"startRB-Subchannel-r14"
		},
	{ ATF_POINTER, 11, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, startRB_PSCCH_Pool_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_startRB_PSCCH_Pool_r14_constr_48,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_startRB_PSCCH_Pool_r14_constraint_1
		},
		0, 0, /* No default value */
		"startRB-PSCCH-Pool-r14"
		},
	{ ATF_POINTER, 10, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, rxParametersNCell_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_rxParametersNCell_r14_49,
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
		"rxParametersNCell-r14"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, dataTxParameters_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_TxParameters_r12,
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
		"dataTxParameters-r14"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, zoneID_r14),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_zoneID_r14_constr_53,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_zoneID_r14_constraint_1
		},
		0, 0, /* No default value */
		"zoneID-r14"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, threshS_RSSI_CBR_r14),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_threshS_RSSI_CBR_r14_constr_54,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_threshS_RSSI_CBR_r14_constraint_1
		},
		0, 0, /* No default value */
		"threshS-RSSI-CBR-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, poolReportId_r14),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_V2X_TxPoolReportIdentity_r14,
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
		"poolReportId-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, cbr_pssch_TxConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CBR_PPPP_TxConfigList_r14,
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
		"cbr-pssch-TxConfigList-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, resourceSelectionConfigP2X_r14),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_P2X_ResourceSelectionConfig_r14,
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
		"resourceSelectionConfigP2X-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, syncAllowed_r14),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_SyncAllowed_r14,
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
		"syncAllowed-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, restrictResourceReservationPeriod_r14),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_RestrictResourceReservationPeriodList_r14,
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
		"restrictResourceReservationPeriod-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_CommResourcePoolV2X_r14, ext1),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		0,
		&asn_DEF_LTE_ext1_61,
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
static const int asn_MAP_LTE_SL_CommResourcePoolV2X_r14_oms_1[] = { 0, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_CommResourcePoolV2X_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_CommResourcePoolV2X_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-OffsetIndicator-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-Subframe-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* adjacencyPSCCH-PSSCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sizeSubchannel-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* numSubchannel-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* startRB-Subchannel-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* startRB-PSCCH-Pool-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rxParametersNCell-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* dataTxParameters-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* zoneID-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* threshS-RSSI-CBR-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* poolReportId-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* cbr-pssch-TxConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* resourceSelectionConfigP2X-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* syncAllowed-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* restrictResourceReservationPeriod-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_CommResourcePoolV2X_r14_specs_1 = {
	sizeof(struct LTE_SL_CommResourcePoolV2X_r14),
	offsetof(struct LTE_SL_CommResourcePoolV2X_r14, _asn_ctx),
	asn_MAP_LTE_SL_CommResourcePoolV2X_r14_tag2el_1,
	17,	/* Count of tags in the map */
	asn_MAP_LTE_SL_CommResourcePoolV2X_r14_oms_1,	/* Optional members */
	11, 1,	/* Root/Additions */
	16,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_CommResourcePoolV2X_r14 = {
	"SL-CommResourcePoolV2X-r14",
	"SL-CommResourcePoolV2X-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_CommResourcePoolV2X_r14_tags_1,
	sizeof(asn_DEF_LTE_SL_CommResourcePoolV2X_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_CommResourcePoolV2X_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_CommResourcePoolV2X_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_CommResourcePoolV2X_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_CommResourcePoolV2X_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SL_CommResourcePoolV2X_r14_1,
	17,	/* Elements count */
	&asn_SPC_LTE_SL_CommResourcePoolV2X_r14_specs_1	/* Additional specs */
};

