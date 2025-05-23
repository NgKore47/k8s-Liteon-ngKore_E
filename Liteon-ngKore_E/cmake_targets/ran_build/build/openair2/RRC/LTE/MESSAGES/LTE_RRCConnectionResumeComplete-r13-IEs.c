/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_RRCConnectionResumeComplete-r13-IEs.h"

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
static int
memb_LTE_selectedPLMN_Identity_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 6L)) {
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
static asn_per_constraints_t asn_PER_type_LTE_rlf_InfoAvailable_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_logMeasAvailable_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_connEstFailInfoAvailable_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_mobilityState_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_mobilityHistoryAvail_r13_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_logMeasAvailableMBSFN_r13_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_selectedPLMN_Identity_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_rlf_InfoAvailable_r13_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_rlf_InfoAvailable_r13_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_rlf_InfoAvailable_r13_specs_4 = {
	asn_MAP_LTE_rlf_InfoAvailable_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_rlf_InfoAvailable_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_rlf_InfoAvailable_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rlf_InfoAvailable_r13_4 = {
	"rlf-InfoAvailable-r13",
	"rlf-InfoAvailable-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_rlf_InfoAvailable_r13_tags_4,
	sizeof(asn_DEF_LTE_rlf_InfoAvailable_r13_tags_4)
		/sizeof(asn_DEF_LTE_rlf_InfoAvailable_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_rlf_InfoAvailable_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_rlf_InfoAvailable_r13_tags_4)
		/sizeof(asn_DEF_LTE_rlf_InfoAvailable_r13_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_rlf_InfoAvailable_r13_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_rlf_InfoAvailable_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_logMeasAvailable_r13_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_logMeasAvailable_r13_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_logMeasAvailable_r13_specs_6 = {
	asn_MAP_LTE_logMeasAvailable_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_logMeasAvailable_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_logMeasAvailable_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_logMeasAvailable_r13_6 = {
	"logMeasAvailable-r13",
	"logMeasAvailable-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_logMeasAvailable_r13_tags_6,
	sizeof(asn_DEF_LTE_logMeasAvailable_r13_tags_6)
		/sizeof(asn_DEF_LTE_logMeasAvailable_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_logMeasAvailable_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_logMeasAvailable_r13_tags_6)
		/sizeof(asn_DEF_LTE_logMeasAvailable_r13_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_logMeasAvailable_r13_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_logMeasAvailable_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_connEstFailInfoAvailable_r13_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_connEstFailInfoAvailable_r13_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_connEstFailInfoAvailable_r13_specs_8 = {
	asn_MAP_LTE_connEstFailInfoAvailable_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_connEstFailInfoAvailable_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_connEstFailInfoAvailable_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_connEstFailInfoAvailable_r13_8 = {
	"connEstFailInfoAvailable-r13",
	"connEstFailInfoAvailable-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_connEstFailInfoAvailable_r13_tags_8,
	sizeof(asn_DEF_LTE_connEstFailInfoAvailable_r13_tags_8)
		/sizeof(asn_DEF_LTE_connEstFailInfoAvailable_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_connEstFailInfoAvailable_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_connEstFailInfoAvailable_r13_tags_8)
		/sizeof(asn_DEF_LTE_connEstFailInfoAvailable_r13_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_connEstFailInfoAvailable_r13_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_connEstFailInfoAvailable_r13_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_mobilityState_r13_value2enum_10[] = {
	{ 0,	6,	"normal" },
	{ 1,	6,	"medium" },
	{ 2,	4,	"high" },
	{ 3,	5,	"spare" }
};
static const unsigned int asn_MAP_LTE_mobilityState_r13_enum2value_10[] = {
	2,	/* high(2) */
	1,	/* medium(1) */
	0,	/* normal(0) */
	3	/* spare(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mobilityState_r13_specs_10 = {
	asn_MAP_LTE_mobilityState_r13_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mobilityState_r13_enum2value_10,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mobilityState_r13_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mobilityState_r13_10 = {
	"mobilityState-r13",
	"mobilityState-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mobilityState_r13_tags_10,
	sizeof(asn_DEF_LTE_mobilityState_r13_tags_10)
		/sizeof(asn_DEF_LTE_mobilityState_r13_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_mobilityState_r13_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_mobilityState_r13_tags_10)
		/sizeof(asn_DEF_LTE_mobilityState_r13_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_mobilityState_r13_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mobilityState_r13_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_mobilityHistoryAvail_r13_value2enum_15[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_mobilityHistoryAvail_r13_enum2value_15[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mobilityHistoryAvail_r13_specs_15 = {
	asn_MAP_LTE_mobilityHistoryAvail_r13_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mobilityHistoryAvail_r13_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mobilityHistoryAvail_r13_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mobilityHistoryAvail_r13_15 = {
	"mobilityHistoryAvail-r13",
	"mobilityHistoryAvail-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mobilityHistoryAvail_r13_tags_15,
	sizeof(asn_DEF_LTE_mobilityHistoryAvail_r13_tags_15)
		/sizeof(asn_DEF_LTE_mobilityHistoryAvail_r13_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_mobilityHistoryAvail_r13_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_mobilityHistoryAvail_r13_tags_15)
		/sizeof(asn_DEF_LTE_mobilityHistoryAvail_r13_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_mobilityHistoryAvail_r13_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mobilityHistoryAvail_r13_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_logMeasAvailableMBSFN_r13_value2enum_17[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_logMeasAvailableMBSFN_r13_enum2value_17[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_logMeasAvailableMBSFN_r13_specs_17 = {
	asn_MAP_LTE_logMeasAvailableMBSFN_r13_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_logMeasAvailableMBSFN_r13_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_logMeasAvailableMBSFN_r13_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_logMeasAvailableMBSFN_r13_17 = {
	"logMeasAvailableMBSFN-r13",
	"logMeasAvailableMBSFN-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_logMeasAvailableMBSFN_r13_tags_17,
	sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r13_tags_17)
		/sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r13_tags_17[0]) - 1, /* 1 */
	asn_DEF_LTE_logMeasAvailableMBSFN_r13_tags_17,	/* Same as above */
	sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r13_tags_17)
		/sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r13_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_logMeasAvailableMBSFN_r13_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_logMeasAvailableMBSFN_r13_specs_17	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionResumeComplete_r13_IEs_1[] = {
	{ ATF_POINTER, 10, offsetof(struct LTE_RRCConnectionResumeComplete_r13_IEs, selectedPLMN_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_selectedPLMN_Identity_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_selectedPLMN_Identity_r13_constraint_1
		},
		0, 0, /* No default value */
		"selectedPLMN-Identity-r13"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_RRCConnectionResumeComplete_r13_IEs, dedicatedInfoNAS_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DedicatedInfoNAS,
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
		"dedicatedInfoNAS-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_RRCConnectionResumeComplete_r13_IEs, rlf_InfoAvailable_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_rlf_InfoAvailable_r13_4,
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
		"rlf-InfoAvailable-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_RRCConnectionResumeComplete_r13_IEs, logMeasAvailable_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_logMeasAvailable_r13_6,
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
		"logMeasAvailable-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_RRCConnectionResumeComplete_r13_IEs, connEstFailInfoAvailable_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_connEstFailInfoAvailable_r13_8,
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
		"connEstFailInfoAvailable-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_RRCConnectionResumeComplete_r13_IEs, mobilityState_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mobilityState_r13_10,
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
		"mobilityState-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_RRCConnectionResumeComplete_r13_IEs, mobilityHistoryAvail_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mobilityHistoryAvail_r13_15,
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
		"mobilityHistoryAvail-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RRCConnectionResumeComplete_r13_IEs, logMeasAvailableMBSFN_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_logMeasAvailableMBSFN_r13_17,
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
		"logMeasAvailableMBSFN-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionResumeComplete_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionResumeComplete_r13_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionResumeComplete_v1530_IEs,
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
static const int asn_MAP_LTE_RRCConnectionResumeComplete_r13_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionResumeComplete_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionResumeComplete_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* selectedPLMN-Identity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dedicatedInfoNAS-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rlf-InfoAvailable-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* logMeasAvailable-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* connEstFailInfoAvailable-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* mobilityState-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* mobilityHistoryAvail-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* logMeasAvailableMBSFN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionResumeComplete_r13_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionResumeComplete_r13_IEs),
	offsetof(struct LTE_RRCConnectionResumeComplete_r13_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionResumeComplete_r13_IEs_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionResumeComplete_r13_IEs_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionResumeComplete_r13_IEs = {
	"RRCConnectionResumeComplete-r13-IEs",
	"RRCConnectionResumeComplete-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionResumeComplete_r13_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionResumeComplete_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionResumeComplete_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionResumeComplete_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionResumeComplete_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionResumeComplete_r13_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_RRCConnectionResumeComplete_r13_IEs_1,
	10,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionResumeComplete_r13_IEs_specs_1	/* Additional specs */
};

