/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_ResultsPerSSB_IndexList_H_
#define	_NR_ResultsPerSSB_IndexList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_ResultsPerSSB_Index;

/* NR_ResultsPerSSB-IndexList */
typedef struct NR_ResultsPerSSB_IndexList {
	A_SEQUENCE_OF(struct NR_ResultsPerSSB_Index) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ResultsPerSSB_IndexList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_ResultsPerSSB_IndexList;
extern asn_SET_OF_specifics_t asn_SPC_NR_ResultsPerSSB_IndexList_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ResultsPerSSB_IndexList_1[1];
extern asn_per_constraints_t asn_PER_type_NR_ResultsPerSSB_IndexList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_ResultsPerSSB-Index.h"

#endif	/* _NR_ResultsPerSSB_IndexList_H_ */
#include <asn_internal.h>
