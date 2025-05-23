/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_TrackingAreaCodeList_v1130_H_
#define	_LTE_TrackingAreaCodeList_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PLMN_Identity;

/* LTE_TrackingAreaCodeList-v1130 */
typedef struct LTE_TrackingAreaCodeList_v1130 {
	struct LTE_TrackingAreaCodeList_v1130__plmn_Identity_perTAC_List_r11 {
		A_SEQUENCE_OF(struct LTE_PLMN_Identity) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} plmn_Identity_perTAC_List_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_TrackingAreaCodeList_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_TrackingAreaCodeList_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_TrackingAreaCodeList_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_TrackingAreaCodeList_v1130_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PLMN-Identity.h"

#endif	/* _LTE_TrackingAreaCodeList_v1130_H_ */
#include <asn_internal.h>
