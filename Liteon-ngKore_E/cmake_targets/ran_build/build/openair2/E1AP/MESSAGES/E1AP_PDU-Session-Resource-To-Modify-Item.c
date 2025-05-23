/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_PDU-Session-Resource-To-Modify-Item.h"

#include "E1AP_SecurityIndication.h"
#include "E1AP_UP-TNL-Information.h"
#include "E1AP_Data-Forwarding-Information-Request.h"
#include "E1AP_Data-Forwarding-Information.h"
#include "E1AP_DRB-To-Setup-List-NG-RAN.h"
#include "E1AP_DRB-To-Modify-List-NG-RAN.h"
#include "E1AP_DRB-To-Remove-List-NG-RAN.h"
#include "E1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_E1AP_PDU_Session_Resource_To_Modify_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, pDU_Session_ID),
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
	{ ATF_POINTER, 11, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, securityIndication),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_SecurityIndication,
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
		"securityIndication"
		},
	{ ATF_POINTER, 10, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, pDU_Session_Resource_DL_AMBR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_BitRate,
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
		"pDU-Session-Resource-DL-AMBR"
		},
	{ ATF_POINTER, 9, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, nG_UL_UP_TNL_Information),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
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
		"nG-UL-UP-TNL-Information"
		},
	{ ATF_POINTER, 8, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, pDU_Session_Data_Forwarding_Information_Request),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_Data_Forwarding_Information_Request,
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
		"pDU-Session-Data-Forwarding-Information-Request"
		},
	{ ATF_POINTER, 7, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, pDU_Session_Data_Forwarding_Information),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
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
		"pDU-Session-Data-Forwarding-Information"
		},
	{ ATF_POINTER, 6, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, pDU_Session_Inactivity_Timer),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_Inactivity_Timer,
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
		"pDU-Session-Inactivity-Timer"
		},
	{ ATF_POINTER, 5, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, networkInstance),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_NetworkInstance,
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
		"networkInstance"
		},
	{ ATF_POINTER, 4, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, dRB_To_Setup_List_NG_RAN),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_DRB_To_Setup_List_NG_RAN,
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
		"dRB-To-Setup-List-NG-RAN"
		},
	{ ATF_POINTER, 3, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, dRB_To_Modify_List_NG_RAN),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_DRB_To_Modify_List_NG_RAN,
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
		"dRB-To-Modify-List-NG-RAN"
		},
	{ ATF_POINTER, 2, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, dRB_To_Remove_List_NG_RAN),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_DRB_To_Remove_List_NG_RAN,
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
		"dRB-To-Remove-List-NG-RAN"
		},
	{ ATF_POINTER, 1, offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_ProtocolExtensionContainer_4961P103,
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
static const int asn_MAP_E1AP_PDU_Session_Resource_To_Modify_Item_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_E1AP_PDU_Session_Resource_To_Modify_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E1AP_PDU_Session_Resource_To_Modify_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pDU-Session-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* securityIndication */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pDU-Session-Resource-DL-AMBR */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nG-UL-UP-TNL-Information */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pDU-Session-Data-Forwarding-Information-Request */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pDU-Session-Data-Forwarding-Information */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pDU-Session-Inactivity-Timer */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* networkInstance */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* dRB-To-Setup-List-NG-RAN */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* dRB-To-Modify-List-NG-RAN */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* dRB-To-Remove-List-NG-RAN */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E1AP_PDU_Session_Resource_To_Modify_Item_specs_1 = {
	sizeof(struct E1AP_PDU_Session_Resource_To_Modify_Item),
	offsetof(struct E1AP_PDU_Session_Resource_To_Modify_Item, _asn_ctx),
	asn_MAP_E1AP_PDU_Session_Resource_To_Modify_Item_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_E1AP_PDU_Session_Resource_To_Modify_Item_oms_1,	/* Optional members */
	11, 0,	/* Root/Additions */
	12,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E1AP_PDU_Session_Resource_To_Modify_Item = {
	"PDU-Session-Resource-To-Modify-Item",
	"PDU-Session-Resource-To-Modify-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_E1AP_PDU_Session_Resource_To_Modify_Item_tags_1,
	sizeof(asn_DEF_E1AP_PDU_Session_Resource_To_Modify_Item_tags_1)
		/sizeof(asn_DEF_E1AP_PDU_Session_Resource_To_Modify_Item_tags_1[0]), /* 1 */
	asn_DEF_E1AP_PDU_Session_Resource_To_Modify_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_PDU_Session_Resource_To_Modify_Item_tags_1)
		/sizeof(asn_DEF_E1AP_PDU_Session_Resource_To_Modify_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E1AP_PDU_Session_Resource_To_Modify_Item_1,
	12,	/* Elements count */
	&asn_SPC_E1AP_PDU_Session_Resource_To_Modify_Item_specs_1	/* Additional specs */
};

