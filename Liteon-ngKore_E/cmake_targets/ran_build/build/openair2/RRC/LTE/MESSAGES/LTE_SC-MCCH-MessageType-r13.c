/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SC-MCCH-MessageType-r13.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_c1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_c2_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_messageClassExtension_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LTE_SC_MCCH_MessageType_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_c1_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_MessageType_r13__c1, choice.scptmConfiguration_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCPTMConfiguration_r13,
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
		"scptmConfiguration-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_c1_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* scptmConfiguration-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_c1_specs_2 = {
	sizeof(struct LTE_SC_MCCH_MessageType_r13__c1),
	offsetof(struct LTE_SC_MCCH_MessageType_r13__c1, _asn_ctx),
	offsetof(struct LTE_SC_MCCH_MessageType_r13__c1, present),
	sizeof(((struct LTE_SC_MCCH_MessageType_r13__c1 *)0)->present),
	asn_MAP_LTE_c1_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_c1_2 = {
	"c1",
	"c1",
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
		&asn_PER_type_LTE_c1_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_c1_2,
	1,	/* Elements count */
	&asn_SPC_LTE_c1_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_c2_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2, choice.scptmConfiguration_BR_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCPTMConfiguration_BR_r14,
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
		"scptmConfiguration-BR-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2, choice.spare),
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
		"spare"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_c2_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scptmConfiguration-BR-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* spare */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_c2_specs_5 = {
	sizeof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2),
	offsetof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2, _asn_ctx),
	offsetof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2, present),
	sizeof(((struct LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2 *)0)->present),
	asn_MAP_LTE_c2_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_c2_5 = {
	"c2",
	"c2",
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
		&asn_PER_type_LTE_c2_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_c2_5,
	2,	/* Elements count */
	&asn_SPC_LTE_c2_specs_5	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_messageClassExtensionFuture_r14_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_messageClassExtensionFuture_r14_specs_8 = {
	sizeof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension__messageClassExtensionFuture_r14),
	offsetof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension__messageClassExtensionFuture_r14, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_messageClassExtensionFuture_r14_8 = {
	"messageClassExtensionFuture-r14",
	"messageClassExtensionFuture-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_messageClassExtensionFuture_r14_tags_8,
	sizeof(asn_DEF_LTE_messageClassExtensionFuture_r14_tags_8)
		/sizeof(asn_DEF_LTE_messageClassExtensionFuture_r14_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_messageClassExtensionFuture_r14_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_messageClassExtensionFuture_r14_tags_8)
		/sizeof(asn_DEF_LTE_messageClassExtensionFuture_r14_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_LTE_messageClassExtensionFuture_r14_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_messageClassExtension_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension, choice.c2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_c2_5,
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
		"c2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension, choice.messageClassExtensionFuture_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_messageClassExtensionFuture_r14_8,
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
		"messageClassExtensionFuture-r14"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_messageClassExtension_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtensionFuture-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_messageClassExtension_specs_4 = {
	sizeof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension),
	offsetof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension, _asn_ctx),
	offsetof(struct LTE_SC_MCCH_MessageType_r13__messageClassExtension, present),
	sizeof(((struct LTE_SC_MCCH_MessageType_r13__messageClassExtension *)0)->present),
	asn_MAP_LTE_messageClassExtension_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_messageClassExtension_4 = {
	"messageClassExtension",
	"messageClassExtension",
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
		&asn_PER_type_LTE_messageClassExtension_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_messageClassExtension_4,
	2,	/* Elements count */
	&asn_SPC_LTE_messageClassExtension_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SC_MCCH_MessageType_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_MessageType_r13, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_c1_2,
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
		"c1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_MessageType_r13, choice.messageClassExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_messageClassExtension_4,
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
		"messageClassExtension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SC_MCCH_MessageType_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtension */
};
asn_CHOICE_specifics_t asn_SPC_LTE_SC_MCCH_MessageType_r13_specs_1 = {
	sizeof(struct LTE_SC_MCCH_MessageType_r13),
	offsetof(struct LTE_SC_MCCH_MessageType_r13, _asn_ctx),
	offsetof(struct LTE_SC_MCCH_MessageType_r13, present),
	sizeof(((struct LTE_SC_MCCH_MessageType_r13 *)0)->present),
	asn_MAP_LTE_SC_MCCH_MessageType_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SC_MCCH_MessageType_r13 = {
	"SC-MCCH-MessageType-r13",
	"SC-MCCH-MessageType-r13",
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
		&asn_PER_type_LTE_SC_MCCH_MessageType_r13_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_SC_MCCH_MessageType_r13_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SC_MCCH_MessageType_r13_specs_1	/* Additional specs */
};

