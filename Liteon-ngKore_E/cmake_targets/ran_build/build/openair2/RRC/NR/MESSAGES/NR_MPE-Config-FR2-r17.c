/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_MPE-Config-FR2-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_numberOfN_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 4L)) {
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
static asn_per_constraints_t asn_PER_type_NR_mpe_ProhibitTimer_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_mpe_Threshold_r17_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_numberOfN_r17_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_mpe_ProhibitTimer_r17_value2enum_2[] = {
	{ 0,	3,	"sf0" },
	{ 1,	4,	"sf10" },
	{ 2,	4,	"sf20" },
	{ 3,	4,	"sf50" },
	{ 4,	5,	"sf100" },
	{ 5,	5,	"sf200" },
	{ 6,	5,	"sf500" },
	{ 7,	6,	"sf1000" }
};
static const unsigned int asn_MAP_NR_mpe_ProhibitTimer_r17_enum2value_2[] = {
	0,	/* sf0(0) */
	1,	/* sf10(1) */
	4,	/* sf100(4) */
	7,	/* sf1000(7) */
	2,	/* sf20(2) */
	5,	/* sf200(5) */
	3,	/* sf50(3) */
	6	/* sf500(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_mpe_ProhibitTimer_r17_specs_2 = {
	asn_MAP_NR_mpe_ProhibitTimer_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_mpe_ProhibitTimer_r17_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_mpe_ProhibitTimer_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mpe_ProhibitTimer_r17_2 = {
	"mpe-ProhibitTimer-r17",
	"mpe-ProhibitTimer-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_mpe_ProhibitTimer_r17_tags_2,
	sizeof(asn_DEF_NR_mpe_ProhibitTimer_r17_tags_2)
		/sizeof(asn_DEF_NR_mpe_ProhibitTimer_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_mpe_ProhibitTimer_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_mpe_ProhibitTimer_r17_tags_2)
		/sizeof(asn_DEF_NR_mpe_ProhibitTimer_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_mpe_ProhibitTimer_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_mpe_ProhibitTimer_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_mpe_Threshold_r17_value2enum_11[] = {
	{ 0,	3,	"dB3" },
	{ 1,	3,	"dB6" },
	{ 2,	3,	"dB9" },
	{ 3,	4,	"dB12" }
};
static const unsigned int asn_MAP_NR_mpe_Threshold_r17_enum2value_11[] = {
	3,	/* dB12(3) */
	0,	/* dB3(0) */
	1,	/* dB6(1) */
	2	/* dB9(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_mpe_Threshold_r17_specs_11 = {
	asn_MAP_NR_mpe_Threshold_r17_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_mpe_Threshold_r17_enum2value_11,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_mpe_Threshold_r17_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mpe_Threshold_r17_11 = {
	"mpe-Threshold-r17",
	"mpe-Threshold-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_mpe_Threshold_r17_tags_11,
	sizeof(asn_DEF_NR_mpe_Threshold_r17_tags_11)
		/sizeof(asn_DEF_NR_mpe_Threshold_r17_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_mpe_Threshold_r17_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_mpe_Threshold_r17_tags_11)
		/sizeof(asn_DEF_NR_mpe_Threshold_r17_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_mpe_Threshold_r17_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_mpe_Threshold_r17_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_MPE_Config_FR2_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MPE_Config_FR2_r17, mpe_ProhibitTimer_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_mpe_ProhibitTimer_r17_2,
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
		"mpe-ProhibitTimer-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MPE_Config_FR2_r17, mpe_Threshold_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_mpe_Threshold_r17_11,
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
		"mpe-Threshold-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MPE_Config_FR2_r17, numberOfN_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_numberOfN_r17_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_numberOfN_r17_constraint_1
		},
		0, 0, /* No default value */
		"numberOfN-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_MPE_Config_FR2_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MPE_Config_FR2_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mpe-ProhibitTimer-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mpe-Threshold-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* numberOfN-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MPE_Config_FR2_r17_specs_1 = {
	sizeof(struct NR_MPE_Config_FR2_r17),
	offsetof(struct NR_MPE_Config_FR2_r17, _asn_ctx),
	asn_MAP_NR_MPE_Config_FR2_r17_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MPE_Config_FR2_r17 = {
	"MPE-Config-FR2-r17",
	"MPE-Config-FR2-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MPE_Config_FR2_r17_tags_1,
	sizeof(asn_DEF_NR_MPE_Config_FR2_r17_tags_1)
		/sizeof(asn_DEF_NR_MPE_Config_FR2_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_MPE_Config_FR2_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MPE_Config_FR2_r17_tags_1)
		/sizeof(asn_DEF_NR_MPE_Config_FR2_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_MPE_Config_FR2_r17_1,
	3,	/* Elements count */
	&asn_SPC_NR_MPE_Config_FR2_r17_specs_1	/* Additional specs */
};

