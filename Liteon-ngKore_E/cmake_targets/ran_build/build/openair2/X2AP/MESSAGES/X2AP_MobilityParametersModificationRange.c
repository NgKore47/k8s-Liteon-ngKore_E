/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_MobilityParametersModificationRange.h"

static int
memb_X2AP_handoverTriggerChangeLowerLimit_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -20L && value <= 20L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_X2AP_handoverTriggerChangeUpperLimit_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -20L && value <= 20L)) {
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
static asn_per_constraints_t asn_PER_memb_X2AP_handoverTriggerChangeLowerLimit_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -20,  20 }	/* (-20..20) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_X2AP_handoverTriggerChangeUpperLimit_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -20,  20 }	/* (-20..20) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_X2AP_MobilityParametersModificationRange_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_MobilityParametersModificationRange, handoverTriggerChangeLowerLimit),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_X2AP_handoverTriggerChangeLowerLimit_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_X2AP_handoverTriggerChangeLowerLimit_constraint_1
		},
		0, 0, /* No default value */
		"handoverTriggerChangeLowerLimit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_MobilityParametersModificationRange, handoverTriggerChangeUpperLimit),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_X2AP_handoverTriggerChangeUpperLimit_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_X2AP_handoverTriggerChangeUpperLimit_constraint_1
		},
		0, 0, /* No default value */
		"handoverTriggerChangeUpperLimit"
		},
};
static const ber_tlv_tag_t asn_DEF_X2AP_MobilityParametersModificationRange_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_MobilityParametersModificationRange_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* handoverTriggerChangeLowerLimit */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* handoverTriggerChangeUpperLimit */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_MobilityParametersModificationRange_specs_1 = {
	sizeof(struct X2AP_MobilityParametersModificationRange),
	offsetof(struct X2AP_MobilityParametersModificationRange, _asn_ctx),
	asn_MAP_X2AP_MobilityParametersModificationRange_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_MobilityParametersModificationRange = {
	"MobilityParametersModificationRange",
	"MobilityParametersModificationRange",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_MobilityParametersModificationRange_tags_1,
	sizeof(asn_DEF_X2AP_MobilityParametersModificationRange_tags_1)
		/sizeof(asn_DEF_X2AP_MobilityParametersModificationRange_tags_1[0]), /* 1 */
	asn_DEF_X2AP_MobilityParametersModificationRange_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_MobilityParametersModificationRange_tags_1)
		/sizeof(asn_DEF_X2AP_MobilityParametersModificationRange_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_X2AP_MobilityParametersModificationRange_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_MobilityParametersModificationRange_specs_1	/* Additional specs */
};

