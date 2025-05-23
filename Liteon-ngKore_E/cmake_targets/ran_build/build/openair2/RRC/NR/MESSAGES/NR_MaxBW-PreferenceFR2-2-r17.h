/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MaxBW_PreferenceFR2_2_r17_H_
#define	_NR_MaxBW_PreferenceFR2_2_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ReducedAggregatedBandwidth-r17.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_MaxBW-PreferenceFR2-2-r17 */
typedef struct NR_MaxBW_PreferenceFR2_2_r17 {
	struct NR_MaxBW_PreferenceFR2_2_r17__reducedMaxBW_FR2_2_r17 {
		NR_ReducedAggregatedBandwidth_r17_t	*reducedBW_FR2_2_DL_r17;	/* OPTIONAL */
		NR_ReducedAggregatedBandwidth_r17_t	*reducedBW_FR2_2_UL_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *reducedMaxBW_FR2_2_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MaxBW_PreferenceFR2_2_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MaxBW_PreferenceFR2_2_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MaxBW_PreferenceFR2_2_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MaxBW_PreferenceFR2_2_r17_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MaxBW_PreferenceFR2_2_r17_H_ */
#include <asn_internal.h>
