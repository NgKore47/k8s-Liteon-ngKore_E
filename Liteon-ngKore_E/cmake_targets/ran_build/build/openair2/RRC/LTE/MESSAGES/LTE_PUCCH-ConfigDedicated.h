/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PUCCH_ConfigDedicated_H_
#define	_LTE_PUCCH_ConfigDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUCCH_ConfigDedicated__ackNackRepetition_PR {
	LTE_PUCCH_ConfigDedicated__ackNackRepetition_PR_NOTHING,	/* No components present */
	LTE_PUCCH_ConfigDedicated__ackNackRepetition_PR_release,
	LTE_PUCCH_ConfigDedicated__ackNackRepetition_PR_setup
} LTE_PUCCH_ConfigDedicated__ackNackRepetition_PR;
typedef enum LTE_PUCCH_ConfigDedicated__ackNackRepetition__setup__repetitionFactor {
	LTE_PUCCH_ConfigDedicated__ackNackRepetition__setup__repetitionFactor_n2	= 0,
	LTE_PUCCH_ConfigDedicated__ackNackRepetition__setup__repetitionFactor_n4	= 1,
	LTE_PUCCH_ConfigDedicated__ackNackRepetition__setup__repetitionFactor_n6	= 2,
	LTE_PUCCH_ConfigDedicated__ackNackRepetition__setup__repetitionFactor_spare1	= 3
} e_LTE_PUCCH_ConfigDedicated__ackNackRepetition__setup__repetitionFactor;
typedef enum LTE_PUCCH_ConfigDedicated__tdd_AckNackFeedbackMode {
	LTE_PUCCH_ConfigDedicated__tdd_AckNackFeedbackMode_bundling	= 0,
	LTE_PUCCH_ConfigDedicated__tdd_AckNackFeedbackMode_multiplexing	= 1
} e_LTE_PUCCH_ConfigDedicated__tdd_AckNackFeedbackMode;

/* LTE_PUCCH-ConfigDedicated */
typedef struct LTE_PUCCH_ConfigDedicated {
	struct LTE_PUCCH_ConfigDedicated__ackNackRepetition {
		LTE_PUCCH_ConfigDedicated__ackNackRepetition_PR present;
		union LTE_PUCCH_ConfigDedicated__LTE_ackNackRepetition_u {
			NULL_t	 release;
			struct LTE_PUCCH_ConfigDedicated__ackNackRepetition__setup {
				long	 repetitionFactor;
				long	 n1PUCCH_AN_Rep;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ackNackRepetition;
	long	*tdd_AckNackFeedbackMode;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUCCH_ConfigDedicated_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_repetitionFactor_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_tdd_AckNackFeedbackMode_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUCCH_ConfigDedicated;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUCCH_ConfigDedicated_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUCCH_ConfigDedicated_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUCCH_ConfigDedicated_H_ */
#include <asn_internal.h>
