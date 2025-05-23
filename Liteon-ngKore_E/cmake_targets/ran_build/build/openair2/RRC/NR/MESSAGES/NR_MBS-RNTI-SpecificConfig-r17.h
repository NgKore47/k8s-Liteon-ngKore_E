/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MBS_RNTI_SpecificConfig_r17_H_
#define	_NR_MBS_RNTI_SpecificConfig_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_MBS-RNTI-SpecificConfigId-r17.h"
#include <NativeEnumerated.h>
#include "NR_RNTI-Value.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17_PR {
	NR_MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17_PR_NOTHING,	/* No components present */
	NR_MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17_PR_g_RNTI,
	NR_MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17_PR_g_CS_RNTI
} NR_MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17_PR;
typedef enum NR_MBS_RNTI_SpecificConfig_r17__harq_FeedbackEnablerMulticast_r17 {
	NR_MBS_RNTI_SpecificConfig_r17__harq_FeedbackEnablerMulticast_r17_dci_enabler	= 0,
	NR_MBS_RNTI_SpecificConfig_r17__harq_FeedbackEnablerMulticast_r17_enabled	= 1
} e_NR_MBS_RNTI_SpecificConfig_r17__harq_FeedbackEnablerMulticast_r17;
typedef enum NR_MBS_RNTI_SpecificConfig_r17__harq_FeedbackOptionMulticast_r17 {
	NR_MBS_RNTI_SpecificConfig_r17__harq_FeedbackOptionMulticast_r17_ack_nack	= 0,
	NR_MBS_RNTI_SpecificConfig_r17__harq_FeedbackOptionMulticast_r17_nack_only	= 1
} e_NR_MBS_RNTI_SpecificConfig_r17__harq_FeedbackOptionMulticast_r17;
typedef enum NR_MBS_RNTI_SpecificConfig_r17__pdsch_AggregationFactor_r17 {
	NR_MBS_RNTI_SpecificConfig_r17__pdsch_AggregationFactor_r17_n2	= 0,
	NR_MBS_RNTI_SpecificConfig_r17__pdsch_AggregationFactor_r17_n4	= 1,
	NR_MBS_RNTI_SpecificConfig_r17__pdsch_AggregationFactor_r17_n8	= 2
} e_NR_MBS_RNTI_SpecificConfig_r17__pdsch_AggregationFactor_r17;

/* Forward declarations */
struct NR_SetupRelease_DRX_ConfigPTM_r17;

/* NR_MBS-RNTI-SpecificConfig-r17 */
typedef struct NR_MBS_RNTI_SpecificConfig_r17 {
	NR_MBS_RNTI_SpecificConfigId_r17_t	 mbs_RNTI_SpecificConfigId_r17;
	struct NR_MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17 {
		NR_MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17_PR present;
		union NR_MBS_RNTI_SpecificConfig_r17__NR_groupCommon_RNTI_r17_u {
			NR_RNTI_Value_t	 g_RNTI;
			NR_RNTI_Value_t	 g_CS_RNTI;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} groupCommon_RNTI_r17;
	struct NR_SetupRelease_DRX_ConfigPTM_r17	*drx_ConfigPTM_r17;	/* OPTIONAL */
	long	*harq_FeedbackEnablerMulticast_r17;	/* OPTIONAL */
	long	*harq_FeedbackOptionMulticast_r17;	/* OPTIONAL */
	long	*pdsch_AggregationFactor_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MBS_RNTI_SpecificConfig_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_harq_FeedbackEnablerMulticast_r17_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_harq_FeedbackOptionMulticast_r17_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdsch_AggregationFactor_r17_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MBS_RNTI_SpecificConfig_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MBS_RNTI_SpecificConfig_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MBS_RNTI_SpecificConfig_r17_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"

#endif	/* _NR_MBS_RNTI_SpecificConfig_r17_H_ */
#include <asn_internal.h>
