/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_BandParametersUL-r13.h"

/*
 * This type is implemented using LTE_CA_MIMO_ParametersUL_r10,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_LTE_BandParametersUL_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_BandParametersUL_r13 = {
	"BandParametersUL-r13",
	"BandParametersUL-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_BandParametersUL_r13_tags_1,
	sizeof(asn_DEF_LTE_BandParametersUL_r13_tags_1)
		/sizeof(asn_DEF_LTE_BandParametersUL_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_BandParametersUL_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_BandParametersUL_r13_tags_1)
		/sizeof(asn_DEF_LTE_BandParametersUL_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_CA_MIMO_ParametersUL_r10_1,
	2,	/* Elements count */
	&asn_SPC_LTE_CA_MIMO_ParametersUL_r10_specs_1	/* Additional specs */
};

