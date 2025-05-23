/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_BandParameters-r10.h"

asn_TYPE_member_t asn_MBR_LTE_BandParameters_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BandParameters_r10, bandEUTRA_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FreqBandIndicator,
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
		"bandEUTRA-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_BandParameters_r10, bandParametersUL_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_BandParametersUL_r10,
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
		"bandParametersUL-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_BandParameters_r10, bandParametersDL_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_BandParametersDL_r10,
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
		"bandParametersDL-r10"
		},
};
static const int asn_MAP_LTE_BandParameters_r10_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_BandParameters_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_BandParameters_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandEUTRA-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bandParametersUL-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* bandParametersDL-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_BandParameters_r10_specs_1 = {
	sizeof(struct LTE_BandParameters_r10),
	offsetof(struct LTE_BandParameters_r10, _asn_ctx),
	asn_MAP_LTE_BandParameters_r10_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_BandParameters_r10_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_BandParameters_r10 = {
	"BandParameters-r10",
	"BandParameters-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_BandParameters_r10_tags_1,
	sizeof(asn_DEF_LTE_BandParameters_r10_tags_1)
		/sizeof(asn_DEF_LTE_BandParameters_r10_tags_1[0]), /* 1 */
	asn_DEF_LTE_BandParameters_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_BandParameters_r10_tags_1)
		/sizeof(asn_DEF_LTE_BandParameters_r10_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_BandParameters_r10_1,
	3,	/* Elements count */
	&asn_SPC_LTE_BandParameters_r10_specs_1	/* Additional specs */
};

