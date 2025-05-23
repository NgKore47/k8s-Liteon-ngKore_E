/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_EPDU-Identifier.h"

asn_TYPE_member_t asn_MBR_LPP_EPDU_Identifier_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_EPDU_Identifier, ePDU_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_EPDU_ID,
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
		"ePDU-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_EPDU_Identifier, ePDU_Name),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_EPDU_Name,
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
		"ePDU-Name"
		},
};
static const int asn_MAP_LPP_EPDU_Identifier_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LPP_EPDU_Identifier_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_EPDU_Identifier_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ePDU-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ePDU-Name */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_EPDU_Identifier_specs_1 = {
	sizeof(struct LPP_EPDU_Identifier),
	offsetof(struct LPP_EPDU_Identifier, _asn_ctx),
	asn_MAP_LPP_EPDU_Identifier_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LPP_EPDU_Identifier_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_EPDU_Identifier = {
	"EPDU-Identifier",
	"EPDU-Identifier",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_EPDU_Identifier_tags_1,
	sizeof(asn_DEF_LPP_EPDU_Identifier_tags_1)
		/sizeof(asn_DEF_LPP_EPDU_Identifier_tags_1[0]), /* 1 */
	asn_DEF_LPP_EPDU_Identifier_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_EPDU_Identifier_tags_1)
		/sizeof(asn_DEF_LPP_EPDU_Identifier_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_EPDU_Identifier_1,
	2,	/* Elements count */
	&asn_SPC_LPP_EPDU_Identifier_specs_1	/* Additional specs */
};

