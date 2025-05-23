/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RRCReconfigurationComplete_v1530_IEs_H_
#define	_NR_RRCReconfigurationComplete_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_UplinkTxDirectCurrentList;
struct NR_RRCReconfigurationComplete_v1560_IEs;

/* NR_RRCReconfigurationComplete-v1530-IEs */
typedef struct NR_RRCReconfigurationComplete_v1530_IEs {
	struct NR_UplinkTxDirectCurrentList	*uplinkTxDirectCurrentList;	/* OPTIONAL */
	struct NR_RRCReconfigurationComplete_v1560_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCReconfigurationComplete_v1530_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCReconfigurationComplete_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCReconfigurationComplete_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCReconfigurationComplete_v1530_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_UplinkTxDirectCurrentList.h"
#include "NR_RRCReconfigurationComplete-v1560-IEs.h"

#endif	/* _NR_RRCReconfigurationComplete_v1530_IEs_H_ */
#include <asn_internal.h>
