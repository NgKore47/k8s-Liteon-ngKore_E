/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SystemInformation.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_criticalExtensionsFuture_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_criticalExtensions_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_LTE_criticalExtensionsFuture_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_criticalExtensionsFuture_specs_6 = {
	sizeof(struct LTE_SystemInformation__criticalExtensions__criticalExtensionsFuture_r15__criticalExtensionsFuture),
	offsetof(struct LTE_SystemInformation__criticalExtensions__criticalExtensionsFuture_r15__criticalExtensionsFuture, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_criticalExtensionsFuture_6 = {
	"criticalExtensionsFuture",
	"criticalExtensionsFuture",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_criticalExtensionsFuture_tags_6,
	sizeof(asn_DEF_LTE_criticalExtensionsFuture_tags_6)
		/sizeof(asn_DEF_LTE_criticalExtensionsFuture_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_criticalExtensionsFuture_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_criticalExtensionsFuture_tags_6)
		/sizeof(asn_DEF_LTE_criticalExtensionsFuture_tags_6[0]), /* 2 */
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
	&asn_SPC_LTE_criticalExtensionsFuture_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_criticalExtensionsFuture_r15_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformation__criticalExtensions__criticalExtensionsFuture_r15, choice.posSystemInformation_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PosSystemInformation_r15_IEs,
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
		"posSystemInformation-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformation__criticalExtensions__criticalExtensionsFuture_r15, choice.criticalExtensionsFuture),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_criticalExtensionsFuture_6,
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
		"criticalExtensionsFuture"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_criticalExtensionsFuture_r15_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* posSystemInformation-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensionsFuture */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_criticalExtensionsFuture_r15_specs_4 = {
	sizeof(struct LTE_SystemInformation__criticalExtensions__criticalExtensionsFuture_r15),
	offsetof(struct LTE_SystemInformation__criticalExtensions__criticalExtensionsFuture_r15, _asn_ctx),
	offsetof(struct LTE_SystemInformation__criticalExtensions__criticalExtensionsFuture_r15, present),
	sizeof(((struct LTE_SystemInformation__criticalExtensions__criticalExtensionsFuture_r15 *)0)->present),
	asn_MAP_LTE_criticalExtensionsFuture_r15_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_criticalExtensionsFuture_r15_4 = {
	"criticalExtensionsFuture-r15",
	"criticalExtensionsFuture-r15",
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
		&asn_PER_type_LTE_criticalExtensionsFuture_r15_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_criticalExtensionsFuture_r15_4,
	2,	/* Elements count */
	&asn_SPC_LTE_criticalExtensionsFuture_r15_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_criticalExtensions_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformation__criticalExtensions, choice.systemInformation_r8),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SystemInformation_r8_IEs,
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
		"systemInformation-r8"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformation__criticalExtensions, choice.criticalExtensionsFuture_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_criticalExtensionsFuture_r15_4,
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
		"criticalExtensionsFuture-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_criticalExtensions_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemInformation-r8 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensionsFuture-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_criticalExtensions_specs_2 = {
	sizeof(struct LTE_SystemInformation__criticalExtensions),
	offsetof(struct LTE_SystemInformation__criticalExtensions, _asn_ctx),
	offsetof(struct LTE_SystemInformation__criticalExtensions, present),
	sizeof(((struct LTE_SystemInformation__criticalExtensions *)0)->present),
	asn_MAP_LTE_criticalExtensions_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_criticalExtensions_2 = {
	"criticalExtensions",
	"criticalExtensions",
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
		&asn_PER_type_LTE_criticalExtensions_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_criticalExtensions_2,
	2,	/* Elements count */
	&asn_SPC_LTE_criticalExtensions_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SystemInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformation, criticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_criticalExtensions_2,
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
		"criticalExtensions"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* criticalExtensions */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformation_specs_1 = {
	sizeof(struct LTE_SystemInformation),
	offsetof(struct LTE_SystemInformation, _asn_ctx),
	asn_MAP_LTE_SystemInformation_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformation = {
	"SystemInformation",
	"SystemInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformation_tags_1,
	sizeof(asn_DEF_LTE_SystemInformation_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformation_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformation_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformation_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SystemInformation_1,
	1,	/* Elements count */
	&asn_SPC_LTE_SystemInformation_specs_1	/* Additional specs */
};

