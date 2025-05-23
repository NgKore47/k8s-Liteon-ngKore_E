/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UE_EUTRA_Capability_v1440_IEs_H_
#define	_LTE_UE_EUTRA_Capability_v1440_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_LWA-Parameters-v1440.h"
#include "LTE_MAC-Parameters-v1440.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_UE_EUTRA_Capability_v1450_IEs;

/* LTE_UE-EUTRA-Capability-v1440-IEs */
typedef struct LTE_UE_EUTRA_Capability_v1440_IEs {
	LTE_LWA_Parameters_v1440_t	 lwa_Parameters_v1440;
	LTE_MAC_Parameters_v1440_t	 mac_Parameters_v1440;
	struct LTE_UE_EUTRA_Capability_v1450_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_v1440_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1440_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1440_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1440_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_UE-EUTRA-Capability-v1450-IEs.h"

#endif	/* _LTE_UE_EUTRA_Capability_v1440_IEs_H_ */
#include <asn_internal.h>
