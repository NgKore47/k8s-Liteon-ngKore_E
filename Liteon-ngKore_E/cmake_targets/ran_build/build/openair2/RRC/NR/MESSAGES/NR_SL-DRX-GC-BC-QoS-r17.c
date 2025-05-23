/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SL-DRX-GC-BC-QoS-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_subMilliSeconds_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 31L)) {
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
static int
memb_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 2048UL)) {
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
static asn_per_constraints_t asn_PER_type_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 11,  11,  1,  2048 }	/* (SIZE(1..2048)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_milliSeconds_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_subMilliSeconds_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  31 }	/* (1..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_DRX_GC_BC_OnDurationTimer_r17_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_DRX_GC_InactivityTimer_r17_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_DRX_GC_BC_Cycle_r17_constr_72 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 11,  11,  1,  2048 }	/* (SIZE(1..2048)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SL_QoS_Profile_r16,
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
static const ber_tlv_tag_t asn_DEF_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_specs_2 = {
	sizeof(struct NR_SL_DRX_GC_BC_QoS_r17__sl_DRX_GC_BC_MappedQoS_FlowList_r17),
	offsetof(struct NR_SL_DRX_GC_BC_QoS_r17__sl_DRX_GC_BC_MappedQoS_FlowList_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_2 = {
	"sl-DRX-GC-BC-MappedQoS-FlowList-r17",
	"sl-DRX-GC-BC-MappedQoS-FlowList-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_tags_2,
	sizeof(asn_DEF_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_tags_2)
		/sizeof(asn_DEF_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_tags_2)
		/sizeof(asn_DEF_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_2,
	1,	/* Single element */
	&asn_SPC_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_milliSeconds_value2enum_6[] = {
	{ 0,	3,	"ms1" },
	{ 1,	3,	"ms2" },
	{ 2,	3,	"ms3" },
	{ 3,	3,	"ms4" },
	{ 4,	3,	"ms5" },
	{ 5,	3,	"ms6" },
	{ 6,	3,	"ms8" },
	{ 7,	4,	"ms10" },
	{ 8,	4,	"ms20" },
	{ 9,	4,	"ms30" },
	{ 10,	4,	"ms40" },
	{ 11,	4,	"ms50" },
	{ 12,	4,	"ms60" },
	{ 13,	4,	"ms80" },
	{ 14,	5,	"ms100" },
	{ 15,	5,	"ms200" },
	{ 16,	5,	"ms300" },
	{ 17,	5,	"ms400" },
	{ 18,	5,	"ms500" },
	{ 19,	5,	"ms600" },
	{ 20,	5,	"ms800" },
	{ 21,	6,	"ms1000" },
	{ 22,	6,	"ms1200" },
	{ 23,	6,	"ms1600" },
	{ 24,	6,	"spare8" },
	{ 25,	6,	"spare7" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_milliSeconds_enum2value_6[] = {
	0,	/* ms1(0) */
	7,	/* ms10(7) */
	14,	/* ms100(14) */
	21,	/* ms1000(21) */
	22,	/* ms1200(22) */
	23,	/* ms1600(23) */
	1,	/* ms2(1) */
	8,	/* ms20(8) */
	15,	/* ms200(15) */
	2,	/* ms3(2) */
	9,	/* ms30(9) */
	16,	/* ms300(16) */
	3,	/* ms4(3) */
	10,	/* ms40(10) */
	17,	/* ms400(17) */
	4,	/* ms5(4) */
	11,	/* ms50(11) */
	18,	/* ms500(18) */
	5,	/* ms6(5) */
	12,	/* ms60(12) */
	19,	/* ms600(19) */
	6,	/* ms8(6) */
	13,	/* ms80(13) */
	20,	/* ms800(20) */
	31,	/* spare1(31) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24	/* spare8(24) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_milliSeconds_specs_6 = {
	asn_MAP_NR_milliSeconds_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_milliSeconds_enum2value_6,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_milliSeconds_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_milliSeconds_6 = {
	"milliSeconds",
	"milliSeconds",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_milliSeconds_tags_6,
	sizeof(asn_DEF_NR_milliSeconds_tags_6)
		/sizeof(asn_DEF_NR_milliSeconds_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_milliSeconds_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_milliSeconds_tags_6)
		/sizeof(asn_DEF_NR_milliSeconds_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_milliSeconds_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_milliSeconds_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_sl_DRX_GC_BC_OnDurationTimer_r17_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_DRX_GC_BC_QoS_r17__sl_DRX_GC_BC_OnDurationTimer_r17, choice.subMilliSeconds),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_subMilliSeconds_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_subMilliSeconds_constraint_4
		},
		0, 0, /* No default value */
		"subMilliSeconds"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_DRX_GC_BC_QoS_r17__sl_DRX_GC_BC_OnDurationTimer_r17, choice.milliSeconds),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_milliSeconds_6,
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
		"milliSeconds"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_sl_DRX_GC_BC_OnDurationTimer_r17_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subMilliSeconds */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* milliSeconds */
};
static asn_CHOICE_specifics_t asn_SPC_NR_sl_DRX_GC_BC_OnDurationTimer_r17_specs_4 = {
	sizeof(struct NR_SL_DRX_GC_BC_QoS_r17__sl_DRX_GC_BC_OnDurationTimer_r17),
	offsetof(struct NR_SL_DRX_GC_BC_QoS_r17__sl_DRX_GC_BC_OnDurationTimer_r17, _asn_ctx),
	offsetof(struct NR_SL_DRX_GC_BC_QoS_r17__sl_DRX_GC_BC_OnDurationTimer_r17, present),
	sizeof(((struct NR_SL_DRX_GC_BC_QoS_r17__sl_DRX_GC_BC_OnDurationTimer_r17 *)0)->present),
	asn_MAP_NR_sl_DRX_GC_BC_OnDurationTimer_r17_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_DRX_GC_BC_OnDurationTimer_r17_4 = {
	"sl-DRX-GC-BC-OnDurationTimer-r17",
	"sl-DRX-GC-BC-OnDurationTimer-r17",
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
		&asn_PER_type_NR_sl_DRX_GC_BC_OnDurationTimer_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_sl_DRX_GC_BC_OnDurationTimer_r17_4,
	2,	/* Elements count */
	&asn_SPC_NR_sl_DRX_GC_BC_OnDurationTimer_r17_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_DRX_GC_InactivityTimer_r17_value2enum_39[] = {
	{ 0,	3,	"ms0" },
	{ 1,	3,	"ms1" },
	{ 2,	3,	"ms2" },
	{ 3,	3,	"ms3" },
	{ 4,	3,	"ms4" },
	{ 5,	3,	"ms5" },
	{ 6,	3,	"ms6" },
	{ 7,	3,	"ms8" },
	{ 8,	4,	"ms10" },
	{ 9,	4,	"ms20" },
	{ 10,	4,	"ms30" },
	{ 11,	4,	"ms40" },
	{ 12,	4,	"ms50" },
	{ 13,	4,	"ms60" },
	{ 14,	4,	"ms80" },
	{ 15,	5,	"ms100" },
	{ 16,	5,	"ms200" },
	{ 17,	5,	"ms300" },
	{ 18,	5,	"ms500" },
	{ 19,	5,	"ms750" },
	{ 20,	6,	"ms1280" },
	{ 21,	6,	"ms1920" },
	{ 22,	6,	"ms2560" },
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
static const unsigned int asn_MAP_NR_sl_DRX_GC_InactivityTimer_r17_enum2value_39[] = {
	0,	/* ms0(0) */
	1,	/* ms1(1) */
	8,	/* ms10(8) */
	15,	/* ms100(15) */
	20,	/* ms1280(20) */
	21,	/* ms1920(21) */
	2,	/* ms2(2) */
	9,	/* ms20(9) */
	16,	/* ms200(16) */
	22,	/* ms2560(22) */
	3,	/* ms3(3) */
	10,	/* ms30(10) */
	17,	/* ms300(17) */
	4,	/* ms4(4) */
	11,	/* ms40(11) */
	5,	/* ms5(5) */
	12,	/* ms50(12) */
	18,	/* ms500(18) */
	6,	/* ms6(6) */
	13,	/* ms60(13) */
	19,	/* ms750(19) */
	7,	/* ms8(7) */
	14,	/* ms80(14) */
	31,	/* spare1(31) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24,	/* spare8(24) */
	23	/* spare9(23) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_DRX_GC_InactivityTimer_r17_specs_39 = {
	asn_MAP_NR_sl_DRX_GC_InactivityTimer_r17_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_DRX_GC_InactivityTimer_r17_enum2value_39,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_DRX_GC_InactivityTimer_r17_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_DRX_GC_InactivityTimer_r17_39 = {
	"sl-DRX-GC-InactivityTimer-r17",
	"sl-DRX-GC-InactivityTimer-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_DRX_GC_InactivityTimer_r17_tags_39,
	sizeof(asn_DEF_NR_sl_DRX_GC_InactivityTimer_r17_tags_39)
		/sizeof(asn_DEF_NR_sl_DRX_GC_InactivityTimer_r17_tags_39[0]) - 1, /* 1 */
	asn_DEF_NR_sl_DRX_GC_InactivityTimer_r17_tags_39,	/* Same as above */
	sizeof(asn_DEF_NR_sl_DRX_GC_InactivityTimer_r17_tags_39)
		/sizeof(asn_DEF_NR_sl_DRX_GC_InactivityTimer_r17_tags_39[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_DRX_GC_InactivityTimer_r17_constr_39,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_DRX_GC_InactivityTimer_r17_specs_39	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_DRX_GC_BC_Cycle_r17_value2enum_72[] = {
	{ 0,	4,	"ms10" },
	{ 1,	4,	"ms20" },
	{ 2,	4,	"ms32" },
	{ 3,	4,	"ms40" },
	{ 4,	4,	"ms60" },
	{ 5,	4,	"ms64" },
	{ 6,	4,	"ms70" },
	{ 7,	4,	"ms80" },
	{ 8,	5,	"ms128" },
	{ 9,	5,	"ms160" },
	{ 10,	5,	"ms256" },
	{ 11,	5,	"ms320" },
	{ 12,	5,	"ms512" },
	{ 13,	5,	"ms640" },
	{ 14,	6,	"ms1024" },
	{ 15,	6,	"ms1280" },
	{ 16,	6,	"ms2048" },
	{ 17,	6,	"ms2560" },
	{ 18,	6,	"ms5120" },
	{ 19,	7,	"ms10240" },
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
static const unsigned int asn_MAP_NR_sl_DRX_GC_BC_Cycle_r17_enum2value_72[] = {
	0,	/* ms10(0) */
	14,	/* ms1024(14) */
	19,	/* ms10240(19) */
	8,	/* ms128(8) */
	15,	/* ms1280(15) */
	9,	/* ms160(9) */
	1,	/* ms20(1) */
	16,	/* ms2048(16) */
	10,	/* ms256(10) */
	17,	/* ms2560(17) */
	2,	/* ms32(2) */
	11,	/* ms320(11) */
	3,	/* ms40(3) */
	12,	/* ms512(12) */
	18,	/* ms5120(18) */
	4,	/* ms60(4) */
	5,	/* ms64(5) */
	13,	/* ms640(13) */
	6,	/* ms70(6) */
	7,	/* ms80(7) */
	31,	/* spare1(31) */
	22,	/* spare10(22) */
	21,	/* spare11(21) */
	20,	/* spare12(20) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24,	/* spare8(24) */
	23	/* spare9(23) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_DRX_GC_BC_Cycle_r17_specs_72 = {
	asn_MAP_NR_sl_DRX_GC_BC_Cycle_r17_value2enum_72,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_DRX_GC_BC_Cycle_r17_enum2value_72,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_DRX_GC_BC_Cycle_r17_tags_72[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_DRX_GC_BC_Cycle_r17_72 = {
	"sl-DRX-GC-BC-Cycle-r17",
	"sl-DRX-GC-BC-Cycle-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_DRX_GC_BC_Cycle_r17_tags_72,
	sizeof(asn_DEF_NR_sl_DRX_GC_BC_Cycle_r17_tags_72)
		/sizeof(asn_DEF_NR_sl_DRX_GC_BC_Cycle_r17_tags_72[0]) - 1, /* 1 */
	asn_DEF_NR_sl_DRX_GC_BC_Cycle_r17_tags_72,	/* Same as above */
	sizeof(asn_DEF_NR_sl_DRX_GC_BC_Cycle_r17_tags_72)
		/sizeof(asn_DEF_NR_sl_DRX_GC_BC_Cycle_r17_tags_72[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_DRX_GC_BC_Cycle_r17_constr_72,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_DRX_GC_BC_Cycle_r17_specs_72	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SL_DRX_GC_BC_QoS_r17_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SL_DRX_GC_BC_QoS_r17, sl_DRX_GC_BC_MappedQoS_FlowList_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_DRX_GC_BC_MappedQoS_FlowList_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-DRX-GC-BC-MappedQoS-FlowList-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_DRX_GC_BC_QoS_r17, sl_DRX_GC_BC_OnDurationTimer_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_sl_DRX_GC_BC_OnDurationTimer_r17_4,
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
		"sl-DRX-GC-BC-OnDurationTimer-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_DRX_GC_BC_QoS_r17, sl_DRX_GC_InactivityTimer_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_DRX_GC_InactivityTimer_r17_39,
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
		"sl-DRX-GC-InactivityTimer-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_DRX_GC_BC_QoS_r17, sl_DRX_GC_BC_Cycle_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_DRX_GC_BC_Cycle_r17_72,
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
		"sl-DRX-GC-BC-Cycle-r17"
		},
};
static const int asn_MAP_NR_SL_DRX_GC_BC_QoS_r17_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_SL_DRX_GC_BC_QoS_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_DRX_GC_BC_QoS_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-DRX-GC-BC-MappedQoS-FlowList-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-DRX-GC-BC-OnDurationTimer-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-DRX-GC-InactivityTimer-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sl-DRX-GC-BC-Cycle-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_DRX_GC_BC_QoS_r17_specs_1 = {
	sizeof(struct NR_SL_DRX_GC_BC_QoS_r17),
	offsetof(struct NR_SL_DRX_GC_BC_QoS_r17, _asn_ctx),
	asn_MAP_NR_SL_DRX_GC_BC_QoS_r17_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_SL_DRX_GC_BC_QoS_r17_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_DRX_GC_BC_QoS_r17 = {
	"SL-DRX-GC-BC-QoS-r17",
	"SL-DRX-GC-BC-QoS-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_DRX_GC_BC_QoS_r17_tags_1,
	sizeof(asn_DEF_NR_SL_DRX_GC_BC_QoS_r17_tags_1)
		/sizeof(asn_DEF_NR_SL_DRX_GC_BC_QoS_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_DRX_GC_BC_QoS_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_DRX_GC_BC_QoS_r17_tags_1)
		/sizeof(asn_DEF_NR_SL_DRX_GC_BC_QoS_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SL_DRX_GC_BC_QoS_r17_1,
	4,	/* Elements count */
	&asn_SPC_NR_SL_DRX_GC_BC_QoS_r17_specs_1	/* Additional specs */
};

