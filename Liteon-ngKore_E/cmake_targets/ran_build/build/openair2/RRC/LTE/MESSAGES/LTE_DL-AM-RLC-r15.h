/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_DL_AM_RLC_r15_H_
#define	_LTE_DL_AM_RLC_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_T-Reordering.h"
#include "LTE_T-StatusProhibit.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_DL-AM-RLC-r15 */
typedef struct LTE_DL_AM_RLC_r15 {
	LTE_T_Reordering_t	 t_Reordering_r15;
	LTE_T_StatusProhibit_t	 t_StatusProhibit_r15;
	BOOLEAN_t	 extended_RLC_LI_Field_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DL_AM_RLC_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DL_AM_RLC_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_DL_AM_RLC_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DL_AM_RLC_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DL_AM_RLC_r15_H_ */
#include <asn_internal.h>
