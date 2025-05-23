/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_ExpectedUEActivityBehaviour.h"

#include "X2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2AP_ExpectedUEActivityBehaviour_1[] = {
	{ ATF_POINTER, 4, offsetof(struct X2AP_ExpectedUEActivityBehaviour, expectedActivityPeriod),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ExpectedActivityPeriod,
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
		"expectedActivityPeriod"
		},
	{ ATF_POINTER, 3, offsetof(struct X2AP_ExpectedUEActivityBehaviour, expectedIdlePeriod),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ExpectedIdlePeriod,
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
		"expectedIdlePeriod"
		},
	{ ATF_POINTER, 2, offsetof(struct X2AP_ExpectedUEActivityBehaviour, sourceofUEActivityBehaviourInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_SourceOfUEActivityBehaviourInformation,
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
		"sourceofUEActivityBehaviourInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_ExpectedUEActivityBehaviour, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P142,
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
static const int asn_MAP_X2AP_ExpectedUEActivityBehaviour_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_X2AP_ExpectedUEActivityBehaviour_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_ExpectedUEActivityBehaviour_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* expectedActivityPeriod */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* expectedIdlePeriod */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sourceofUEActivityBehaviourInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_ExpectedUEActivityBehaviour_specs_1 = {
	sizeof(struct X2AP_ExpectedUEActivityBehaviour),
	offsetof(struct X2AP_ExpectedUEActivityBehaviour, _asn_ctx),
	asn_MAP_X2AP_ExpectedUEActivityBehaviour_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_X2AP_ExpectedUEActivityBehaviour_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_ExpectedUEActivityBehaviour = {
	"ExpectedUEActivityBehaviour",
	"ExpectedUEActivityBehaviour",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_ExpectedUEActivityBehaviour_tags_1,
	sizeof(asn_DEF_X2AP_ExpectedUEActivityBehaviour_tags_1)
		/sizeof(asn_DEF_X2AP_ExpectedUEActivityBehaviour_tags_1[0]), /* 1 */
	asn_DEF_X2AP_ExpectedUEActivityBehaviour_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_ExpectedUEActivityBehaviour_tags_1)
		/sizeof(asn_DEF_X2AP_ExpectedUEActivityBehaviour_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_X2AP_ExpectedUEActivityBehaviour_1,
	4,	/* Elements count */
	&asn_SPC_X2AP_ExpectedUEActivityBehaviour_specs_1	/* Additional specs */
};

