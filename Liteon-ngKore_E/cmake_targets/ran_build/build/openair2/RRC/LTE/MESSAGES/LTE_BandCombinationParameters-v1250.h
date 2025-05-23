/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BandCombinationParameters_v1250_H_
#define	_LTE_BandCombinationParameters_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BandCombinationParameters_v1250__dc_Support_r12__asynchronous_r12 {
	LTE_BandCombinationParameters_v1250__dc_Support_r12__asynchronous_r12_supported	= 0
} e_LTE_BandCombinationParameters_v1250__dc_Support_r12__asynchronous_r12;
typedef enum LTE_BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR {
	LTE_BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR_NOTHING,	/* No components present */
	LTE_BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR_threeEntries_r12,
	LTE_BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR_fourEntries_r12,
	LTE_BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR_fiveEntries_r12
} LTE_BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR;

/* LTE_BandCombinationParameters-v1250 */
typedef struct LTE_BandCombinationParameters_v1250 {
	struct LTE_BandCombinationParameters_v1250__dc_Support_r12 {
		long	*asynchronous_r12;	/* OPTIONAL */
		struct LTE_BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12 {
			LTE_BandCombinationParameters_v1250__dc_Support_r12__supportedCellGrouping_r12_PR present;
			union LTE_BandCombinationParameters_v1250__LTE_dc_Support_r12__LTE_supportedCellGrouping_r12_u {
				BIT_STRING_t	 threeEntries_r12;
				BIT_STRING_t	 fourEntries_r12;
				BIT_STRING_t	 fiveEntries_r12;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *supportedCellGrouping_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dc_Support_r12;
	BIT_STRING_t	*supportedNAICS_2CRS_AP_r12;	/* OPTIONAL */
	BIT_STRING_t	*commSupportedBandsPerBC_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandCombinationParameters_v1250_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_asynchronous_r12_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandCombinationParameters_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandCombinationParameters_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandCombinationParameters_v1250_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_BandCombinationParameters_v1250_H_ */
#include <asn_internal.h>
