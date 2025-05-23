/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Contents"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_System-GNB-CU-UP-CounterCheckRequest.h"

#include "E1AP_ProtocolIE-Container.h"
#include "E1AP_ProtocolIE-SingleContainer.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_E1AP_System_GNB_CU_UP_CounterCheckRequest_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_E1AP_System_GNB_CU_UP_CounterCheckRequest_1[] = {
	{ ATF_POINTER, 0, offsetof(struct E1AP_System_GNB_CU_UP_CounterCheckRequest, choice.e_UTRAN_GNB_CU_UP_CounterCheckRequest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_ProtocolIE_Container_4932P45,
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
		"e-UTRAN-GNB-CU-UP-CounterCheckRequest"
		},
	{ ATF_POINTER, 0, offsetof(struct E1AP_System_GNB_CU_UP_CounterCheckRequest, choice.nG_RAN_GNB_CU_UP_CounterCheckRequest),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_ProtocolIE_Container_4932P46,
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
		"nG-RAN-GNB-CU-UP-CounterCheckRequest"
		},
	{ ATF_POINTER, 0, offsetof(struct E1AP_System_GNB_CU_UP_CounterCheckRequest, choice.choice_extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_ProtocolIE_SingleContainer_4935P9,
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
		"choice-extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_E1AP_System_GNB_CU_UP_CounterCheckRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-UTRAN-GNB-CU-UP-CounterCheckRequest */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nG-RAN-GNB-CU-UP-CounterCheckRequest */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-extension */
};
asn_CHOICE_specifics_t asn_SPC_E1AP_System_GNB_CU_UP_CounterCheckRequest_specs_1 = {
	sizeof(struct E1AP_System_GNB_CU_UP_CounterCheckRequest),
	offsetof(struct E1AP_System_GNB_CU_UP_CounterCheckRequest, _asn_ctx),
	offsetof(struct E1AP_System_GNB_CU_UP_CounterCheckRequest, present),
	sizeof(((struct E1AP_System_GNB_CU_UP_CounterCheckRequest *)0)->present),
	asn_MAP_E1AP_System_GNB_CU_UP_CounterCheckRequest_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_E1AP_System_GNB_CU_UP_CounterCheckRequest = {
	"System-GNB-CU-UP-CounterCheckRequest",
	"System-GNB-CU-UP-CounterCheckRequest",
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
		&asn_PER_type_E1AP_System_GNB_CU_UP_CounterCheckRequest_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_E1AP_System_GNB_CU_UP_CounterCheckRequest_1,
	3,	/* Elements count */
	&asn_SPC_E1AP_System_GNB_CU_UP_CounterCheckRequest_specs_1	/* Additional specs */
};

