/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SystemInformationBlockType6_v8h0_IEs_H_
#define	_LTE_SystemInformationBlockType6_v8h0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CarrierFreqInfoUTRA_FDD_v8h0;

/* LTE_SystemInformationBlockType6-v8h0-IEs */
typedef struct LTE_SystemInformationBlockType6_v8h0_IEs {
	struct LTE_SystemInformationBlockType6_v8h0_IEs__carrierFreqListUTRA_FDD_v8h0 {
		A_SEQUENCE_OF(struct LTE_CarrierFreqInfoUTRA_FDD_v8h0) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *carrierFreqListUTRA_FDD_v8h0;
	struct LTE_SystemInformationBlockType6_v8h0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType6_v8h0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType6_v8h0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CarrierFreqInfoUTRA-FDD-v8h0.h"

#endif	/* _LTE_SystemInformationBlockType6_v8h0_IEs_H_ */
#include <asn_internal.h>
