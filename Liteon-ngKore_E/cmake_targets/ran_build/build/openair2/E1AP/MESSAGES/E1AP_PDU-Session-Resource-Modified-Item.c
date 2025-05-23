/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_PDU-Session-Resource-Modified-Item.h"

#include "E1AP_UP-TNL-Information.h"
#include "E1AP_SecurityResult.h"
#include "E1AP_Data-Forwarding-Information.h"
#include "E1AP_DRB-Setup-List-NG-RAN.h"
#include "E1AP_DRB-Failed-List-NG-RAN.h"
#include "E1AP_DRB-Modified-List-NG-RAN.h"
#include "E1AP_DRB-Failed-To-Modify-List-NG-RAN.h"
#include "E1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_E1AP_PDU_Session_Resource_Modified_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E1AP_PDU_Session_Resource_Modified_Item, pDU_Session_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_PDU_Session_ID,
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
		"pDU-Session-ID"
		},
	{ ATF_POINTER, 8, offsetof(struct E1AP_PDU_Session_Resource_Modified_Item, nG_DL_UP_TNL_Information),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_E1AP_UP_TNL_Information,
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
		"nG-DL-UP-TNL-Information"
		},
	{ ATF_POINTER, 7, offsetof(struct E1AP_PDU_Session_Resource_Modified_Item, securityResult),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_SecurityResult,
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
		"securityResult"
		},
	{ ATF_POINTER, 6, offsetof(struct E1AP_PDU_Session_Resource_Modified_Item, pDU_Session_Data_Forwarding_Information_Response),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_Data_Forwarding_Information,
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
		"pDU-Session-Data-Forwarding-Information-Response"
		},
	{ ATF_POINTER, 5, offsetof(struct E1AP_PDU_Session_Resource_Modified_Item, dRB_Setup_List_NG_RAN),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_DRB_Setup_List_NG_RAN,
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
		"dRB-Setup-List-NG-RAN"
		},
	{ ATF_POINTER, 4, offsetof(struct E1AP_PDU_Session_Resource_Modified_Item, dRB_Failed_List_NG_RAN),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_DRB_Failed_List_NG_RAN,
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
		"dRB-Failed-List-NG-RAN"
		},
	{ ATF_POINTER, 3, offsetof(struct E1AP_PDU_Session_Resource_Modified_Item, dRB_Modified_List_NG_RAN),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_DRB_Modified_List_NG_RAN,
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
		"dRB-Modified-List-NG-RAN"
		},
	{ ATF_POINTER, 2, offsetof(struct E1AP_PDU_Session_Resource_Modified_Item, dRB_Failed_To_Modify_List_NG_RAN),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_DRB_Failed_To_Modify_List_NG_RAN,
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
		"dRB-Failed-To-Modify-List-NG-RAN"
		},
	{ ATF_POINTER, 1, offsetof(struct E1AP_PDU_Session_Resource_Modified_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_ProtocolExtensionContainer_4961P99,
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
static const int asn_MAP_E1AP_PDU_Session_Resource_Modified_Item_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_E1AP_PDU_Session_Resource_Modified_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E1AP_PDU_Session_Resource_Modified_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pDU-Session-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nG-DL-UP-TNL-Information */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* securityResult */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pDU-Session-Data-Forwarding-Information-Response */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dRB-Setup-List-NG-RAN */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dRB-Failed-List-NG-RAN */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dRB-Modified-List-NG-RAN */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* dRB-Failed-To-Modify-List-NG-RAN */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E1AP_PDU_Session_Resource_Modified_Item_specs_1 = {
	sizeof(struct E1AP_PDU_Session_Resource_Modified_Item),
	offsetof(struct E1AP_PDU_Session_Resource_Modified_Item, _asn_ctx),
	asn_MAP_E1AP_PDU_Session_Resource_Modified_Item_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_E1AP_PDU_Session_Resource_Modified_Item_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E1AP_PDU_Session_Resource_Modified_Item = {
	"PDU-Session-Resource-Modified-Item",
	"PDU-Session-Resource-Modified-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_E1AP_PDU_Session_Resource_Modified_Item_tags_1,
	sizeof(asn_DEF_E1AP_PDU_Session_Resource_Modified_Item_tags_1)
		/sizeof(asn_DEF_E1AP_PDU_Session_Resource_Modified_Item_tags_1[0]), /* 1 */
	asn_DEF_E1AP_PDU_Session_Resource_Modified_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_PDU_Session_Resource_Modified_Item_tags_1)
		/sizeof(asn_DEF_E1AP_PDU_Session_Resource_Modified_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E1AP_PDU_Session_Resource_Modified_Item_1,
	9,	/* Elements count */
	&asn_SPC_E1AP_PDU_Session_Resource_Modified_Item_specs_1	/* Additional specs */
};

