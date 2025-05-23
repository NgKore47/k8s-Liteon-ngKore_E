/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_A-GNSS-ProvideAssistanceData.h"

#include "LPP_GNSS-CommonAssistData.h"
#include "LPP_GNSS-GenericAssistData.h"
#include "LPP_A-GNSS-Error.h"
#include "LPP_GNSS-PeriodicAssistData-r15.h"
static asn_TYPE_member_t asn_MBR_LPP_ext1_6[] = {
	{ ATF_POINTER, 1, offsetof(struct LPP_A_GNSS_ProvideAssistanceData__ext1, gnss_PeriodicAssistData_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_PeriodicAssistData_r15,
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
		"gnss-PeriodicAssistData-r15"
		},
};
static const int asn_MAP_LPP_ext1_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LPP_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gnss-PeriodicAssistData-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ext1_specs_6 = {
	sizeof(struct LPP_A_GNSS_ProvideAssistanceData__ext1),
	offsetof(struct LPP_A_GNSS_ProvideAssistanceData__ext1, _asn_ctx),
	asn_MAP_LPP_ext1_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_LPP_ext1_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ext1_tags_6,
	sizeof(asn_DEF_LPP_ext1_tags_6)
		/sizeof(asn_DEF_LPP_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_LPP_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_LPP_ext1_tags_6)
		/sizeof(asn_DEF_LPP_ext1_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_ext1_6,
	1,	/* Elements count */
	&asn_SPC_LPP_ext1_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_A_GNSS_ProvideAssistanceData_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LPP_A_GNSS_ProvideAssistanceData, gnss_CommonAssistData),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_CommonAssistData,
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
		"gnss-CommonAssistData"
		},
	{ ATF_POINTER, 3, offsetof(struct LPP_A_GNSS_ProvideAssistanceData, gnss_GenericAssistData),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_GenericAssistData,
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
		"gnss-GenericAssistData"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_A_GNSS_ProvideAssistanceData, gnss_Error),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LPP_A_GNSS_Error,
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
		"gnss-Error"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_A_GNSS_ProvideAssistanceData, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LPP_ext1_6,
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
		"ext1"
		},
};
static const int asn_MAP_LPP_A_GNSS_ProvideAssistanceData_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LPP_A_GNSS_ProvideAssistanceData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_A_GNSS_ProvideAssistanceData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-CommonAssistData */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gnss-GenericAssistData */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gnss-Error */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_A_GNSS_ProvideAssistanceData_specs_1 = {
	sizeof(struct LPP_A_GNSS_ProvideAssistanceData),
	offsetof(struct LPP_A_GNSS_ProvideAssistanceData, _asn_ctx),
	asn_MAP_LPP_A_GNSS_ProvideAssistanceData_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LPP_A_GNSS_ProvideAssistanceData_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_A_GNSS_ProvideAssistanceData = {
	"A-GNSS-ProvideAssistanceData",
	"A-GNSS-ProvideAssistanceData",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_A_GNSS_ProvideAssistanceData_tags_1,
	sizeof(asn_DEF_LPP_A_GNSS_ProvideAssistanceData_tags_1)
		/sizeof(asn_DEF_LPP_A_GNSS_ProvideAssistanceData_tags_1[0]), /* 1 */
	asn_DEF_LPP_A_GNSS_ProvideAssistanceData_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_A_GNSS_ProvideAssistanceData_tags_1)
		/sizeof(asn_DEF_LPP_A_GNSS_ProvideAssistanceData_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_A_GNSS_ProvideAssistanceData_1,
	4,	/* Elements count */
	&asn_SPC_LPP_A_GNSS_ProvideAssistanceData_specs_1	/* Additional specs */
};

