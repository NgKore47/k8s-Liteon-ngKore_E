/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_ResultsPerCSI_RS_Index_H_
#define	_NR_ResultsPerCSI_RS_Index_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_CSI-RS-Index.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_MeasQuantityResults;

/* NR_ResultsPerCSI-RS-Index */
typedef struct NR_ResultsPerCSI_RS_Index {
	NR_CSI_RS_Index_t	 csi_RS_Index;
	struct NR_MeasQuantityResults	*csi_RS_Results;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ResultsPerCSI_RS_Index_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_ResultsPerCSI_RS_Index;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ResultsPerCSI_RS_Index_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ResultsPerCSI_RS_Index_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasQuantityResults.h"

#endif	/* _NR_ResultsPerCSI_RS_Index_H_ */
#include <asn_internal.h>
