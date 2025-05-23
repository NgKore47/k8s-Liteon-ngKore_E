/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_TDD-UL-DL-SlotConfig-IAB-MT-r16.h"

static int
memb_NR_nrofDownlinkSymbols_r16_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 13L)) {
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
memb_NR_nrofUplinkSymbols_r16_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 13L)) {
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
memb_NR_nrofDownlinkSymbols_r16_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 13L)) {
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
memb_NR_nrofUplinkSymbols_r16_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 13L)) {
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
static asn_per_constraints_t asn_PER_memb_NR_nrofDownlinkSymbols_r16_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  13 }	/* (1..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_nrofUplinkSymbols_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  13 }	/* (1..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_nrofDownlinkSymbols_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  13 }	/* (1..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_nrofUplinkSymbols_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  13 }	/* (1..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_symbols_IAB_MT_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_explicit_r16_6[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16__explicit_r16, nrofDownlinkSymbols_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_nrofDownlinkSymbols_r16_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_nrofDownlinkSymbols_r16_constraint_6
		},
		0, 0, /* No default value */
		"nrofDownlinkSymbols-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16__explicit_r16, nrofUplinkSymbols_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_nrofUplinkSymbols_r16_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_nrofUplinkSymbols_r16_constraint_6
		},
		0, 0, /* No default value */
		"nrofUplinkSymbols-r16"
		},
};
static const int asn_MAP_NR_explicit_r16_oms_6[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_explicit_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_explicit_r16_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrofDownlinkSymbols-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nrofUplinkSymbols-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_explicit_r16_specs_6 = {
	sizeof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16__explicit_r16),
	offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16__explicit_r16, _asn_ctx),
	asn_MAP_NR_explicit_r16_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_NR_explicit_r16_oms_6,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_explicit_r16_6 = {
	"explicit-r16",
	"explicit-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_explicit_r16_tags_6,
	sizeof(asn_DEF_NR_explicit_r16_tags_6)
		/sizeof(asn_DEF_NR_explicit_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_explicit_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_explicit_r16_tags_6)
		/sizeof(asn_DEF_NR_explicit_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_explicit_r16_6,
	2,	/* Elements count */
	&asn_SPC_NR_explicit_r16_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_explicit_IAB_MT_r16_9[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16__explicit_IAB_MT_r16, nrofDownlinkSymbols_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_nrofDownlinkSymbols_r16_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_nrofDownlinkSymbols_r16_constraint_9
		},
		0, 0, /* No default value */
		"nrofDownlinkSymbols-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16__explicit_IAB_MT_r16, nrofUplinkSymbols_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_nrofUplinkSymbols_r16_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_nrofUplinkSymbols_r16_constraint_9
		},
		0, 0, /* No default value */
		"nrofUplinkSymbols-r16"
		},
};
static const int asn_MAP_NR_explicit_IAB_MT_r16_oms_9[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_explicit_IAB_MT_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_explicit_IAB_MT_r16_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrofDownlinkSymbols-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nrofUplinkSymbols-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_explicit_IAB_MT_r16_specs_9 = {
	sizeof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16__explicit_IAB_MT_r16),
	offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16__explicit_IAB_MT_r16, _asn_ctx),
	asn_MAP_NR_explicit_IAB_MT_r16_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_NR_explicit_IAB_MT_r16_oms_9,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_explicit_IAB_MT_r16_9 = {
	"explicit-IAB-MT-r16",
	"explicit-IAB-MT-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_explicit_IAB_MT_r16_tags_9,
	sizeof(asn_DEF_NR_explicit_IAB_MT_r16_tags_9)
		/sizeof(asn_DEF_NR_explicit_IAB_MT_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_explicit_IAB_MT_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_explicit_IAB_MT_r16_tags_9)
		/sizeof(asn_DEF_NR_explicit_IAB_MT_r16_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_explicit_IAB_MT_r16_9,
	2,	/* Elements count */
	&asn_SPC_NR_explicit_IAB_MT_r16_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_symbols_IAB_MT_r16_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16, choice.allDownlink_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"allDownlink-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16, choice.allUplink_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"allUplink-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16, choice.explicit_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_explicit_r16_6,
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
		"explicit-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16, choice.explicit_IAB_MT_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_explicit_IAB_MT_r16_9,
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
		"explicit-IAB-MT-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_symbols_IAB_MT_r16_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* allDownlink-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allUplink-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* explicit-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* explicit-IAB-MT-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_symbols_IAB_MT_r16_specs_3 = {
	sizeof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16),
	offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16, _asn_ctx),
	offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16, present),
	sizeof(((struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16__symbols_IAB_MT_r16 *)0)->present),
	asn_MAP_NR_symbols_IAB_MT_r16_tag2el_3,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_symbols_IAB_MT_r16_3 = {
	"symbols-IAB-MT-r16",
	"symbols-IAB-MT-r16",
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
		&asn_PER_type_NR_symbols_IAB_MT_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_symbols_IAB_MT_r16_3,
	4,	/* Elements count */
	&asn_SPC_NR_symbols_IAB_MT_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16, slotIndex_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TDD_UL_DL_SlotIndex,
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
		"slotIndex-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16, symbols_IAB_MT_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_symbols_IAB_MT_r16_3,
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
		"symbols-IAB-MT-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* slotIndex-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* symbols-IAB-MT-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_specs_1 = {
	sizeof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16),
	offsetof(struct NR_TDD_UL_DL_SlotConfig_IAB_MT_r16, _asn_ctx),
	asn_MAP_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16 = {
	"TDD-UL-DL-SlotConfig-IAB-MT-r16",
	"TDD-UL-DL-SlotConfig-IAB-MT-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_tags_1,
	sizeof(asn_DEF_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_tags_1)
		/sizeof(asn_DEF_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_tags_1)
		/sizeof(asn_DEF_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_TDD_UL_DL_SlotConfig_IAB_MT_r16_specs_1	/* Additional specs */
};

