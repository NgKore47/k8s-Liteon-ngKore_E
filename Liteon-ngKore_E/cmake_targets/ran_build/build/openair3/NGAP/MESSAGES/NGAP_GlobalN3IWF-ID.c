/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#include "NGAP_GlobalN3IWF-ID.h"

#include "NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NGAP_GlobalN3IWF_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_GlobalN3IWF_ID, pLMNIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_PLMNIdentity,
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
		"pLMNIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_GlobalN3IWF_ID, n3IWF_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGAP_N3IWF_ID,
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
		"n3IWF-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_GlobalN3IWF_ID, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_6861P60,
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
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_GlobalN3IWF_ID_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_NGAP_GlobalN3IWF_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_GlobalN3IWF_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* n3IWF-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_GlobalN3IWF_ID_specs_1 = {
	sizeof(struct NGAP_GlobalN3IWF_ID),
	offsetof(struct NGAP_GlobalN3IWF_ID, _asn_ctx),
	asn_MAP_NGAP_GlobalN3IWF_ID_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NGAP_GlobalN3IWF_ID_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_GlobalN3IWF_ID = {
	"GlobalN3IWF-ID",
	"GlobalN3IWF-ID",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_GlobalN3IWF_ID_tags_1,
	sizeof(asn_DEF_NGAP_GlobalN3IWF_ID_tags_1)
		/sizeof(asn_DEF_NGAP_GlobalN3IWF_ID_tags_1[0]), /* 1 */
	asn_DEF_NGAP_GlobalN3IWF_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_GlobalN3IWF_ID_tags_1)
		/sizeof(asn_DEF_NGAP_GlobalN3IWF_ID_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_GlobalN3IWF_ID_1,
	3,	/* Elements count */
	&asn_SPC_NGAP_GlobalN3IWF_ID_specs_1	/* Additional specs */
};

