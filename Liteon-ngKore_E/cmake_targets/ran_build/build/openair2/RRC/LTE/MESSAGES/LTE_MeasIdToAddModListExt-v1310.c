/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_MeasIdToAddModListExt-v1310.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LTE_MeasIdToAddModListExt_v1310_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_LTE_MeasIdToAddModListExt_v1310_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_MeasIdToAddMod_v1310,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_MeasIdToAddModListExt_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_LTE_MeasIdToAddModListExt_v1310_specs_1 = {
	sizeof(struct LTE_MeasIdToAddModListExt_v1310),
	offsetof(struct LTE_MeasIdToAddModListExt_v1310, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MeasIdToAddModListExt_v1310 = {
	"MeasIdToAddModListExt-v1310",
	"MeasIdToAddModListExt-v1310",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_MeasIdToAddModListExt_v1310_tags_1,
	sizeof(asn_DEF_LTE_MeasIdToAddModListExt_v1310_tags_1)
		/sizeof(asn_DEF_LTE_MeasIdToAddModListExt_v1310_tags_1[0]), /* 1 */
	asn_DEF_LTE_MeasIdToAddModListExt_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MeasIdToAddModListExt_v1310_tags_1)
		/sizeof(asn_DEF_LTE_MeasIdToAddModListExt_v1310_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_MeasIdToAddModListExt_v1310_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LTE_MeasIdToAddModListExt_v1310_1,
	1,	/* Single element */
	&asn_SPC_LTE_MeasIdToAddModListExt_v1310_specs_1	/* Additional specs */
};

