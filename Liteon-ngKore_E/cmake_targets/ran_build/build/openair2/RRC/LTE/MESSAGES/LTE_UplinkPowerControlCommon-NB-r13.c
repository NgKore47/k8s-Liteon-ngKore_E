/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_UplinkPowerControlCommon-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_p0_NominalNPUSCH_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126L && value <= 24L)) {
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
memb_LTE_deltaPreambleMsg3_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1L && value <= 6L)) {
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
static asn_per_constraints_t asn_PER_type_LTE_alpha_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_p0_NominalNPUSCH_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_deltaPreambleMsg3_r13_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -1,  6 }	/* (-1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_alpha_r13_value2enum_3[] = {
	{ 0,	3,	"al0" },
	{ 1,	4,	"al04" },
	{ 2,	4,	"al05" },
	{ 3,	4,	"al06" },
	{ 4,	4,	"al07" },
	{ 5,	4,	"al08" },
	{ 6,	4,	"al09" },
	{ 7,	3,	"al1" }
};
static const unsigned int asn_MAP_LTE_alpha_r13_enum2value_3[] = {
	0,	/* al0(0) */
	1,	/* al04(1) */
	2,	/* al05(2) */
	3,	/* al06(3) */
	4,	/* al07(4) */
	5,	/* al08(5) */
	6,	/* al09(6) */
	7	/* al1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_alpha_r13_specs_3 = {
	asn_MAP_LTE_alpha_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_alpha_r13_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_alpha_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_alpha_r13_3 = {
	"alpha-r13",
	"alpha-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_alpha_r13_tags_3,
	sizeof(asn_DEF_LTE_alpha_r13_tags_3)
		/sizeof(asn_DEF_LTE_alpha_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_alpha_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_alpha_r13_tags_3)
		/sizeof(asn_DEF_LTE_alpha_r13_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_alpha_r13_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_alpha_r13_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UplinkPowerControlCommon_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UplinkPowerControlCommon_NB_r13, p0_NominalNPUSCH_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_p0_NominalNPUSCH_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_p0_NominalNPUSCH_r13_constraint_1
		},
		0, 0, /* No default value */
		"p0-NominalNPUSCH-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UplinkPowerControlCommon_NB_r13, alpha_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_alpha_r13_3,
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
		"alpha-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UplinkPowerControlCommon_NB_r13, deltaPreambleMsg3_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_deltaPreambleMsg3_r13_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_deltaPreambleMsg3_r13_constraint_1
		},
		0, 0, /* No default value */
		"deltaPreambleMsg3-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_UplinkPowerControlCommon_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UplinkPowerControlCommon_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-NominalNPUSCH-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* alpha-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* deltaPreambleMsg3-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UplinkPowerControlCommon_NB_r13_specs_1 = {
	sizeof(struct LTE_UplinkPowerControlCommon_NB_r13),
	offsetof(struct LTE_UplinkPowerControlCommon_NB_r13, _asn_ctx),
	asn_MAP_LTE_UplinkPowerControlCommon_NB_r13_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UplinkPowerControlCommon_NB_r13 = {
	"UplinkPowerControlCommon-NB-r13",
	"UplinkPowerControlCommon-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UplinkPowerControlCommon_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_UplinkPowerControlCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_UplinkPowerControlCommon_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_UplinkPowerControlCommon_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UplinkPowerControlCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_UplinkPowerControlCommon_NB_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_UplinkPowerControlCommon_NB_r13_1,
	3,	/* Elements count */
	&asn_SPC_LTE_UplinkPowerControlCommon_NB_r13_specs_1	/* Additional specs */
};

