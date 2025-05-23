/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RRCReconfigurationComplete_v1700_IEs_H_
#define	_NR_RRCReconfigurationComplete_v1700_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_CondReconfigId-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_NeedForGapNCSG_InfoNR_r17;
struct NR_NeedForGapNCSG_InfoEUTRA_r17;
struct NR_RRCReconfigurationComplete_v1720_IEs;

/* NR_RRCReconfigurationComplete-v1700-IEs */
typedef struct NR_RRCReconfigurationComplete_v1700_IEs {
	struct NR_NeedForGapNCSG_InfoNR_r17	*needForGapNCSG_InfoNR_r17;	/* OPTIONAL */
	struct NR_NeedForGapNCSG_InfoEUTRA_r17	*needForGapNCSG_InfoEUTRA_r17;	/* OPTIONAL */
	NR_CondReconfigId_r16_t	*selectedCondRRCReconfig_r17;	/* OPTIONAL */
	struct NR_RRCReconfigurationComplete_v1720_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCReconfigurationComplete_v1700_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCReconfigurationComplete_v1700_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCReconfigurationComplete_v1700_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCReconfigurationComplete_v1700_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_NeedForGapNCSG-InfoNR-r17.h"
#include "NR_NeedForGapNCSG-InfoEUTRA-r17.h"
#include "NR_RRCReconfigurationComplete-v1720-IEs.h"

#endif	/* _NR_RRCReconfigurationComplete_v1700_IEs_H_ */
#include <asn_internal.h>
