/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_TCI_ActivatedConfig_r17_H_
#define	_NR_TCI_ActivatedConfig_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "NR_TCI-StateId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_TCI-ActivatedConfig-r17 */
typedef struct NR_TCI_ActivatedConfig_r17 {
	struct NR_TCI_ActivatedConfig_r17__pdcch_TCI_r17 {
		A_SEQUENCE_OF(NR_TCI_StateId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pdcch_TCI_r17;
	BIT_STRING_t	 pdsch_TCI_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_TCI_ActivatedConfig_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_TCI_ActivatedConfig_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_TCI_ActivatedConfig_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_TCI_ActivatedConfig_r17_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_TCI_ActivatedConfig_r17_H_ */
#include <asn_internal.h>
