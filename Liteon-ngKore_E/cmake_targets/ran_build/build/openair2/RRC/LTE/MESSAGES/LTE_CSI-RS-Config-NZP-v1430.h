/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CSI_RS_Config_NZP_v1430_H_
#define	_LTE_CSI_RS_Config_NZP_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_NZP-TransmissionComb-r14.h"
#include "LTE_NZP-FrequencyDensity-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CSI-RS-Config-NZP-v1430 */
typedef struct LTE_CSI_RS_Config_NZP_v1430 {
	LTE_NZP_TransmissionComb_r14_t	*transmissionComb_r14;	/* OPTIONAL */
	LTE_NZP_FrequencyDensity_r14_t	*frequencyDensity_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSI_RS_Config_NZP_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_Config_NZP_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CSI_RS_Config_NZP_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSI_RS_Config_NZP_v1430_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CSI_RS_Config_NZP_v1430_H_ */
#include <asn_internal.h>
