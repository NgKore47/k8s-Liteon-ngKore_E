/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SystemInformationBlockType5_NB_r13_H_
#define	_LTE_SystemInformationBlockType5_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_InterFreqCarrierFreqList-NB-r13.h"
#include "LTE_T-Reselection-NB-r13.h"
#include <OCTET_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_SystemInformationBlockType5-NB-r13 */
typedef struct LTE_SystemInformationBlockType5_NB_r13 {
	LTE_InterFreqCarrierFreqList_NB_r13_t	 interFreqCarrierFreqList_r13;
	LTE_T_Reselection_NB_r13_t	 t_Reselection_r13;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SystemInformationBlockType5_NB_r13__ext1 {
		long	*scptm_FreqOffset_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType5_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType5_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType5_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType5_NB_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SystemInformationBlockType5_NB_r13_H_ */
#include <asn_internal.h>
