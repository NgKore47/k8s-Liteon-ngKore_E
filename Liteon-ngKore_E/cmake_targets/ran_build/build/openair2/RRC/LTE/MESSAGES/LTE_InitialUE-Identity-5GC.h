/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_InitialUE_Identity_5GC_H_
#define	_LTE_InitialUE_Identity_5GC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_InitialUE_Identity_5GC_PR {
	LTE_InitialUE_Identity_5GC_PR_NOTHING,	/* No components present */
	LTE_InitialUE_Identity_5GC_PR_ng_5G_S_TMSI_Part1,
	LTE_InitialUE_Identity_5GC_PR_randomValue
} LTE_InitialUE_Identity_5GC_PR;

/* LTE_InitialUE-Identity-5GC */
typedef struct LTE_InitialUE_Identity_5GC {
	LTE_InitialUE_Identity_5GC_PR present;
	union LTE_InitialUE_Identity_5GC_u {
		BIT_STRING_t	 ng_5G_S_TMSI_Part1;
		BIT_STRING_t	 randomValue;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_InitialUE_Identity_5GC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_InitialUE_Identity_5GC;
extern asn_CHOICE_specifics_t asn_SPC_LTE_InitialUE_Identity_5GC_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_InitialUE_Identity_5GC_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_InitialUE_Identity_5GC_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_InitialUE_Identity_5GC_H_ */
#include <asn_internal.h>
