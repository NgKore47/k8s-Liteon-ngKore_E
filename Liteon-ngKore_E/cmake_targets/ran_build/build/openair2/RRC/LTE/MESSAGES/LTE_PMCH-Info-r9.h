/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PMCH_Info_r9_H_
#define	_LTE_PMCH_Info_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PMCH-Config-r9.h"
#include "LTE_MBMS-SessionInfoList-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_PMCH-Info-r9 */
typedef struct LTE_PMCH_Info_r9 {
	LTE_PMCH_Config_r9_t	 pmch_Config_r9;
	LTE_MBMS_SessionInfoList_r9_t	 mbms_SessionInfoList_r9;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PMCH_Info_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PMCH_Info_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PMCH_Info_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PMCH_Info_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PMCH_Info_r9_H_ */
#include <asn_internal.h>
