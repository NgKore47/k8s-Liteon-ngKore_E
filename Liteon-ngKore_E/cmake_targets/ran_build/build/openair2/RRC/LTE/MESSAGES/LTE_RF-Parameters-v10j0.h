/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RF_Parameters_v10j0_H_
#define	_LTE_RF_Parameters_v10j0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RF_Parameters_v10j0__multiNS_Pmax_r10 {
	LTE_RF_Parameters_v10j0__multiNS_Pmax_r10_supported	= 0
} e_LTE_RF_Parameters_v10j0__multiNS_Pmax_r10;

/* LTE_RF-Parameters-v10j0 */
typedef struct LTE_RF_Parameters_v10j0 {
	long	*multiNS_Pmax_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RF_Parameters_v10j0_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_multiNS_Pmax_r10_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RF_Parameters_v10j0;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RF_Parameters_v10j0_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RF_Parameters_v10j0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RF_Parameters_v10j0_H_ */
#include <asn_internal.h>
