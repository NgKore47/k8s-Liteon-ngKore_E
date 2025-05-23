/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_TAG_Config_H_
#define	_NR_TAG_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_TAG-Id.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_TAG;

/* NR_TAG-Config */
typedef struct NR_TAG_Config {
	struct NR_TAG_Config__tag_ToReleaseList {
		A_SEQUENCE_OF(NR_TAG_Id_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tag_ToReleaseList;
	struct NR_TAG_Config__tag_ToAddModList {
		A_SEQUENCE_OF(struct NR_TAG) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tag_ToAddModList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_TAG_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_TAG_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_TAG_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_TAG_Config_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_TAG.h"

#endif	/* _NR_TAG_Config_H_ */
#include <asn_internal.h>
