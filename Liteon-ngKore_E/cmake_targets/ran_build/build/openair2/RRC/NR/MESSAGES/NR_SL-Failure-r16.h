/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SL_Failure_r16_H_
#define	_NR_SL_Failure_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SL-DestinationIdentity-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_Failure_r16__sl_Failure_r16 {
	NR_SL_Failure_r16__sl_Failure_r16_rlf	= 0,
	NR_SL_Failure_r16__sl_Failure_r16_configFailure	= 1,
	NR_SL_Failure_r16__sl_Failure_r16_drxReject_v1710	= 2,
	NR_SL_Failure_r16__sl_Failure_r16_spare5	= 3,
	NR_SL_Failure_r16__sl_Failure_r16_spare4	= 4,
	NR_SL_Failure_r16__sl_Failure_r16_spare3	= 5,
	NR_SL_Failure_r16__sl_Failure_r16_spare2	= 6,
	NR_SL_Failure_r16__sl_Failure_r16_spare1	= 7
} e_NR_SL_Failure_r16__sl_Failure_r16;

/* NR_SL-Failure-r16 */
typedef struct NR_SL_Failure_r16 {
	NR_SL_DestinationIdentity_r16_t	 sl_DestinationIdentity_r16;
	long	 sl_Failure_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_Failure_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_Failure_r16_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_Failure_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_Failure_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_Failure_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SL_Failure_r16_H_ */
#include <asn_internal.h>
