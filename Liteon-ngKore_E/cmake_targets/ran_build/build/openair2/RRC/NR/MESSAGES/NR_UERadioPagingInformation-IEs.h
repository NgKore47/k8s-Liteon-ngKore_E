/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_UERadioPagingInformation_IEs_H_
#define	_NR_UERadioPagingInformation_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_FreqBandIndicatorNR.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_UERadioPagingInformation_v15e0_IEs;

/* NR_UERadioPagingInformation-IEs */
typedef struct NR_UERadioPagingInformation_IEs {
	struct NR_UERadioPagingInformation_IEs__supportedBandListNRForPaging {
		A_SEQUENCE_OF(NR_FreqBandIndicatorNR_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *supportedBandListNRForPaging;
	struct NR_UERadioPagingInformation_v15e0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UERadioPagingInformation_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UERadioPagingInformation_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UERadioPagingInformation_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UERadioPagingInformation_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_UERadioPagingInformation-v15e0-IEs.h"

#endif	/* _NR_UERadioPagingInformation_IEs_H_ */
#include <asn_internal.h>
