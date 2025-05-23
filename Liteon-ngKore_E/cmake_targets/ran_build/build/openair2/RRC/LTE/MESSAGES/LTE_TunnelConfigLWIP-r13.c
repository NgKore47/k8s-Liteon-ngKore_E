/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_TunnelConfigLWIP-r13.h"

static int
memb_LTE_lwip_Counter_r13_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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
static asn_per_constraints_t asn_PER_memb_LTE_lwip_Counter_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_TunnelConfigLWIP_r13__ext1, lwip_Counter_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_lwip_Counter_r13_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_lwip_Counter_r13_constraint_5
		},
		0, 0, /* No default value */
		"lwip-Counter-r13"
		},
};
static const int asn_MAP_LTE_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* lwip-Counter-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_5 = {
	sizeof(struct LTE_TunnelConfigLWIP_r13__ext1),
	offsetof(struct LTE_TunnelConfigLWIP_r13__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_5,
	sizeof(asn_DEF_LTE_ext1_tags_5)
		/sizeof(asn_DEF_LTE_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_5)
		/sizeof(asn_DEF_LTE_ext1_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext1_5,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_TunnelConfigLWIP_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_TunnelConfigLWIP_r13, ip_Address_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_IP_Address_r13,
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
		"ip-Address-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_TunnelConfigLWIP_r13, ike_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IKE_Identity_r13,
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
		"ike-Identity-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_TunnelConfigLWIP_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_ext1_5,
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
		"ext1"
		},
};
static const int asn_MAP_LTE_TunnelConfigLWIP_r13_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_LTE_TunnelConfigLWIP_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_TunnelConfigLWIP_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ip-Address-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ike-Identity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_TunnelConfigLWIP_r13_specs_1 = {
	sizeof(struct LTE_TunnelConfigLWIP_r13),
	offsetof(struct LTE_TunnelConfigLWIP_r13, _asn_ctx),
	asn_MAP_LTE_TunnelConfigLWIP_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_TunnelConfigLWIP_r13_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_TunnelConfigLWIP_r13 = {
	"TunnelConfigLWIP-r13",
	"TunnelConfigLWIP-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_TunnelConfigLWIP_r13_tags_1,
	sizeof(asn_DEF_LTE_TunnelConfigLWIP_r13_tags_1)
		/sizeof(asn_DEF_LTE_TunnelConfigLWIP_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_TunnelConfigLWIP_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_TunnelConfigLWIP_r13_tags_1)
		/sizeof(asn_DEF_LTE_TunnelConfigLWIP_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_TunnelConfigLWIP_r13_1,
	3,	/* Elements count */
	&asn_SPC_LTE_TunnelConfigLWIP_r13_specs_1	/* Additional specs */
};

