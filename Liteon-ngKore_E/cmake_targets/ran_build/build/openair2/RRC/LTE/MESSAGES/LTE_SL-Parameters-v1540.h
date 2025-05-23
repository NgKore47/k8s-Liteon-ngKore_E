/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SL_Parameters_v1540_H_
#define	_LTE_SL_Parameters_v1540_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_Parameters_v1540__sl_64QAM_Rx_r15 {
	LTE_SL_Parameters_v1540__sl_64QAM_Rx_r15_supported	= 0
} e_LTE_SL_Parameters_v1540__sl_64QAM_Rx_r15;
typedef enum LTE_SL_Parameters_v1540__sl_RateMatchingTBSScaling_r15 {
	LTE_SL_Parameters_v1540__sl_RateMatchingTBSScaling_r15_supported	= 0
} e_LTE_SL_Parameters_v1540__sl_RateMatchingTBSScaling_r15;
typedef enum LTE_SL_Parameters_v1540__sl_LowT2min_r15 {
	LTE_SL_Parameters_v1540__sl_LowT2min_r15_supported	= 0
} e_LTE_SL_Parameters_v1540__sl_LowT2min_r15;
typedef enum LTE_SL_Parameters_v1540__v2x_SensingReportingMode3_r15 {
	LTE_SL_Parameters_v1540__v2x_SensingReportingMode3_r15_supported	= 0
} e_LTE_SL_Parameters_v1540__v2x_SensingReportingMode3_r15;

/* LTE_SL-Parameters-v1540 */
typedef struct LTE_SL_Parameters_v1540 {
	long	*sl_64QAM_Rx_r15;	/* OPTIONAL */
	long	*sl_RateMatchingTBSScaling_r15;	/* OPTIONAL */
	long	*sl_LowT2min_r15;	/* OPTIONAL */
	long	*v2x_SensingReportingMode3_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_Parameters_v1540_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sl_64QAM_Rx_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sl_RateMatchingTBSScaling_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sl_LowT2min_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_v2x_SensingReportingMode3_r15_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_Parameters_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_Parameters_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_Parameters_v1540_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_Parameters_v1540_H_ */
#include <asn_internal.h>
