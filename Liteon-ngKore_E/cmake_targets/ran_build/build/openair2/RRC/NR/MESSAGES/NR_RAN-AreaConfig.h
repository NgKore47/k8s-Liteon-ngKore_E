/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RAN_AreaConfig_H_
#define	_NR_RAN_AreaConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_TrackingAreaCode.h"
#include "NR_RAN-AreaCode.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_RAN-AreaConfig */
typedef struct NR_RAN_AreaConfig {
	NR_TrackingAreaCode_t	 trackingAreaCode;
	struct NR_RAN_AreaConfig__ran_AreaCodeList {
		A_SEQUENCE_OF(NR_RAN_AreaCode_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ran_AreaCodeList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RAN_AreaConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RAN_AreaConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RAN_AreaConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RAN_AreaConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RAN_AreaConfig_H_ */
#include <asn_internal.h>
