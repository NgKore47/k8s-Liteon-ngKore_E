/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_DL_DCCH_MessageType_NB_H_
#define	_LTE_DL_DCCH_MessageType_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_DLInformationTransfer-NB.h"
#include "LTE_RRCConnectionReconfiguration-NB.h"
#include "LTE_RRCConnectionRelease-NB.h"
#include "LTE_SecurityModeCommand.h"
#include "LTE_UECapabilityEnquiry-NB.h"
#include "LTE_RRCConnectionResume-NB.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DL_DCCH_MessageType_NB_PR {
	LTE_DL_DCCH_MessageType_NB_PR_NOTHING,	/* No components present */
	LTE_DL_DCCH_MessageType_NB_PR_c1,
	LTE_DL_DCCH_MessageType_NB_PR_messageClassExtension
} LTE_DL_DCCH_MessageType_NB_PR;
typedef enum LTE_DL_DCCH_MessageType_NB__c1_PR {
	LTE_DL_DCCH_MessageType_NB__c1_PR_NOTHING,	/* No components present */
	LTE_DL_DCCH_MessageType_NB__c1_PR_dlInformationTransfer_r13,
	LTE_DL_DCCH_MessageType_NB__c1_PR_rrcConnectionReconfiguration_r13,
	LTE_DL_DCCH_MessageType_NB__c1_PR_rrcConnectionRelease_r13,
	LTE_DL_DCCH_MessageType_NB__c1_PR_securityModeCommand_r13,
	LTE_DL_DCCH_MessageType_NB__c1_PR_ueCapabilityEnquiry_r13,
	LTE_DL_DCCH_MessageType_NB__c1_PR_rrcConnectionResume_r13,
	LTE_DL_DCCH_MessageType_NB__c1_PR_spare2,
	LTE_DL_DCCH_MessageType_NB__c1_PR_spare1
} LTE_DL_DCCH_MessageType_NB__c1_PR;

/* LTE_DL-DCCH-MessageType-NB */
typedef struct LTE_DL_DCCH_MessageType_NB {
	LTE_DL_DCCH_MessageType_NB_PR present;
	union LTE_DL_DCCH_MessageType_NB_u {
		struct LTE_DL_DCCH_MessageType_NB__c1 {
			LTE_DL_DCCH_MessageType_NB__c1_PR present;
			union LTE_DL_DCCH_MessageType_NB__LTE_c1_u {
				LTE_DLInformationTransfer_NB_t	 dlInformationTransfer_r13;
				LTE_RRCConnectionReconfiguration_NB_t	 rrcConnectionReconfiguration_r13;
				LTE_RRCConnectionRelease_NB_t	 rrcConnectionRelease_r13;
				LTE_SecurityModeCommand_t	 securityModeCommand_r13;
				LTE_UECapabilityEnquiry_NB_t	 ueCapabilityEnquiry_r13;
				LTE_RRCConnectionResume_NB_t	 rrcConnectionResume_r13;
				NULL_t	 spare2;
				NULL_t	 spare1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct LTE_DL_DCCH_MessageType_NB__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DL_DCCH_MessageType_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DL_DCCH_MessageType_NB;
extern asn_CHOICE_specifics_t asn_SPC_LTE_DL_DCCH_MessageType_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DL_DCCH_MessageType_NB_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_DL_DCCH_MessageType_NB_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DL_DCCH_MessageType_NB_H_ */
#include <asn_internal.h>
