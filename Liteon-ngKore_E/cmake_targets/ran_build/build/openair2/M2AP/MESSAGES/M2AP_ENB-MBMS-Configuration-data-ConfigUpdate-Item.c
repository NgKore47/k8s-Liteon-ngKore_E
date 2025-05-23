/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/M2AP/MESSAGES/ASN1/m2ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/M2AP/MESSAGES`
 */

#include "M2AP_ENB-MBMS-Configuration-data-ConfigUpdate-Item.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item, choice.mBMSConfigData),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_ENB_MBMS_Configuration_data_Item,
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
		"mBMSConfigData"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item, choice.eCGI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_ECGI,
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
		"eCGI"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mBMSConfigData */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eCGI */
};
asn_CHOICE_specifics_t asn_SPC_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_specs_1 = {
	sizeof(struct M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item),
	offsetof(struct M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item, _asn_ctx),
	offsetof(struct M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item, present),
	sizeof(((struct M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item *)0)->present),
	asn_MAP_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item = {
	"ENB-MBMS-Configuration-data-ConfigUpdate-Item",
	"ENB-MBMS-Configuration-data-ConfigUpdate-Item",
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
		&asn_PER_type_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_1,
	2,	/* Elements count */
	&asn_SPC_M2AP_ENB_MBMS_Configuration_data_ConfigUpdate_Item_specs_1	/* Additional specs */
};

