/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_UL_DCCH_MessageType_H_
#define	_NR_UL_DCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_UL_DCCH_MessageType_PR {
	NR_UL_DCCH_MessageType_PR_NOTHING,	/* No components present */
	NR_UL_DCCH_MessageType_PR_c1,
	NR_UL_DCCH_MessageType_PR_messageClassExtension
} NR_UL_DCCH_MessageType_PR;
typedef enum NR_UL_DCCH_MessageType__c1_PR {
	NR_UL_DCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	NR_UL_DCCH_MessageType__c1_PR_measurementReport,
	NR_UL_DCCH_MessageType__c1_PR_rrcReconfigurationComplete,
	NR_UL_DCCH_MessageType__c1_PR_rrcSetupComplete,
	NR_UL_DCCH_MessageType__c1_PR_rrcReestablishmentComplete,
	NR_UL_DCCH_MessageType__c1_PR_rrcResumeComplete,
	NR_UL_DCCH_MessageType__c1_PR_securityModeComplete,
	NR_UL_DCCH_MessageType__c1_PR_securityModeFailure,
	NR_UL_DCCH_MessageType__c1_PR_ulInformationTransfer,
	NR_UL_DCCH_MessageType__c1_PR_locationMeasurementIndication,
	NR_UL_DCCH_MessageType__c1_PR_ueCapabilityInformation,
	NR_UL_DCCH_MessageType__c1_PR_counterCheckResponse,
	NR_UL_DCCH_MessageType__c1_PR_ueAssistanceInformation,
	NR_UL_DCCH_MessageType__c1_PR_failureInformation,
	NR_UL_DCCH_MessageType__c1_PR_ulInformationTransferMRDC,
	NR_UL_DCCH_MessageType__c1_PR_scgFailureInformation,
	NR_UL_DCCH_MessageType__c1_PR_scgFailureInformationEUTRA
} NR_UL_DCCH_MessageType__c1_PR;
typedef enum NR_UL_DCCH_MessageType__messageClassExtension_PR {
	NR_UL_DCCH_MessageType__messageClassExtension_PR_NOTHING,	/* No components present */
	NR_UL_DCCH_MessageType__messageClassExtension_PR_c2,
	NR_UL_DCCH_MessageType__messageClassExtension_PR_messageClassExtensionFuture_r16
} NR_UL_DCCH_MessageType__messageClassExtension_PR;
typedef enum NR_UL_DCCH_MessageType__messageClassExtension__c2_PR {
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_NOTHING,	/* No components present */
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_ulDedicatedMessageSegment_r16,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_dedicatedSIBRequest_r16,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_mcgFailureInformation_r16,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_ueInformationResponse_r16,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_sidelinkUEInformationNR_r16,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_ulInformationTransferIRAT_r16,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_iabOtherInformation_r16,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_mbsInterestIndication_r17,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_uePositioningAssistanceInfo_r17,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_measurementReportAppLayer_r17,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_spare6,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_spare5,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_spare4,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_spare3,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_spare2,
	NR_UL_DCCH_MessageType__messageClassExtension__c2_PR_spare1
} NR_UL_DCCH_MessageType__messageClassExtension__c2_PR;

/* Forward declarations */
struct NR_MeasurementReport;
struct NR_RRCReconfigurationComplete;
struct NR_RRCSetupComplete;
struct NR_RRCReestablishmentComplete;
struct NR_RRCResumeComplete;
struct NR_SecurityModeComplete;
struct NR_SecurityModeFailure;
struct NR_ULInformationTransfer;
struct NR_LocationMeasurementIndication;
struct NR_UECapabilityInformation;
struct NR_CounterCheckResponse;
struct NR_UEAssistanceInformation;
struct NR_FailureInformation;
struct NR_ULInformationTransferMRDC;
struct NR_SCGFailureInformation;
struct NR_SCGFailureInformationEUTRA;
struct NR_ULDedicatedMessageSegment_r16;
struct NR_DedicatedSIBRequest_r16;
struct NR_MCGFailureInformation_r16;
struct NR_UEInformationResponse_r16;
struct NR_SidelinkUEInformationNR_r16;
struct NR_ULInformationTransferIRAT_r16;
struct NR_IABOtherInformation_r16;
struct NR_MBSInterestIndication_r17;
struct NR_UEPositioningAssistanceInfo_r17;
struct NR_MeasurementReportAppLayer_r17;

/* NR_UL-DCCH-MessageType */
typedef struct NR_UL_DCCH_MessageType {
	NR_UL_DCCH_MessageType_PR present;
	union NR_UL_DCCH_MessageType_u {
		struct NR_UL_DCCH_MessageType__c1 {
			NR_UL_DCCH_MessageType__c1_PR present;
			union NR_UL_DCCH_MessageType__NR_c1_u {
				struct NR_MeasurementReport	*measurementReport;
				struct NR_RRCReconfigurationComplete	*rrcReconfigurationComplete;
				struct NR_RRCSetupComplete	*rrcSetupComplete;
				struct NR_RRCReestablishmentComplete	*rrcReestablishmentComplete;
				struct NR_RRCResumeComplete	*rrcResumeComplete;
				struct NR_SecurityModeComplete	*securityModeComplete;
				struct NR_SecurityModeFailure	*securityModeFailure;
				struct NR_ULInformationTransfer	*ulInformationTransfer;
				struct NR_LocationMeasurementIndication	*locationMeasurementIndication;
				struct NR_UECapabilityInformation	*ueCapabilityInformation;
				struct NR_CounterCheckResponse	*counterCheckResponse;
				struct NR_UEAssistanceInformation	*ueAssistanceInformation;
				struct NR_FailureInformation	*failureInformation;
				struct NR_ULInformationTransferMRDC	*ulInformationTransferMRDC;
				struct NR_SCGFailureInformation	*scgFailureInformation;
				struct NR_SCGFailureInformationEUTRA	*scgFailureInformationEUTRA;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *c1;
		struct NR_UL_DCCH_MessageType__messageClassExtension {
			NR_UL_DCCH_MessageType__messageClassExtension_PR present;
			union NR_UL_DCCH_MessageType__NR_messageClassExtension_u {
				struct NR_UL_DCCH_MessageType__messageClassExtension__c2 {
					NR_UL_DCCH_MessageType__messageClassExtension__c2_PR present;
					union NR_UL_DCCH_MessageType__NR_messageClassExtension__NR_c2_u {
						struct NR_ULDedicatedMessageSegment_r16	*ulDedicatedMessageSegment_r16;
						struct NR_DedicatedSIBRequest_r16	*dedicatedSIBRequest_r16;
						struct NR_MCGFailureInformation_r16	*mcgFailureInformation_r16;
						struct NR_UEInformationResponse_r16	*ueInformationResponse_r16;
						struct NR_SidelinkUEInformationNR_r16	*sidelinkUEInformationNR_r16;
						struct NR_ULInformationTransferIRAT_r16	*ulInformationTransferIRAT_r16;
						struct NR_IABOtherInformation_r16	*iabOtherInformation_r16;
						struct NR_MBSInterestIndication_r17	*mbsInterestIndication_r17;
						struct NR_UEPositioningAssistanceInfo_r17	*uePositioningAssistanceInfo_r17;
						struct NR_MeasurementReportAppLayer_r17	*measurementReportAppLayer_r17;
						NULL_t	 spare6;
						NULL_t	 spare5;
						NULL_t	 spare4;
						NULL_t	 spare3;
						NULL_t	 spare2;
						NULL_t	 spare1;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *c2;
				struct NR_UL_DCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r16 {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *messageClassExtensionFuture_r16;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UL_DCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UL_DCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_NR_UL_DCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UL_DCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_NR_UL_DCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasurementReport.h"
#include "NR_RRCReconfigurationComplete.h"
#include "NR_RRCSetupComplete.h"
#include "NR_RRCReestablishmentComplete.h"
#include "NR_RRCResumeComplete.h"
#include "NR_SecurityModeComplete.h"
#include "NR_SecurityModeFailure.h"
#include "NR_ULInformationTransfer.h"
#include "NR_LocationMeasurementIndication.h"
#include "NR_UECapabilityInformation.h"
#include "NR_CounterCheckResponse.h"
#include "NR_UEAssistanceInformation.h"
#include "NR_FailureInformation.h"
#include "NR_ULInformationTransferMRDC.h"
#include "NR_SCGFailureInformation.h"
#include "NR_SCGFailureInformationEUTRA.h"
#include "NR_ULDedicatedMessageSegment-r16.h"
#include "NR_DedicatedSIBRequest-r16.h"
#include "NR_MCGFailureInformation-r16.h"
#include "NR_UEInformationResponse-r16.h"
#include "NR_SidelinkUEInformationNR-r16.h"
#include "NR_ULInformationTransferIRAT-r16.h"
#include "NR_IABOtherInformation-r16.h"
#include "NR_MBSInterestIndication-r17.h"
#include "NR_UEPositioningAssistanceInfo-r17.h"
#include "NR_MeasurementReportAppLayer-r17.h"

#endif	/* _NR_UL_DCCH_MessageType_H_ */
#include <asn_internal.h>
