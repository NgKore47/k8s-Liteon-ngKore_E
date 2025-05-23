/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_RRCConnectionResume-v1510-IEs.h"

static int
memb_LTE_sk_Counter_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 65535L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_sk_Counter_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_LTE_RRCConnectionResume_v1510_IEs_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LTE_RRCConnectionResume_v1510_IEs, sk_Counter_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_sk_Counter_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_sk_Counter_r15_constraint_1
		},
		0, 0, /* No default value */
		"sk-Counter-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RRCConnectionResume_v1510_IEs, nr_RadioBearerConfig1_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"nr-RadioBearerConfig1-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionResume_v1510_IEs, nr_RadioBearerConfig2_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"nr-RadioBearerConfig2-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionResume_v1510_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionResume_v1530_IEs,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_RRCConnectionResume_v1510_IEs_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionResume_v1510_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionResume_v1510_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sk-Counter-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-RadioBearerConfig1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nr-RadioBearerConfig2-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionResume_v1510_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionResume_v1510_IEs),
	offsetof(struct LTE_RRCConnectionResume_v1510_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionResume_v1510_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionResume_v1510_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionResume_v1510_IEs = {
	"RRCConnectionResume-v1510-IEs",
	"RRCConnectionResume-v1510-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionResume_v1510_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionResume_v1510_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionResume_v1510_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionResume_v1510_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionResume_v1510_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionResume_v1510_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_RRCConnectionResume_v1510_IEs_1,
	4,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionResume_v1510_IEs_specs_1	/* Additional specs */
};

