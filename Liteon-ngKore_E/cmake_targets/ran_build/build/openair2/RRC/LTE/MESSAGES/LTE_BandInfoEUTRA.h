/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BandInfoEUTRA_H_
#define	_LTE_BandInfoEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_InterFreqBandList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_InterRAT_BandList;

/* LTE_BandInfoEUTRA */
typedef struct LTE_BandInfoEUTRA {
	LTE_InterFreqBandList_t	 interFreqBandList;
	struct LTE_InterRAT_BandList	*interRAT_BandList;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandInfoEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandInfoEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandInfoEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandInfoEUTRA_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_InterRAT-BandList.h"

#endif	/* _LTE_BandInfoEUTRA_H_ */
#include <asn_internal.h>
