/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_FreqPriorityNR_r15_H_
#define	_LTE_FreqPriorityNR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueNR-r15.h"
#include "LTE_CellReselectionPriority.h"
#include "LTE_CellReselectionSubPriority-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_FreqPriorityNR-r15 */
typedef struct LTE_FreqPriorityNR_r15 {
	LTE_ARFCN_ValueNR_r15_t	 carrierFreq_r15;
	LTE_CellReselectionPriority_t	 cellReselectionPriority_r15;
	LTE_CellReselectionSubPriority_r13_t	*cellReselectionSubPriority_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_FreqPriorityNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_FreqPriorityNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_FreqPriorityNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_FreqPriorityNR_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_FreqPriorityNR_r15_H_ */
#include <asn_internal.h>
