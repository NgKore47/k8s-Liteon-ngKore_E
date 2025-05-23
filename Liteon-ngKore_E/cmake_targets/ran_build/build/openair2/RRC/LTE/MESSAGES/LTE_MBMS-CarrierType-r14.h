/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MBMS_CarrierType_r14_H_
#define	_LTE_MBMS_CarrierType_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MBMS_CarrierType_r14__carrierType_r14 {
	LTE_MBMS_CarrierType_r14__carrierType_r14_mbms	= 0,
	LTE_MBMS_CarrierType_r14__carrierType_r14_fembmsMixed	= 1,
	LTE_MBMS_CarrierType_r14__carrierType_r14_fembmsDedicated	= 2
} e_LTE_MBMS_CarrierType_r14__carrierType_r14;

/* LTE_MBMS-CarrierType-r14 */
typedef struct LTE_MBMS_CarrierType_r14 {
	long	 carrierType_r14;
	long	*frameOffset_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MBMS_CarrierType_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_carrierType_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MBMS_CarrierType_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMS_CarrierType_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MBMS_CarrierType_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MBMS_CarrierType_r14_H_ */
#include <asn_internal.h>
