/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SystemInformationBlockType1_v1320_IEs_H_
#define	_LTE_SystemInformationBlockType1_v1320_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__mpdcch_pdsch_HoppingNB_r13 {
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__mpdcch_pdsch_HoppingNB_r13_nb2	= 0,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__mpdcch_pdsch_HoppingNB_r13_nb4	= 1
} e_LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__mpdcch_pdsch_HoppingNB_r13;
typedef enum LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13_PR {
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13_PR_NOTHING,	/* No components present */
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13_PR_interval_FDD_r13,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13_PR_interval_TDD_r13
} LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13_PR;
typedef enum LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_FDD_r13 {
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_FDD_r13_int1	= 0,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_FDD_r13_int2	= 1,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_FDD_r13_int4	= 2,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_FDD_r13_int8	= 3
} e_LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_FDD_r13;
typedef enum LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_TDD_r13 {
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_TDD_r13_int1	= 0,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_TDD_r13_int5	= 1,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_TDD_r13_int10	= 2,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_TDD_r13_int20	= 3
} e_LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13__interval_TDD_r13;
typedef enum LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13_PR {
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13_PR_NOTHING,	/* No components present */
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13_PR_interval_FDD_r13,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13_PR_interval_TDD_r13
} LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13_PR;
typedef enum LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_FDD_r13 {
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_FDD_r13_int2	= 0,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_FDD_r13_int4	= 1,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_FDD_r13_int8	= 2,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_FDD_r13_int16	= 3
} e_LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_FDD_r13;
typedef enum LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_TDD_r13 {
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_TDD_r13_int5	= 0,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_TDD_r13_int10	= 1,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_TDD_r13_int20	= 2,
	LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_TDD_r13_int40	= 3
} e_LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13__interval_TDD_r13;

/* Forward declarations */
struct LTE_SystemInformationBlockType1_v1350_IEs;

/* LTE_SystemInformationBlockType1-v1320-IEs */
typedef struct LTE_SystemInformationBlockType1_v1320_IEs {
	struct LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13 {
		long	*mpdcch_pdsch_HoppingNB_r13;	/* OPTIONAL */
		struct LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13 {
			LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeA_r13_PR present;
			union LTE_SystemInformationBlockType1_v1320_IEs__LTE_freqHoppingParametersDL_r13__LTE_interval_DLHoppingConfigCommonModeA_r13_u {
				long	 interval_FDD_r13;
				long	 interval_TDD_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *interval_DLHoppingConfigCommonModeA_r13;
		struct LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13 {
			LTE_SystemInformationBlockType1_v1320_IEs__freqHoppingParametersDL_r13__interval_DLHoppingConfigCommonModeB_r13_PR present;
			union LTE_SystemInformationBlockType1_v1320_IEs__LTE_freqHoppingParametersDL_r13__LTE_interval_DLHoppingConfigCommonModeB_r13_u {
				long	 interval_FDD_r13;
				long	 interval_TDD_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *interval_DLHoppingConfigCommonModeB_r13;
		long	*mpdcch_pdsch_HoppingOffset_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *freqHoppingParametersDL_r13;
	struct LTE_SystemInformationBlockType1_v1350_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_v1320_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_pdsch_HoppingNB_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_interval_FDD_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_interval_TDD_r13_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_interval_FDD_r13_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_interval_TDD_r13_23;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_v1320_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_v1320_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_v1320_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SystemInformationBlockType1-v1350-IEs.h"

#endif	/* _LTE_SystemInformationBlockType1_v1320_IEs_H_ */
#include <asn_internal.h>
