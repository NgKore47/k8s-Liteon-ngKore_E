/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BandCombinationParameters_v1130_H_
#define	_LTE_BandCombinationParameters_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BandCombinationParameters_v1130__multipleTimingAdvance_r11 {
	LTE_BandCombinationParameters_v1130__multipleTimingAdvance_r11_supported	= 0
} e_LTE_BandCombinationParameters_v1130__multipleTimingAdvance_r11;
typedef enum LTE_BandCombinationParameters_v1130__simultaneousRx_Tx_r11 {
	LTE_BandCombinationParameters_v1130__simultaneousRx_Tx_r11_supported	= 0
} e_LTE_BandCombinationParameters_v1130__simultaneousRx_Tx_r11;

/* Forward declarations */
struct LTE_BandParameters_v1130;

/* LTE_BandCombinationParameters-v1130 */
typedef struct LTE_BandCombinationParameters_v1130 {
	long	*multipleTimingAdvance_r11;	/* OPTIONAL */
	long	*simultaneousRx_Tx_r11;	/* OPTIONAL */
	struct LTE_BandCombinationParameters_v1130__bandParameterList_r11 {
		A_SEQUENCE_OF(struct LTE_BandParameters_v1130) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bandParameterList_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandCombinationParameters_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_multipleTimingAdvance_r11_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_simultaneousRx_Tx_r11_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandCombinationParameters_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandCombinationParameters_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandCombinationParameters_v1130_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_BandParameters-v1130.h"

#endif	/* _LTE_BandCombinationParameters_v1130_H_ */
#include <asn_internal.h>
