/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_TBS-RequestLocationInformation-r13.h"

static int
memb_LPP_mbsRequestedMeasurements_r14_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1UL && size <= 8UL)) {
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
static asn_per_constraints_t asn_PER_memb_LPP_mbsRequestedMeasurements_r14_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LPP_ext1_4[] = {
	{ ATF_POINTER, 2, offsetof(struct LPP_TBS_RequestLocationInformation_r13__ext1, mbsAssistanceAvailability_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"mbsAssistanceAvailability-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_TBS_RequestLocationInformation_r13__ext1, mbsRequestedMeasurements_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_mbsRequestedMeasurements_r14_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_mbsRequestedMeasurements_r14_constraint_4
		},
		0, 0, /* No default value */
		"mbsRequestedMeasurements-r14"
		},
};
static const int asn_MAP_LPP_ext1_oms_4[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LPP_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbsAssistanceAvailability-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mbsRequestedMeasurements-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ext1_specs_4 = {
	sizeof(struct LPP_TBS_RequestLocationInformation_r13__ext1),
	offsetof(struct LPP_TBS_RequestLocationInformation_r13__ext1, _asn_ctx),
	asn_MAP_LPP_ext1_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_LPP_ext1_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_ext1_4 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ext1_tags_4,
	sizeof(asn_DEF_LPP_ext1_tags_4)
		/sizeof(asn_DEF_LPP_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_LPP_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_LPP_ext1_tags_4)
		/sizeof(asn_DEF_LPP_ext1_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_ext1_4,
	2,	/* Elements count */
	&asn_SPC_LPP_ext1_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_TBS_RequestLocationInformation_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_TBS_RequestLocationInformation_r13, mbsSgnMeasListReq_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"mbsSgnMeasListReq-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_TBS_RequestLocationInformation_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LPP_ext1_4,
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
static const int asn_MAP_LPP_TBS_RequestLocationInformation_r13_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LPP_TBS_RequestLocationInformation_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_TBS_RequestLocationInformation_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbsSgnMeasListReq-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_TBS_RequestLocationInformation_r13_specs_1 = {
	sizeof(struct LPP_TBS_RequestLocationInformation_r13),
	offsetof(struct LPP_TBS_RequestLocationInformation_r13, _asn_ctx),
	asn_MAP_LPP_TBS_RequestLocationInformation_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LPP_TBS_RequestLocationInformation_r13_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_TBS_RequestLocationInformation_r13 = {
	"TBS-RequestLocationInformation-r13",
	"TBS-RequestLocationInformation-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_TBS_RequestLocationInformation_r13_tags_1,
	sizeof(asn_DEF_LPP_TBS_RequestLocationInformation_r13_tags_1)
		/sizeof(asn_DEF_LPP_TBS_RequestLocationInformation_r13_tags_1[0]), /* 1 */
	asn_DEF_LPP_TBS_RequestLocationInformation_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_TBS_RequestLocationInformation_r13_tags_1)
		/sizeof(asn_DEF_LPP_TBS_RequestLocationInformation_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_TBS_RequestLocationInformation_r13_1,
	2,	/* Elements count */
	&asn_SPC_LPP_TBS_RequestLocationInformation_r13_specs_1	/* Additional specs */
};

