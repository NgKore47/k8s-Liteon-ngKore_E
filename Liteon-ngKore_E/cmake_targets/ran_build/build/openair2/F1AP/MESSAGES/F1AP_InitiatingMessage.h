/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Descriptions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_InitiatingMessage_H_
#define	_F1AP_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_ProcedureCode.h"
#include "F1AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "F1AP_Reset.h"
#include "F1AP_ResetAcknowledge.h"
#include "F1AP_F1SetupRequest.h"
#include "F1AP_F1SetupResponse.h"
#include "F1AP_F1SetupFailure.h"
#include "F1AP_GNBDUConfigurationUpdate.h"
#include "F1AP_GNBDUConfigurationUpdateAcknowledge.h"
#include "F1AP_GNBDUConfigurationUpdateFailure.h"
#include "F1AP_GNBCUConfigurationUpdate.h"
#include "F1AP_GNBCUConfigurationUpdateAcknowledge.h"
#include "F1AP_GNBCUConfigurationUpdateFailure.h"
#include "F1AP_UEContextSetupRequest.h"
#include "F1AP_UEContextSetupResponse.h"
#include "F1AP_UEContextSetupFailure.h"
#include "F1AP_UEContextReleaseCommand.h"
#include "F1AP_UEContextReleaseComplete.h"
#include "F1AP_UEContextModificationRequest.h"
#include "F1AP_UEContextModificationResponse.h"
#include "F1AP_UEContextModificationFailure.h"
#include "F1AP_UEContextModificationRequired.h"
#include "F1AP_UEContextModificationConfirm.h"
#include "F1AP_UEContextModificationRefuse.h"
#include "F1AP_WriteReplaceWarningRequest.h"
#include "F1AP_WriteReplaceWarningResponse.h"
#include "F1AP_PWSCancelRequest.h"
#include "F1AP_PWSCancelResponse.h"
#include "F1AP_GNBDUResourceCoordinationRequest.h"
#include "F1AP_GNBDUResourceCoordinationResponse.h"
#include "F1AP_F1RemovalRequest.h"
#include "F1AP_F1RemovalResponse.h"
#include "F1AP_F1RemovalFailure.h"
#include "F1AP_BAPMappingConfiguration.h"
#include "F1AP_BAPMappingConfigurationAcknowledge.h"
#include "F1AP_GNBDUResourceConfiguration.h"
#include "F1AP_GNBDUResourceConfigurationAcknowledge.h"
#include "F1AP_IABTNLAddressRequest.h"
#include "F1AP_IABTNLAddressResponse.h"
#include "F1AP_IABUPConfigurationUpdateRequest.h"
#include "F1AP_IABUPConfigurationUpdateResponse.h"
#include "F1AP_IABUPConfigurationUpdateFailure.h"
#include "F1AP_ResourceStatusRequest.h"
#include "F1AP_ResourceStatusResponse.h"
#include "F1AP_ResourceStatusFailure.h"
#include "F1AP_PositioningMeasurementRequest.h"
#include "F1AP_PositioningMeasurementResponse.h"
#include "F1AP_PositioningMeasurementFailure.h"
#include "F1AP_TRPInformationRequest.h"
#include "F1AP_TRPInformationResponse.h"
#include "F1AP_TRPInformationFailure.h"
#include "F1AP_PositioningInformationRequest.h"
#include "F1AP_PositioningInformationResponse.h"
#include "F1AP_PositioningInformationFailure.h"
#include "F1AP_PositioningActivationRequest.h"
#include "F1AP_PositioningActivationResponse.h"
#include "F1AP_PositioningActivationFailure.h"
#include "F1AP_E-CIDMeasurementInitiationRequest.h"
#include "F1AP_E-CIDMeasurementInitiationResponse.h"
#include "F1AP_E-CIDMeasurementInitiationFailure.h"
#include "F1AP_ErrorIndication.h"
#include "F1AP_UEContextReleaseRequest.h"
#include "F1AP_DLRRCMessageTransfer.h"
#include "F1AP_ULRRCMessageTransfer.h"
#include "F1AP_UEInactivityNotification.h"
#include "F1AP_PrivateMessage.h"
#include "F1AP_InitialULRRCMessageTransfer.h"
#include "F1AP_SystemInformationDeliveryCommand.h"
#include "F1AP_Paging.h"
#include "F1AP_Notify.h"
#include "F1AP_PWSRestartIndication.h"
#include "F1AP_PWSFailureIndication.h"
#include "F1AP_GNBDUStatusIndication.h"
#include "F1AP_RRCDeliveryReport.h"
#include "F1AP_NetworkAccessRateReduction.h"
#include "F1AP_TraceStart.h"
#include "F1AP_DeactivateTrace.h"
#include "F1AP_DUCURadioInformationTransfer.h"
#include "F1AP_CUDURadioInformationTransfer.h"
#include "F1AP_ResourceStatusUpdate.h"
#include "F1AP_AccessAndMobilityIndication.h"
#include "F1AP_ReferenceTimeInformationReportingControl.h"
#include "F1AP_ReferenceTimeInformationReport.h"
#include "F1AP_AccessSuccess.h"
#include "F1AP_CellTrafficTrace.h"
#include "F1AP_PositioningAssistanceInformationControl.h"
#include "F1AP_PositioningAssistanceInformationFeedback.h"
#include "F1AP_PositioningMeasurementReport.h"
#include "F1AP_PositioningMeasurementAbort.h"
#include "F1AP_PositioningMeasurementFailureIndication.h"
#include "F1AP_PositioningMeasurementUpdate.h"
#include "F1AP_PositioningDeactivation.h"
#include "F1AP_E-CIDMeasurementFailureIndication.h"
#include "F1AP_E-CIDMeasurementReport.h"
#include "F1AP_E-CIDMeasurementTerminationCommand.h"
#include "F1AP_PositioningInformationUpdate.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_InitiatingMessage__value_PR {
	F1AP_InitiatingMessage__value_PR_NOTHING,	/* No components present */
	F1AP_InitiatingMessage__value_PR_Reset,
	F1AP_InitiatingMessage__value_PR_F1SetupRequest,
	F1AP_InitiatingMessage__value_PR_GNBDUConfigurationUpdate,
	F1AP_InitiatingMessage__value_PR_GNBCUConfigurationUpdate,
	F1AP_InitiatingMessage__value_PR_UEContextSetupRequest,
	F1AP_InitiatingMessage__value_PR_UEContextReleaseCommand,
	F1AP_InitiatingMessage__value_PR_UEContextModificationRequest,
	F1AP_InitiatingMessage__value_PR_UEContextModificationRequired,
	F1AP_InitiatingMessage__value_PR_WriteReplaceWarningRequest,
	F1AP_InitiatingMessage__value_PR_PWSCancelRequest,
	F1AP_InitiatingMessage__value_PR_GNBDUResourceCoordinationRequest,
	F1AP_InitiatingMessage__value_PR_F1RemovalRequest,
	F1AP_InitiatingMessage__value_PR_BAPMappingConfiguration,
	F1AP_InitiatingMessage__value_PR_GNBDUResourceConfiguration,
	F1AP_InitiatingMessage__value_PR_IABTNLAddressRequest,
	F1AP_InitiatingMessage__value_PR_IABUPConfigurationUpdateRequest,
	F1AP_InitiatingMessage__value_PR_ResourceStatusRequest,
	F1AP_InitiatingMessage__value_PR_PositioningMeasurementRequest,
	F1AP_InitiatingMessage__value_PR_TRPInformationRequest,
	F1AP_InitiatingMessage__value_PR_PositioningInformationRequest,
	F1AP_InitiatingMessage__value_PR_PositioningActivationRequest,
	F1AP_InitiatingMessage__value_PR_E_CIDMeasurementInitiationRequest,
	F1AP_InitiatingMessage__value_PR_ErrorIndication,
	F1AP_InitiatingMessage__value_PR_UEContextReleaseRequest,
	F1AP_InitiatingMessage__value_PR_DLRRCMessageTransfer,
	F1AP_InitiatingMessage__value_PR_ULRRCMessageTransfer,
	F1AP_InitiatingMessage__value_PR_UEInactivityNotification,
	F1AP_InitiatingMessage__value_PR_PrivateMessage,
	F1AP_InitiatingMessage__value_PR_InitialULRRCMessageTransfer,
	F1AP_InitiatingMessage__value_PR_SystemInformationDeliveryCommand,
	F1AP_InitiatingMessage__value_PR_Paging,
	F1AP_InitiatingMessage__value_PR_Notify,
	F1AP_InitiatingMessage__value_PR_PWSRestartIndication,
	F1AP_InitiatingMessage__value_PR_PWSFailureIndication,
	F1AP_InitiatingMessage__value_PR_GNBDUStatusIndication,
	F1AP_InitiatingMessage__value_PR_RRCDeliveryReport,
	F1AP_InitiatingMessage__value_PR_NetworkAccessRateReduction,
	F1AP_InitiatingMessage__value_PR_TraceStart,
	F1AP_InitiatingMessage__value_PR_DeactivateTrace,
	F1AP_InitiatingMessage__value_PR_DUCURadioInformationTransfer,
	F1AP_InitiatingMessage__value_PR_CUDURadioInformationTransfer,
	F1AP_InitiatingMessage__value_PR_ResourceStatusUpdate,
	F1AP_InitiatingMessage__value_PR_AccessAndMobilityIndication,
	F1AP_InitiatingMessage__value_PR_ReferenceTimeInformationReportingControl,
	F1AP_InitiatingMessage__value_PR_ReferenceTimeInformationReport,
	F1AP_InitiatingMessage__value_PR_AccessSuccess,
	F1AP_InitiatingMessage__value_PR_CellTrafficTrace,
	F1AP_InitiatingMessage__value_PR_PositioningAssistanceInformationControl,
	F1AP_InitiatingMessage__value_PR_PositioningAssistanceInformationFeedback,
	F1AP_InitiatingMessage__value_PR_PositioningMeasurementReport,
	F1AP_InitiatingMessage__value_PR_PositioningMeasurementAbort,
	F1AP_InitiatingMessage__value_PR_PositioningMeasurementFailureIndication,
	F1AP_InitiatingMessage__value_PR_PositioningMeasurementUpdate,
	F1AP_InitiatingMessage__value_PR_PositioningDeactivation,
	F1AP_InitiatingMessage__value_PR_E_CIDMeasurementFailureIndication,
	F1AP_InitiatingMessage__value_PR_E_CIDMeasurementReport,
	F1AP_InitiatingMessage__value_PR_E_CIDMeasurementTerminationCommand,
	F1AP_InitiatingMessage__value_PR_PositioningInformationUpdate
} F1AP_InitiatingMessage__value_PR;

/* F1AP_InitiatingMessage */
typedef struct F1AP_InitiatingMessage {
	F1AP_ProcedureCode_t	 procedureCode;
	F1AP_Criticality_t	 criticality;
	struct F1AP_InitiatingMessage__value {
		F1AP_InitiatingMessage__value_PR present;
		union F1AP_InitiatingMessage__F1AP_value_u {
			F1AP_Reset_t	 Reset;
			F1AP_F1SetupRequest_t	 F1SetupRequest;
			F1AP_GNBDUConfigurationUpdate_t	 GNBDUConfigurationUpdate;
			F1AP_GNBCUConfigurationUpdate_t	 GNBCUConfigurationUpdate;
			F1AP_UEContextSetupRequest_t	 UEContextSetupRequest;
			F1AP_UEContextReleaseCommand_t	 UEContextReleaseCommand;
			F1AP_UEContextModificationRequest_t	 UEContextModificationRequest;
			F1AP_UEContextModificationRequired_t	 UEContextModificationRequired;
			F1AP_WriteReplaceWarningRequest_t	 WriteReplaceWarningRequest;
			F1AP_PWSCancelRequest_t	 PWSCancelRequest;
			F1AP_GNBDUResourceCoordinationRequest_t	 GNBDUResourceCoordinationRequest;
			F1AP_F1RemovalRequest_t	 F1RemovalRequest;
			F1AP_BAPMappingConfiguration_t	 BAPMappingConfiguration;
			F1AP_GNBDUResourceConfiguration_t	 GNBDUResourceConfiguration;
			F1AP_IABTNLAddressRequest_t	 IABTNLAddressRequest;
			F1AP_IABUPConfigurationUpdateRequest_t	 IABUPConfigurationUpdateRequest;
			F1AP_ResourceStatusRequest_t	 ResourceStatusRequest;
			F1AP_PositioningMeasurementRequest_t	 PositioningMeasurementRequest;
			F1AP_TRPInformationRequest_t	 TRPInformationRequest;
			F1AP_PositioningInformationRequest_t	 PositioningInformationRequest;
			F1AP_PositioningActivationRequest_t	 PositioningActivationRequest;
			F1AP_E_CIDMeasurementInitiationRequest_t	 E_CIDMeasurementInitiationRequest;
			F1AP_ErrorIndication_t	 ErrorIndication;
			F1AP_UEContextReleaseRequest_t	 UEContextReleaseRequest;
			F1AP_DLRRCMessageTransfer_t	 DLRRCMessageTransfer;
			F1AP_ULRRCMessageTransfer_t	 ULRRCMessageTransfer;
			F1AP_UEInactivityNotification_t	 UEInactivityNotification;
			F1AP_PrivateMessage_t	 PrivateMessage;
			F1AP_InitialULRRCMessageTransfer_t	 InitialULRRCMessageTransfer;
			F1AP_SystemInformationDeliveryCommand_t	 SystemInformationDeliveryCommand;
			F1AP_Paging_t	 Paging;
			F1AP_Notify_t	 Notify;
			F1AP_PWSRestartIndication_t	 PWSRestartIndication;
			F1AP_PWSFailureIndication_t	 PWSFailureIndication;
			F1AP_GNBDUStatusIndication_t	 GNBDUStatusIndication;
			F1AP_RRCDeliveryReport_t	 RRCDeliveryReport;
			F1AP_NetworkAccessRateReduction_t	 NetworkAccessRateReduction;
			F1AP_TraceStart_t	 TraceStart;
			F1AP_DeactivateTrace_t	 DeactivateTrace;
			F1AP_DUCURadioInformationTransfer_t	 DUCURadioInformationTransfer;
			F1AP_CUDURadioInformationTransfer_t	 CUDURadioInformationTransfer;
			F1AP_ResourceStatusUpdate_t	 ResourceStatusUpdate;
			F1AP_AccessAndMobilityIndication_t	 AccessAndMobilityIndication;
			F1AP_ReferenceTimeInformationReportingControl_t	 ReferenceTimeInformationReportingControl;
			F1AP_ReferenceTimeInformationReport_t	 ReferenceTimeInformationReport;
			F1AP_AccessSuccess_t	 AccessSuccess;
			F1AP_CellTrafficTrace_t	 CellTrafficTrace;
			F1AP_PositioningAssistanceInformationControl_t	 PositioningAssistanceInformationControl;
			F1AP_PositioningAssistanceInformationFeedback_t	 PositioningAssistanceInformationFeedback;
			F1AP_PositioningMeasurementReport_t	 PositioningMeasurementReport;
			F1AP_PositioningMeasurementAbort_t	 PositioningMeasurementAbort;
			F1AP_PositioningMeasurementFailureIndication_t	 PositioningMeasurementFailureIndication;
			F1AP_PositioningMeasurementUpdate_t	 PositioningMeasurementUpdate;
			F1AP_PositioningDeactivation_t	 PositioningDeactivation;
			F1AP_E_CIDMeasurementFailureIndication_t	 E_CIDMeasurementFailureIndication;
			F1AP_E_CIDMeasurementReport_t	 E_CIDMeasurementReport;
			F1AP_E_CIDMeasurementTerminationCommand_t	 E_CIDMeasurementTerminationCommand;
			F1AP_PositioningInformationUpdate_t	 PositioningInformationUpdate;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_InitiatingMessage_H_ */
#include <asn_internal.h>
