/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_UE-EUTRA-CapabilityAddXDD-Mode-r9.h"

static int
memb_LTE_featureGroupIndicators_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32UL)) {
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
memb_LTE_featureGroupIndRel9Add_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32UL)) {
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
static asn_per_constraints_t asn_PER_memb_LTE_featureGroupIndicators_r9_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_featureGroupIndRel9Add_r9_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_1[] = {
	{ ATF_POINTER, 7, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9, phyLayerParameters_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhyLayerParameters,
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
		"phyLayerParameters-r9"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9, featureGroupIndicators_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_featureGroupIndicators_r9_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_featureGroupIndicators_r9_constraint_1
		},
		0, 0, /* No default value */
		"featureGroupIndicators-r9"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9, featureGroupIndRel9Add_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_featureGroupIndRel9Add_r9_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_featureGroupIndRel9Add_r9_constraint_1
		},
		0, 0, /* No default value */
		"featureGroupIndRel9Add-r9"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9, interRAT_ParametersGERAN_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IRAT_ParametersGERAN,
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
		"interRAT-ParametersGERAN-r9"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9, interRAT_ParametersUTRA_r9),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IRAT_ParametersUTRA_v920,
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
		"interRAT-ParametersUTRA-r9"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9, interRAT_ParametersCDMA2000_r9),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT_v920,
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
		"interRAT-ParametersCDMA2000-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9, neighCellSI_AcquisitionParameters_r9),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NeighCellSI_AcquisitionParameters_r9,
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
		"neighCellSI-AcquisitionParameters-r9"
		},
};
static const int asn_MAP_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phyLayerParameters-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* featureGroupIndicators-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* featureGroupIndRel9Add-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* interRAT-ParametersGERAN-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* interRAT-ParametersUTRA-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* interRAT-ParametersCDMA2000-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* neighCellSI-AcquisitionParameters-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_specs_1 = {
	sizeof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9),
	offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9, _asn_ctx),
	asn_MAP_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9 = {
	"UE-EUTRA-CapabilityAddXDD-Mode-r9",
	"UE-EUTRA-CapabilityAddXDD-Mode-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_tags_1,
	sizeof(asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_1,
	7,	/* Elements count */
	&asn_SPC_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_specs_1	/* Additional specs */
};

