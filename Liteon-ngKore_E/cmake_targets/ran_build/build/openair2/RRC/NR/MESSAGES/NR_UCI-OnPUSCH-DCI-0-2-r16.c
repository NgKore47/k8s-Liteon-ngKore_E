/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_UCI-OnPUSCH-DCI-0-2-r16.h"

static int
memb_NR_oneBit_r16_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_twoBits_r16_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
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
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_oneBit_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_twoBits_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_oneBit_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_twoBits_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_dynamicDCI_0_2_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_betaOffsetsDCI_0_2_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_scalingDCI_0_2_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_oneBit_r16_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_BetaOffsets,
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
static const ber_tlv_tag_t asn_DEF_NR_oneBit_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_oneBit_r16_specs_4 = {
	sizeof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16__oneBit_r16),
	offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16__oneBit_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_oneBit_r16_4 = {
	"oneBit-r16",
	"oneBit-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_oneBit_r16_tags_4,
	sizeof(asn_DEF_NR_oneBit_r16_tags_4)
		/sizeof(asn_DEF_NR_oneBit_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_oneBit_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_oneBit_r16_tags_4)
		/sizeof(asn_DEF_NR_oneBit_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_oneBit_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_oneBit_r16_4,
	1,	/* Single element */
	&asn_SPC_NR_oneBit_r16_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_twoBits_r16_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_BetaOffsets,
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
static const ber_tlv_tag_t asn_DEF_NR_twoBits_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_twoBits_r16_specs_6 = {
	sizeof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16__twoBits_r16),
	offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16__twoBits_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_twoBits_r16_6 = {
	"twoBits-r16",
	"twoBits-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_twoBits_r16_tags_6,
	sizeof(asn_DEF_NR_twoBits_r16_tags_6)
		/sizeof(asn_DEF_NR_twoBits_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_twoBits_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_twoBits_r16_tags_6)
		/sizeof(asn_DEF_NR_twoBits_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_twoBits_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_twoBits_r16_6,
	1,	/* Single element */
	&asn_SPC_NR_twoBits_r16_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_dynamicDCI_0_2_r16_3[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16, choice.oneBit_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_oneBit_r16_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_oneBit_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_oneBit_r16_constraint_3
		},
		0, 0, /* No default value */
		"oneBit-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16, choice.twoBits_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_twoBits_r16_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_twoBits_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_twoBits_r16_constraint_3
		},
		0, 0, /* No default value */
		"twoBits-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_dynamicDCI_0_2_r16_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* oneBit-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* twoBits-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_dynamicDCI_0_2_r16_specs_3 = {
	sizeof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16),
	offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16, _asn_ctx),
	offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16, present),
	sizeof(((struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16__dynamicDCI_0_2_r16 *)0)->present),
	asn_MAP_NR_dynamicDCI_0_2_r16_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_dynamicDCI_0_2_r16_3 = {
	"dynamicDCI-0-2-r16",
	"dynamicDCI-0-2-r16",
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
		&asn_PER_type_NR_dynamicDCI_0_2_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_dynamicDCI_0_2_r16_3,
	2,	/* Elements count */
	&asn_SPC_NR_dynamicDCI_0_2_r16_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_betaOffsetsDCI_0_2_r16_2[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16, choice.dynamicDCI_0_2_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_dynamicDCI_0_2_r16_3,
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
		"dynamicDCI-0-2-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16, choice.semiStaticDCI_0_2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BetaOffsets,
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
		"semiStaticDCI-0-2-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_betaOffsetsDCI_0_2_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dynamicDCI-0-2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* semiStaticDCI-0-2-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_betaOffsetsDCI_0_2_r16_specs_2 = {
	sizeof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16),
	offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16, _asn_ctx),
	offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16, present),
	sizeof(((struct NR_UCI_OnPUSCH_DCI_0_2_r16__betaOffsetsDCI_0_2_r16 *)0)->present),
	asn_MAP_NR_betaOffsetsDCI_0_2_r16_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_betaOffsetsDCI_0_2_r16_2 = {
	"betaOffsetsDCI-0-2-r16",
	"betaOffsetsDCI-0-2-r16",
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
		&asn_PER_type_NR_betaOffsetsDCI_0_2_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_betaOffsetsDCI_0_2_r16_2,
	2,	/* Elements count */
	&asn_SPC_NR_betaOffsetsDCI_0_2_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_scalingDCI_0_2_r16_value2enum_9[] = {
	{ 0,	4,	"f0p5" },
	{ 1,	5,	"f0p65" },
	{ 2,	4,	"f0p8" },
	{ 3,	2,	"f1" }
};
static const unsigned int asn_MAP_NR_scalingDCI_0_2_r16_enum2value_9[] = {
	0,	/* f0p5(0) */
	1,	/* f0p65(1) */
	2,	/* f0p8(2) */
	3	/* f1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_scalingDCI_0_2_r16_specs_9 = {
	asn_MAP_NR_scalingDCI_0_2_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_scalingDCI_0_2_r16_enum2value_9,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_scalingDCI_0_2_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_scalingDCI_0_2_r16_9 = {
	"scalingDCI-0-2-r16",
	"scalingDCI-0-2-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_scalingDCI_0_2_r16_tags_9,
	sizeof(asn_DEF_NR_scalingDCI_0_2_r16_tags_9)
		/sizeof(asn_DEF_NR_scalingDCI_0_2_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_scalingDCI_0_2_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_scalingDCI_0_2_r16_tags_9)
		/sizeof(asn_DEF_NR_scalingDCI_0_2_r16_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_scalingDCI_0_2_r16_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_scalingDCI_0_2_r16_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_UCI_OnPUSCH_DCI_0_2_r16_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16, betaOffsetsDCI_0_2_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_betaOffsetsDCI_0_2_r16_2,
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
		"betaOffsetsDCI-0-2-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16, scalingDCI_0_2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_scalingDCI_0_2_r16_9,
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
		"scalingDCI-0-2-r16"
		},
};
static const int asn_MAP_NR_UCI_OnPUSCH_DCI_0_2_r16_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_UCI_OnPUSCH_DCI_0_2_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UCI_OnPUSCH_DCI_0_2_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* betaOffsetsDCI-0-2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* scalingDCI-0-2-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_UCI_OnPUSCH_DCI_0_2_r16_specs_1 = {
	sizeof(struct NR_UCI_OnPUSCH_DCI_0_2_r16),
	offsetof(struct NR_UCI_OnPUSCH_DCI_0_2_r16, _asn_ctx),
	asn_MAP_NR_UCI_OnPUSCH_DCI_0_2_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_UCI_OnPUSCH_DCI_0_2_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_UCI_OnPUSCH_DCI_0_2_r16 = {
	"UCI-OnPUSCH-DCI-0-2-r16",
	"UCI-OnPUSCH-DCI-0-2-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_UCI_OnPUSCH_DCI_0_2_r16_tags_1,
	sizeof(asn_DEF_NR_UCI_OnPUSCH_DCI_0_2_r16_tags_1)
		/sizeof(asn_DEF_NR_UCI_OnPUSCH_DCI_0_2_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_UCI_OnPUSCH_DCI_0_2_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_UCI_OnPUSCH_DCI_0_2_r16_tags_1)
		/sizeof(asn_DEF_NR_UCI_OnPUSCH_DCI_0_2_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_UCI_OnPUSCH_DCI_0_2_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_UCI_OnPUSCH_DCI_0_2_r16_specs_1	/* Additional specs */
};

