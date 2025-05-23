/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CG_CandidateList_H_
#define	_NR_CG_CandidateList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CG_CandidateList__criticalExtensions_PR {
	NR_CG_CandidateList__criticalExtensions_PR_NOTHING,	/* No components present */
	NR_CG_CandidateList__criticalExtensions_PR_c1,
	NR_CG_CandidateList__criticalExtensions_PR_criticalExtensionsFuture
} NR_CG_CandidateList__criticalExtensions_PR;
typedef enum NR_CG_CandidateList__criticalExtensions__c1_PR {
	NR_CG_CandidateList__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	NR_CG_CandidateList__criticalExtensions__c1_PR_cg_CandidateList_r17,
	NR_CG_CandidateList__criticalExtensions__c1_PR_spare3,
	NR_CG_CandidateList__criticalExtensions__c1_PR_spare2,
	NR_CG_CandidateList__criticalExtensions__c1_PR_spare1
} NR_CG_CandidateList__criticalExtensions__c1_PR;

/* Forward declarations */
struct NR_CG_CandidateList_r17_IEs;

/* NR_CG-CandidateList */
typedef struct NR_CG_CandidateList {
	struct NR_CG_CandidateList__criticalExtensions {
		NR_CG_CandidateList__criticalExtensions_PR present;
		union NR_CG_CandidateList__NR_criticalExtensions_u {
			struct NR_CG_CandidateList__criticalExtensions__c1 {
				NR_CG_CandidateList__criticalExtensions__c1_PR present;
				union NR_CG_CandidateList__NR_criticalExtensions__NR_c1_u {
					struct NR_CG_CandidateList_r17_IEs	*cg_CandidateList_r17;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct NR_CG_CandidateList__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CG_CandidateList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CG_CandidateList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CG-CandidateList-r17-IEs.h"

#endif	/* _NR_CG_CandidateList_H_ */
#include <asn_internal.h>
