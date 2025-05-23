/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_E-RABs-ToBeAdded-SgNBModReq-Item-SgNBPDCPpresent.h"

#include "X2AP_GBR-QosInformation.h"
#include "X2AP_GTPtunnelEndpoint.h"
#include "X2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent, full_E_RAB_Level_QoS_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RAB_Level_QoS_Parameters,
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
		"full-E-RAB-Level-QoS-Parameters"
		},
	{ ATF_POINTER, 3, offsetof(struct X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent, max_MN_admit_E_RAB_Level_QoS_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_GBR_QosInformation,
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
		"max-MN-admit-E-RAB-Level-QoS-Parameters"
		},
	{ ATF_POINTER, 2, offsetof(struct X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent, dL_Forwarding),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_DL_Forwarding,
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
		"dL-Forwarding"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent, meNB_DL_GTP_TEIDatMCG),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_GTPtunnelEndpoint,
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
		"meNB-DL-GTP-TEIDatMCG"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent, s1_UL_GTPtunnelEndpoint),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_GTPtunnelEndpoint,
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
		"s1-UL-GTPtunnelEndpoint"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P54,
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
static const int asn_MAP_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_oms_1[] = { 1, 2, 3, 5 };
static const ber_tlv_tag_t asn_DEF_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* full-E-RAB-Level-QoS-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* max-MN-admit-E-RAB-Level-QoS-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dL-Forwarding */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* meNB-DL-GTP-TEIDatMCG */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* s1-UL-GTPtunnelEndpoint */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_specs_1 = {
	sizeof(struct X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent),
	offsetof(struct X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent, _asn_ctx),
	asn_MAP_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent = {
	"E-RABs-ToBeAdded-SgNBModReq-Item-SgNBPDCPpresent",
	"E-RABs-ToBeAdded-SgNBModReq-Item-SgNBPDCPpresent",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_tags_1,
	sizeof(asn_DEF_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_tags_1)
		/sizeof(asn_DEF_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_tags_1[0]), /* 1 */
	asn_DEF_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_tags_1)
		/sizeof(asn_DEF_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_1,
	6,	/* Elements count */
	&asn_SPC_X2AP_E_RABs_ToBeAdded_SgNBModReq_Item_SgNBPDCPpresent_specs_1	/* Additional specs */
};

