/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_UL_CCCH1_Message_H_
#define	_NR_UL_CCCH1_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_UL-CCCH1-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_UL-CCCH1-Message */
typedef struct NR_UL_CCCH1_Message {
	NR_UL_CCCH1_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UL_CCCH1_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UL_CCCH1_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_UL_CCCH1_Message_H_ */
#include <asn_internal.h>
