/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1310_H_
#define	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PhyLayerParameters_v1310;

/* LTE_UE-EUTRA-CapabilityAddXDD-Mode-v1310 */
typedef struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1310 {
	struct LTE_PhyLayerParameters_v1310	*phyLayerParameters_v1310;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1310_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhyLayerParameters-v1310.h"

#endif	/* _LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1310_H_ */
#include <asn_internal.h>
