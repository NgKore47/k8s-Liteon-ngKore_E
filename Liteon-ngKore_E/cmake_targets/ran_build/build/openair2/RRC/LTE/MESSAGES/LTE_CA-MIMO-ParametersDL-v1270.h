/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CA_MIMO_ParametersDL_v1270_H_
#define	_LTE_CA_MIMO_ParametersDL_v1270_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_IntraBandContiguousCC_Info_r12;

/* LTE_CA-MIMO-ParametersDL-v1270 */
typedef struct LTE_CA_MIMO_ParametersDL_v1270 {
	struct LTE_CA_MIMO_ParametersDL_v1270__intraBandContiguousCC_InfoList_r12 {
		A_SEQUENCE_OF(struct LTE_IntraBandContiguousCC_Info_r12) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} intraBandContiguousCC_InfoList_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CA_MIMO_ParametersDL_v1270_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CA_MIMO_ParametersDL_v1270;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CA_MIMO_ParametersDL_v1270_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CA_MIMO_ParametersDL_v1270_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_IntraBandContiguousCC-Info-r12.h"

#endif	/* _LTE_CA_MIMO_ParametersDL_v1270_H_ */
#include <asn_internal.h>
