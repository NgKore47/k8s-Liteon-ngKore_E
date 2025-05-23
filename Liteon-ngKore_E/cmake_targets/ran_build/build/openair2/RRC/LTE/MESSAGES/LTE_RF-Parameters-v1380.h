/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RF_Parameters_v1380_H_
#define	_LTE_RF_Parameters_v1380_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SupportedBandCombination_v1380;
struct LTE_SupportedBandCombinationAdd_v1380;
struct LTE_SupportedBandCombinationReduced_v1380;

/* LTE_RF-Parameters-v1380 */
typedef struct LTE_RF_Parameters_v1380 {
	struct LTE_SupportedBandCombination_v1380	*supportedBandCombination_v1380;	/* OPTIONAL */
	struct LTE_SupportedBandCombinationAdd_v1380	*supportedBandCombinationAdd_v1380;	/* OPTIONAL */
	struct LTE_SupportedBandCombinationReduced_v1380	*supportedBandCombinationReduced_v1380;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RF_Parameters_v1380_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RF_Parameters_v1380;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RF_Parameters_v1380_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RF_Parameters_v1380_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SupportedBandCombination-v1380.h"
#include "LTE_SupportedBandCombinationAdd-v1380.h"
#include "LTE_SupportedBandCombinationReduced-v1380.h"

#endif	/* _LTE_RF_Parameters_v1380_H_ */
#include <asn_internal.h>
