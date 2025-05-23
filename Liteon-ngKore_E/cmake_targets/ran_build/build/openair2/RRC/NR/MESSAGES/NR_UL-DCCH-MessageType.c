/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_UL-DCCH-MessageType.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_c1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_c2_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_messageClassExtension_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NR_UL_DCCH_MessageType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_c1_2[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.measurementReport),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasurementReport,
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
		"measurementReport"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.rrcReconfigurationComplete),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RRCReconfigurationComplete,
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
		"rrcReconfigurationComplete"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.rrcSetupComplete),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RRCSetupComplete,
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
		"rrcSetupComplete"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.rrcReestablishmentComplete),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RRCReestablishmentComplete,
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
		"rrcReestablishmentComplete"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.rrcResumeComplete),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RRCResumeComplete,
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
		"rrcResumeComplete"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.securityModeComplete),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SecurityModeComplete,
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
		"securityModeComplete"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.securityModeFailure),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SecurityModeFailure,
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
		"securityModeFailure"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.ulInformationTransfer),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ULInformationTransfer,
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
		"ulInformationTransfer"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.locationMeasurementIndication),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_LocationMeasurementIndication,
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
		"locationMeasurementIndication"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.ueCapabilityInformation),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UECapabilityInformation,
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
		"ueCapabilityInformation"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.counterCheckResponse),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CounterCheckResponse,
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
		"counterCheckResponse"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.ueAssistanceInformation),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UEAssistanceInformation,
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
		"ueAssistanceInformation"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.failureInformation),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FailureInformation,
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
		"failureInformation"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.ulInformationTransferMRDC),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ULInformationTransferMRDC,
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
		"ulInformationTransferMRDC"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.scgFailureInformation),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SCGFailureInformation,
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
		"scgFailureInformation"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__c1, choice.scgFailureInformationEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SCGFailureInformationEUTRA,
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
		"scgFailureInformationEUTRA"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_c1_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measurementReport */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rrcReconfigurationComplete */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rrcSetupComplete */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rrcReestablishmentComplete */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rrcResumeComplete */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* securityModeComplete */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* securityModeFailure */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ulInformationTransfer */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* locationMeasurementIndication */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ueCapabilityInformation */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* counterCheckResponse */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ueAssistanceInformation */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* failureInformation */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ulInformationTransferMRDC */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* scgFailureInformation */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* scgFailureInformationEUTRA */
};
static asn_CHOICE_specifics_t asn_SPC_NR_c1_specs_2 = {
	sizeof(struct NR_UL_DCCH_MessageType__c1),
	offsetof(struct NR_UL_DCCH_MessageType__c1, _asn_ctx),
	offsetof(struct NR_UL_DCCH_MessageType__c1, present),
	sizeof(((struct NR_UL_DCCH_MessageType__c1 *)0)->present),
	asn_MAP_NR_c1_tag2el_2,
	16,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_c1_2 = {
	"c1",
	"c1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_c1_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_c1_2,
	16,	/* Elements count */
	&asn_SPC_NR_c1_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_c2_20[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.ulDedicatedMessageSegment_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ULDedicatedMessageSegment_r16,
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
		"ulDedicatedMessageSegment-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.dedicatedSIBRequest_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_DedicatedSIBRequest_r16,
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
		"dedicatedSIBRequest-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.mcgFailureInformation_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MCGFailureInformation_r16,
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
		"mcgFailureInformation-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.ueInformationResponse_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UEInformationResponse_r16,
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
		"ueInformationResponse-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.sidelinkUEInformationNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SidelinkUEInformationNR_r16,
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
		"sidelinkUEInformationNR-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.ulInformationTransferIRAT_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ULInformationTransferIRAT_r16,
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
		"ulInformationTransferIRAT-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.iabOtherInformation_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IABOtherInformation_r16,
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
		"iabOtherInformation-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.mbsInterestIndication_r17),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MBSInterestIndication_r17,
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
		"mbsInterestIndication-r17"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.uePositioningAssistanceInfo_r17),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UEPositioningAssistanceInfo_r17,
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
		"uePositioningAssistanceInfo-r17"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.measurementReportAppLayer_r17),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasurementReportAppLayer_r17,
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
		"measurementReportAppLayer-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.spare6),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"spare6"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.spare5),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"spare5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.spare4),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"spare4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.spare3),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"spare3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.spare2),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"spare2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_c2_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ulDedicatedMessageSegment-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dedicatedSIBRequest-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mcgFailureInformation-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ueInformationResponse-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sidelinkUEInformationNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ulInformationTransferIRAT-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* iabOtherInformation-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* mbsInterestIndication-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* uePositioningAssistanceInfo-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* measurementReportAppLayer-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* spare6 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* spare5 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* spare4 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* spare3 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* spare2 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* spare1 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_c2_specs_20 = {
	sizeof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2),
	offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, _asn_ctx),
	offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__c2, present),
	sizeof(((struct NR_UL_DCCH_MessageType__messageClassExtension__c2 *)0)->present),
	asn_MAP_NR_c2_tag2el_20,
	16,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_c2_20 = {
	"c2",
	"c2",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_c2_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_c2_20,
	16,	/* Elements count */
	&asn_SPC_NR_c2_specs_20	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NR_messageClassExtensionFuture_r16_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_messageClassExtensionFuture_r16_specs_37 = {
	sizeof(struct NR_UL_DCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r16),
	offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r16, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_messageClassExtensionFuture_r16_37 = {
	"messageClassExtensionFuture-r16",
	"messageClassExtensionFuture-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_messageClassExtensionFuture_r16_tags_37,
	sizeof(asn_DEF_NR_messageClassExtensionFuture_r16_tags_37)
		/sizeof(asn_DEF_NR_messageClassExtensionFuture_r16_tags_37[0]) - 1, /* 1 */
	asn_DEF_NR_messageClassExtensionFuture_r16_tags_37,	/* Same as above */
	sizeof(asn_DEF_NR_messageClassExtensionFuture_r16_tags_37)
		/sizeof(asn_DEF_NR_messageClassExtensionFuture_r16_tags_37[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_NR_messageClassExtensionFuture_r16_specs_37	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_messageClassExtension_19[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension, choice.c2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_c2_20,
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
		"c2"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension, choice.messageClassExtensionFuture_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_messageClassExtensionFuture_r16_37,
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
		"messageClassExtensionFuture-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_messageClassExtension_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtensionFuture-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_messageClassExtension_specs_19 = {
	sizeof(struct NR_UL_DCCH_MessageType__messageClassExtension),
	offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension, _asn_ctx),
	offsetof(struct NR_UL_DCCH_MessageType__messageClassExtension, present),
	sizeof(((struct NR_UL_DCCH_MessageType__messageClassExtension *)0)->present),
	asn_MAP_NR_messageClassExtension_tag2el_19,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_messageClassExtension_19 = {
	"messageClassExtension",
	"messageClassExtension",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_messageClassExtension_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_messageClassExtension_19,
	2,	/* Elements count */
	&asn_SPC_NR_messageClassExtension_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_UL_DCCH_MessageType_1[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_c1_2,
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
		"c1"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_UL_DCCH_MessageType, choice.messageClassExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_messageClassExtension_19,
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
		"messageClassExtension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UL_DCCH_MessageType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtension */
};
asn_CHOICE_specifics_t asn_SPC_NR_UL_DCCH_MessageType_specs_1 = {
	sizeof(struct NR_UL_DCCH_MessageType),
	offsetof(struct NR_UL_DCCH_MessageType, _asn_ctx),
	offsetof(struct NR_UL_DCCH_MessageType, present),
	sizeof(((struct NR_UL_DCCH_MessageType *)0)->present),
	asn_MAP_NR_UL_DCCH_MessageType_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NR_UL_DCCH_MessageType = {
	"UL-DCCH-MessageType",
	"UL-DCCH-MessageType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_UL_DCCH_MessageType_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_UL_DCCH_MessageType_1,
	2,	/* Elements count */
	&asn_SPC_NR_UL_DCCH_MessageType_specs_1	/* Additional specs */
};

