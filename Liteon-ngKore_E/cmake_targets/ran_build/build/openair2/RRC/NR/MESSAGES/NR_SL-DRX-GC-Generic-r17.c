/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SL-DRX-GC-Generic-r17.h"

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
static asn_per_constraints_t asn_PER_type_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_DRX_GC_RetransmissionTimer_r17_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_value2enum_2[] = {
	{ 0,	3,	"sl0" },
	{ 1,	3,	"sl1" },
	{ 2,	3,	"sl2" },
	{ 3,	3,	"sl4" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_enum2value_2[] = {
	0,	/* sl0(0) */
	1,	/* sl1(1) */
	2,	/* sl2(2) */
	3,	/* sl4(3) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4	/* spare4(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_specs_2 = {
	asn_MAP_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_2 = {
	"sl-DRX-GC-HARQ-RTT-Timer1-r17",
	"sl-DRX-GC-HARQ-RTT-Timer1-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_tags_2,
	sizeof(asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_tags_2)
		/sizeof(asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_tags_2)
		/sizeof(asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_value2enum_11[] = {
	{ 0,	3,	"sl0" },
	{ 1,	3,	"sl1" },
	{ 2,	3,	"sl2" },
	{ 3,	3,	"sl4" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_enum2value_11[] = {
	0,	/* sl0(0) */
	1,	/* sl1(1) */
	2,	/* sl2(2) */
	3,	/* sl4(3) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4	/* spare4(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_specs_11 = {
	asn_MAP_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_11 = {
	"sl-DRX-GC-HARQ-RTT-Timer2-r17",
	"sl-DRX-GC-HARQ-RTT-Timer2-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_tags_11,
	sizeof(asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_tags_11)
		/sizeof(asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_tags_11)
		/sizeof(asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_DRX_GC_RetransmissionTimer_r17_value2enum_20[] = {
	{ 0,	3,	"sl0" },
	{ 1,	3,	"sl1" },
	{ 2,	3,	"sl2" },
	{ 3,	3,	"sl4" },
	{ 4,	3,	"sl6" },
	{ 5,	3,	"sl8" },
	{ 6,	4,	"sl16" },
	{ 7,	4,	"sl24" },
	{ 8,	4,	"sl33" },
	{ 9,	4,	"sl40" },
	{ 10,	4,	"sl64" },
	{ 11,	4,	"sl80" },
	{ 12,	4,	"sl96" },
	{ 13,	5,	"sl112" },
	{ 14,	5,	"sl128" },
	{ 15,	5,	"sl160" },
	{ 16,	5,	"sl320" },
	{ 17,	7,	"spare15" },
	{ 18,	7,	"spare14" },
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
static const unsigned int asn_MAP_NR_sl_DRX_GC_RetransmissionTimer_r17_enum2value_20[] = {
	0,	/* sl0(0) */
	1,	/* sl1(1) */
	13,	/* sl112(13) */
	14,	/* sl128(14) */
	6,	/* sl16(6) */
	15,	/* sl160(15) */
	2,	/* sl2(2) */
	7,	/* sl24(7) */
	16,	/* sl320(16) */
	8,	/* sl33(8) */
	3,	/* sl4(3) */
	9,	/* sl40(9) */
	4,	/* sl6(4) */
	10,	/* sl64(10) */
	5,	/* sl8(5) */
	11,	/* sl80(11) */
	12,	/* sl96(12) */
	31,	/* spare1(31) */
	22,	/* spare10(22) */
	21,	/* spare11(21) */
	20,	/* spare12(20) */
	19,	/* spare13(19) */
	18,	/* spare14(18) */
	17,	/* spare15(17) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24,	/* spare8(24) */
	23	/* spare9(23) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_DRX_GC_RetransmissionTimer_r17_specs_20 = {
	asn_MAP_NR_sl_DRX_GC_RetransmissionTimer_r17_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_DRX_GC_RetransmissionTimer_r17_enum2value_20,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_DRX_GC_RetransmissionTimer_r17_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_DRX_GC_RetransmissionTimer_r17_20 = {
	"sl-DRX-GC-RetransmissionTimer-r17",
	"sl-DRX-GC-RetransmissionTimer-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_DRX_GC_RetransmissionTimer_r17_tags_20,
	sizeof(asn_DEF_NR_sl_DRX_GC_RetransmissionTimer_r17_tags_20)
		/sizeof(asn_DEF_NR_sl_DRX_GC_RetransmissionTimer_r17_tags_20[0]) - 1, /* 1 */
	asn_DEF_NR_sl_DRX_GC_RetransmissionTimer_r17_tags_20,	/* Same as above */
	sizeof(asn_DEF_NR_sl_DRX_GC_RetransmissionTimer_r17_tags_20)
		/sizeof(asn_DEF_NR_sl_DRX_GC_RetransmissionTimer_r17_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_DRX_GC_RetransmissionTimer_r17_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_DRX_GC_RetransmissionTimer_r17_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SL_DRX_GC_Generic_r17_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_SL_DRX_GC_Generic_r17, sl_DRX_GC_HARQ_RTT_Timer1_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer1_r17_2,
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
		"sl-DRX-GC-HARQ-RTT-Timer1-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SL_DRX_GC_Generic_r17, sl_DRX_GC_HARQ_RTT_Timer2_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_DRX_GC_HARQ_RTT_Timer2_r17_11,
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
		"sl-DRX-GC-HARQ-RTT-Timer2-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_DRX_GC_Generic_r17, sl_DRX_GC_RetransmissionTimer_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_DRX_GC_RetransmissionTimer_r17_20,
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
		"sl-DRX-GC-RetransmissionTimer-r17"
		},
};
static const int asn_MAP_NR_SL_DRX_GC_Generic_r17_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_SL_DRX_GC_Generic_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_DRX_GC_Generic_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-DRX-GC-HARQ-RTT-Timer1-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-DRX-GC-HARQ-RTT-Timer2-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sl-DRX-GC-RetransmissionTimer-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_DRX_GC_Generic_r17_specs_1 = {
	sizeof(struct NR_SL_DRX_GC_Generic_r17),
	offsetof(struct NR_SL_DRX_GC_Generic_r17, _asn_ctx),
	asn_MAP_NR_SL_DRX_GC_Generic_r17_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_SL_DRX_GC_Generic_r17_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_DRX_GC_Generic_r17 = {
	"SL-DRX-GC-Generic-r17",
	"SL-DRX-GC-Generic-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_DRX_GC_Generic_r17_tags_1,
	sizeof(asn_DEF_NR_SL_DRX_GC_Generic_r17_tags_1)
		/sizeof(asn_DEF_NR_SL_DRX_GC_Generic_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_DRX_GC_Generic_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_DRX_GC_Generic_r17_tags_1)
		/sizeof(asn_DEF_NR_SL_DRX_GC_Generic_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SL_DRX_GC_Generic_r17_1,
	3,	/* Elements count */
	&asn_SPC_NR_SL_DRX_GC_Generic_r17_specs_1	/* Additional specs */
};

