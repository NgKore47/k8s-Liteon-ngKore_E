/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RRCResume_v1610_IEs_H_
#define	_NR_RRCResume_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RRCResume_v1610_IEs__idleModeMeasurementReq_r16 {
	NR_RRCResume_v1610_IEs__idleModeMeasurementReq_r16_true	= 0
} e_NR_RRCResume_v1610_IEs__idleModeMeasurementReq_r16;
typedef enum NR_RRCResume_v1610_IEs__restoreMCG_SCells_r16 {
	NR_RRCResume_v1610_IEs__restoreMCG_SCells_r16_true	= 0
} e_NR_RRCResume_v1610_IEs__restoreMCG_SCells_r16;
typedef enum NR_RRCResume_v1610_IEs__restoreSCG_r16 {
	NR_RRCResume_v1610_IEs__restoreSCG_r16_true	= 0
} e_NR_RRCResume_v1610_IEs__restoreSCG_r16;
typedef enum NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16_PR {
	NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16_PR_NOTHING,	/* No components present */
	NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16_PR_nr_SCG_r16,
	NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16_PR_eutra_SCG_r16
} NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16_PR;

/* Forward declarations */
struct NR_SetupRelease_NeedForGapsConfigNR_r16;
struct NR_RRCResume_v1700_IEs;

/* NR_RRCResume-v1610-IEs */
typedef struct NR_RRCResume_v1610_IEs {
	long	*idleModeMeasurementReq_r16;	/* OPTIONAL */
	long	*restoreMCG_SCells_r16;	/* OPTIONAL */
	long	*restoreSCG_r16;	/* OPTIONAL */
	struct NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16 {
		NR_RRCResume_v1610_IEs__mrdc_SecondaryCellGroup_r16_PR present;
		union NR_RRCResume_v1610_IEs__NR_mrdc_SecondaryCellGroup_r16_u {
			OCTET_STRING_t	 nr_SCG_r16;
			OCTET_STRING_t	 eutra_SCG_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mrdc_SecondaryCellGroup_r16;
	struct NR_SetupRelease_NeedForGapsConfigNR_r16	*needForGapsConfigNR_r16;	/* OPTIONAL */
	struct NR_RRCResume_v1700_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCResume_v1610_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_idleModeMeasurementReq_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_restoreMCG_SCells_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_restoreSCG_r16_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCResume_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCResume_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCResume_v1610_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"
#include "NR_RRCResume-v1700-IEs.h"

#endif	/* _NR_RRCResume_v1610_IEs_H_ */
#include <asn_internal.h>
