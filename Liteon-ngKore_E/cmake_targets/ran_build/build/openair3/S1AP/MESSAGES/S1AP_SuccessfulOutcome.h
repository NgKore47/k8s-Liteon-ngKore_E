/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Descriptions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_SuccessfulOutcome_H_
#define	_S1AP_SuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_ProcedureCode.h"
#include "S1AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "S1AP_HandoverRequired.h"
#include "S1AP_HandoverCommand.h"
#include "S1AP_HandoverPreparationFailure.h"
#include "S1AP_HandoverRequest.h"
#include "S1AP_HandoverRequestAcknowledge.h"
#include "S1AP_HandoverFailure.h"
#include "S1AP_PathSwitchRequest.h"
#include "S1AP_PathSwitchRequestAcknowledge.h"
#include "S1AP_PathSwitchRequestFailure.h"
#include "S1AP_E-RABSetupRequest.h"
#include "S1AP_E-RABSetupResponse.h"
#include "S1AP_E-RABModifyRequest.h"
#include "S1AP_E-RABModifyResponse.h"
#include "S1AP_E-RABReleaseCommand.h"
#include "S1AP_E-RABReleaseResponse.h"
#include "S1AP_InitialContextSetupRequest.h"
#include "S1AP_InitialContextSetupResponse.h"
#include "S1AP_InitialContextSetupFailure.h"
#include "S1AP_HandoverCancel.h"
#include "S1AP_HandoverCancelAcknowledge.h"
#include "S1AP_KillRequest.h"
#include "S1AP_KillResponse.h"
#include "S1AP_Reset.h"
#include "S1AP_ResetAcknowledge.h"
#include "S1AP_S1SetupRequest.h"
#include "S1AP_S1SetupResponse.h"
#include "S1AP_S1SetupFailure.h"
#include "S1AP_UEContextModificationRequest.h"
#include "S1AP_UEContextModificationResponse.h"
#include "S1AP_UEContextModificationFailure.h"
#include "S1AP_UEContextReleaseCommand.h"
#include "S1AP_UEContextReleaseComplete.h"
#include "S1AP_ENBConfigurationUpdate.h"
#include "S1AP_ENBConfigurationUpdateAcknowledge.h"
#include "S1AP_ENBConfigurationUpdateFailure.h"
#include "S1AP_MMEConfigurationUpdate.h"
#include "S1AP_MMEConfigurationUpdateAcknowledge.h"
#include "S1AP_MMEConfigurationUpdateFailure.h"
#include "S1AP_WriteReplaceWarningRequest.h"
#include "S1AP_WriteReplaceWarningResponse.h"
#include "S1AP_UERadioCapabilityMatchRequest.h"
#include "S1AP_UERadioCapabilityMatchResponse.h"
#include "S1AP_E-RABModificationIndication.h"
#include "S1AP_E-RABModificationConfirm.h"
#include "S1AP_UEContextModificationIndication.h"
#include "S1AP_UEContextModificationConfirm.h"
#include "S1AP_UEContextSuspendRequest.h"
#include "S1AP_UEContextSuspendResponse.h"
#include "S1AP_UEContextResumeRequest.h"
#include "S1AP_UEContextResumeResponse.h"
#include "S1AP_UEContextResumeFailure.h"
#include "S1AP_HandoverNotify.h"
#include "S1AP_E-RABReleaseIndication.h"
#include "S1AP_Paging.h"
#include "S1AP_DownlinkNASTransport.h"
#include "S1AP_InitialUEMessage.h"
#include "S1AP_UplinkNASTransport.h"
#include "S1AP_ErrorIndication.h"
#include "S1AP_NASNonDeliveryIndication.h"
#include "S1AP_UEContextReleaseRequest.h"
#include "S1AP_DownlinkS1cdma2000tunnelling.h"
#include "S1AP_UplinkS1cdma2000tunnelling.h"
#include "S1AP_UECapabilityInfoIndication.h"
#include "S1AP_ENBStatusTransfer.h"
#include "S1AP_MMEStatusTransfer.h"
#include "S1AP_DeactivateTrace.h"
#include "S1AP_TraceStart.h"
#include "S1AP_TraceFailureIndication.h"
#include "S1AP_CellTrafficTrace.h"
#include "S1AP_LocationReportingControl.h"
#include "S1AP_LocationReportingFailureIndication.h"
#include "S1AP_LocationReport.h"
#include "S1AP_OverloadStart.h"
#include "S1AP_OverloadStop.h"
#include "S1AP_ENBDirectInformationTransfer.h"
#include "S1AP_MMEDirectInformationTransfer.h"
#include "S1AP_ENBConfigurationTransfer.h"
#include "S1AP_MMEConfigurationTransfer.h"
#include "S1AP_PrivateMessage.h"
#include "S1AP_DownlinkUEAssociatedLPPaTransport.h"
#include "S1AP_UplinkUEAssociatedLPPaTransport.h"
#include "S1AP_DownlinkNonUEAssociatedLPPaTransport.h"
#include "S1AP_UplinkNonUEAssociatedLPPaTransport.h"
#include "S1AP_PWSRestartIndication.h"
#include "S1AP_RerouteNASRequest.h"
#include "S1AP_PWSFailureIndication.h"
#include "S1AP_ConnectionEstablishmentIndication.h"
#include "S1AP_NASDeliveryIndication.h"
#include "S1AP_RetrieveUEInformation.h"
#include "S1AP_UEInformationTransfer.h"
#include "S1AP_ENBCPRelocationIndication.h"
#include "S1AP_MMECPRelocationIndication.h"
#include "S1AP_SecondaryRATDataUsageReport.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_SuccessfulOutcome__value_PR {
	S1AP_SuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	S1AP_SuccessfulOutcome__value_PR_HandoverCommand,
	S1AP_SuccessfulOutcome__value_PR_HandoverRequestAcknowledge,
	S1AP_SuccessfulOutcome__value_PR_PathSwitchRequestAcknowledge,
	S1AP_SuccessfulOutcome__value_PR_E_RABSetupResponse,
	S1AP_SuccessfulOutcome__value_PR_E_RABModifyResponse,
	S1AP_SuccessfulOutcome__value_PR_E_RABReleaseResponse,
	S1AP_SuccessfulOutcome__value_PR_InitialContextSetupResponse,
	S1AP_SuccessfulOutcome__value_PR_HandoverCancelAcknowledge,
	S1AP_SuccessfulOutcome__value_PR_KillResponse,
	S1AP_SuccessfulOutcome__value_PR_ResetAcknowledge,
	S1AP_SuccessfulOutcome__value_PR_S1SetupResponse,
	S1AP_SuccessfulOutcome__value_PR_UEContextModificationResponse,
	S1AP_SuccessfulOutcome__value_PR_UEContextReleaseComplete,
	S1AP_SuccessfulOutcome__value_PR_ENBConfigurationUpdateAcknowledge,
	S1AP_SuccessfulOutcome__value_PR_MMEConfigurationUpdateAcknowledge,
	S1AP_SuccessfulOutcome__value_PR_WriteReplaceWarningResponse,
	S1AP_SuccessfulOutcome__value_PR_UERadioCapabilityMatchResponse,
	S1AP_SuccessfulOutcome__value_PR_E_RABModificationConfirm,
	S1AP_SuccessfulOutcome__value_PR_UEContextModificationConfirm,
	S1AP_SuccessfulOutcome__value_PR_UEContextSuspendResponse,
	S1AP_SuccessfulOutcome__value_PR_UEContextResumeResponse
} S1AP_SuccessfulOutcome__value_PR;

/* S1AP_SuccessfulOutcome */
typedef struct S1AP_SuccessfulOutcome {
	S1AP_ProcedureCode_t	 procedureCode;
	S1AP_Criticality_t	 criticality;
	struct S1AP_SuccessfulOutcome__value {
		S1AP_SuccessfulOutcome__value_PR present;
		union S1AP_SuccessfulOutcome__S1AP_value_u {
			S1AP_HandoverCommand_t	 HandoverCommand;
			S1AP_HandoverRequestAcknowledge_t	 HandoverRequestAcknowledge;
			S1AP_PathSwitchRequestAcknowledge_t	 PathSwitchRequestAcknowledge;
			S1AP_E_RABSetupResponse_t	 E_RABSetupResponse;
			S1AP_E_RABModifyResponse_t	 E_RABModifyResponse;
			S1AP_E_RABReleaseResponse_t	 E_RABReleaseResponse;
			S1AP_InitialContextSetupResponse_t	 InitialContextSetupResponse;
			S1AP_HandoverCancelAcknowledge_t	 HandoverCancelAcknowledge;
			S1AP_KillResponse_t	 KillResponse;
			S1AP_ResetAcknowledge_t	 ResetAcknowledge;
			S1AP_S1SetupResponse_t	 S1SetupResponse;
			S1AP_UEContextModificationResponse_t	 UEContextModificationResponse;
			S1AP_UEContextReleaseComplete_t	 UEContextReleaseComplete;
			S1AP_ENBConfigurationUpdateAcknowledge_t	 ENBConfigurationUpdateAcknowledge;
			S1AP_MMEConfigurationUpdateAcknowledge_t	 MMEConfigurationUpdateAcknowledge;
			S1AP_WriteReplaceWarningResponse_t	 WriteReplaceWarningResponse;
			S1AP_UERadioCapabilityMatchResponse_t	 UERadioCapabilityMatchResponse;
			S1AP_E_RABModificationConfirm_t	 E_RABModificationConfirm;
			S1AP_UEContextModificationConfirm_t	 UEContextModificationConfirm;
			S1AP_UEContextSuspendResponse_t	 UEContextSuspendResponse;
			S1AP_UEContextResumeResponse_t	 UEContextResumeResponse;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_SuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_SuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_SuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SuccessfulOutcome_H_ */
#include <asn_internal.h>
