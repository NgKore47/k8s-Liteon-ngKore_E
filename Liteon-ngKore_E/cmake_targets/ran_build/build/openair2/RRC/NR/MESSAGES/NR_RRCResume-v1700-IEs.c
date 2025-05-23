/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_RRCResume-v1700-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_scg_State_r17_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_scg_State_r17_value2enum_6[] = {
	{ 0,	11,	"deactivated" }
};
static const unsigned int asn_MAP_NR_scg_State_r17_enum2value_6[] = {
	0	/* deactivated(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_scg_State_r17_specs_6 = {
	asn_MAP_NR_scg_State_r17_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_scg_State_r17_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_scg_State_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_scg_State_r17_6 = {
	"scg-State-r17",
	"scg-State-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_scg_State_r17_tags_6,
	sizeof(asn_DEF_NR_scg_State_r17_tags_6)
		/sizeof(asn_DEF_NR_scg_State_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_scg_State_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_scg_State_r17_tags_6)
		/sizeof(asn_DEF_NR_scg_State_r17_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_scg_State_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_scg_State_r17_specs_6	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NR_nonCriticalExtension_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nonCriticalExtension_specs_9 = {
	sizeof(struct NR_RRCResume_v1700_IEs__nonCriticalExtension),
	offsetof(struct NR_RRCResume_v1700_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nonCriticalExtension_9 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nonCriticalExtension_tags_9,
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_9)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_nonCriticalExtension_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_9)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_9[0]), /* 2 */
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
	&asn_SPC_NR_nonCriticalExtension_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_RRCResume_v1700_IEs_1[] = {
	{ ATF_POINTER, 7, offsetof(struct NR_RRCResume_v1700_IEs, sl_ConfigDedicatedNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_SL_ConfigDedicatedNR_r16,
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
		"sl-ConfigDedicatedNR-r17"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_RRCResume_v1700_IEs, sl_L2RemoteUE_Config_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_SL_L2RemoteUE_Config_r17,
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
		"sl-L2RemoteUE-Config-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_RRCResume_v1700_IEs, needForGapNCSG_ConfigNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_NeedForGapNCSG_ConfigNR_r17,
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
		"needForGapNCSG-ConfigNR-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_RRCResume_v1700_IEs, needForGapNCSG_ConfigEUTRA_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17,
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
		"needForGapNCSG-ConfigEUTRA-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_RRCResume_v1700_IEs, scg_State_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_scg_State_r17_6,
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
		"scg-State-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RRCResume_v1700_IEs, appLayerMeasConfig_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_AppLayerMeasConfig_r17,
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
		"appLayerMeasConfig-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RRCResume_v1700_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_NR_nonCriticalExtension_9,
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
static const int asn_MAP_NR_RRCResume_v1700_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_NR_RRCResume_v1700_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RRCResume_v1700_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-ConfigDedicatedNR-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-L2RemoteUE-Config-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* needForGapNCSG-ConfigNR-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* needForGapNCSG-ConfigEUTRA-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* scg-State-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* appLayerMeasConfig-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RRCResume_v1700_IEs_specs_1 = {
	sizeof(struct NR_RRCResume_v1700_IEs),
	offsetof(struct NR_RRCResume_v1700_IEs, _asn_ctx),
	asn_MAP_NR_RRCResume_v1700_IEs_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_NR_RRCResume_v1700_IEs_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RRCResume_v1700_IEs = {
	"RRCResume-v1700-IEs",
	"RRCResume-v1700-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RRCResume_v1700_IEs_tags_1,
	sizeof(asn_DEF_NR_RRCResume_v1700_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCResume_v1700_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_RRCResume_v1700_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RRCResume_v1700_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCResume_v1700_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_RRCResume_v1700_IEs_1,
	7,	/* Elements count */
	&asn_SPC_NR_RRCResume_v1700_IEs_specs_1	/* Additional specs */
};

