/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_EUTRA-PresenceAntennaPort1.h"

/*
 * This type is implemented using BOOLEAN,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_NR_EUTRA_PresenceAntennaPort1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (1 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NR_EUTRA_PresenceAntennaPort1 = {
	"EUTRA-PresenceAntennaPort1",
	"EUTRA-PresenceAntennaPort1",
	&asn_OP_BOOLEAN,
	asn_DEF_NR_EUTRA_PresenceAntennaPort1_tags_1,
	sizeof(asn_DEF_NR_EUTRA_PresenceAntennaPort1_tags_1)
		/sizeof(asn_DEF_NR_EUTRA_PresenceAntennaPort1_tags_1[0]), /* 1 */
	asn_DEF_NR_EUTRA_PresenceAntennaPort1_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_EUTRA_PresenceAntennaPort1_tags_1)
		/sizeof(asn_DEF_NR_EUTRA_PresenceAntennaPort1_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		BOOLEAN_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

