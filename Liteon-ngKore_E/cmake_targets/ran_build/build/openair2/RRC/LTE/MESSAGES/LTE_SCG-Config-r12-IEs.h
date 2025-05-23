/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SCG_Config_r12_IEs_H_
#define	_LTE_SCG_Config_r12_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SCG_ConfigPartSCG_r12;
struct LTE_SCG_Config_v12x0_IEs;

/* LTE_SCG-Config-r12-IEs */
typedef struct LTE_SCG_Config_r12_IEs {
	struct LTE_SCG_ConfigPartSCG_r12	*scg_RadioConfig_r12;	/* OPTIONAL */
	struct LTE_SCG_Config_v12x0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SCG_Config_r12_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SCG_Config_r12_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SCG_Config_r12_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SCG_Config_r12_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SCG-ConfigPartSCG-r12.h"
#include "LTE_SCG-Config-v12x0-IEs.h"

#endif	/* _LTE_SCG_Config_r12_IEs_H_ */
#include <asn_internal.h>
