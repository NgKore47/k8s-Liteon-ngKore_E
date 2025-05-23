/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PUSCH_ConfigCommon_v1270_H_
#define	_LTE_PUSCH_ConfigCommon_v1270_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUSCH_ConfigCommon_v1270__enable64QAM_v1270 {
	LTE_PUSCH_ConfigCommon_v1270__enable64QAM_v1270_true	= 0
} e_LTE_PUSCH_ConfigCommon_v1270__enable64QAM_v1270;

/* LTE_PUSCH-ConfigCommon-v1270 */
typedef struct LTE_PUSCH_ConfigCommon_v1270 {
	long	 enable64QAM_v1270;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUSCH_ConfigCommon_v1270_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_enable64QAM_v1270_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUSCH_ConfigCommon_v1270;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUSCH_ConfigCommon_v1270_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUSCH_ConfigCommon_v1270_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUSCH_ConfigCommon_v1270_H_ */
#include <asn_internal.h>
