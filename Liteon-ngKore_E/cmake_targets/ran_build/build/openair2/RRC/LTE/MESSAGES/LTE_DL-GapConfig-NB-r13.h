/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_DL_GapConfig_NB_r13_H_
#define	_LTE_DL_GapConfig_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DL_GapConfig_NB_r13__dl_GapThreshold_r13 {
	LTE_DL_GapConfig_NB_r13__dl_GapThreshold_r13_n32	= 0,
	LTE_DL_GapConfig_NB_r13__dl_GapThreshold_r13_n64	= 1,
	LTE_DL_GapConfig_NB_r13__dl_GapThreshold_r13_n128	= 2,
	LTE_DL_GapConfig_NB_r13__dl_GapThreshold_r13_n256	= 3
} e_LTE_DL_GapConfig_NB_r13__dl_GapThreshold_r13;
typedef enum LTE_DL_GapConfig_NB_r13__dl_GapPeriodicity_r13 {
	LTE_DL_GapConfig_NB_r13__dl_GapPeriodicity_r13_sf64	= 0,
	LTE_DL_GapConfig_NB_r13__dl_GapPeriodicity_r13_sf128	= 1,
	LTE_DL_GapConfig_NB_r13__dl_GapPeriodicity_r13_sf256	= 2,
	LTE_DL_GapConfig_NB_r13__dl_GapPeriodicity_r13_sf512	= 3
} e_LTE_DL_GapConfig_NB_r13__dl_GapPeriodicity_r13;
typedef enum LTE_DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13 {
	LTE_DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13_oneEighth	= 0,
	LTE_DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13_oneFourth	= 1,
	LTE_DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13_threeEighth	= 2,
	LTE_DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13_oneHalf	= 3
} e_LTE_DL_GapConfig_NB_r13__dl_GapDurationCoeff_r13;

/* LTE_DL-GapConfig-NB-r13 */
typedef struct LTE_DL_GapConfig_NB_r13 {
	long	 dl_GapThreshold_r13;
	long	 dl_GapPeriodicity_r13;
	long	 dl_GapDurationCoeff_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DL_GapConfig_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dl_GapThreshold_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dl_GapPeriodicity_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dl_GapDurationCoeff_r13_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DL_GapConfig_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_DL_GapConfig_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DL_GapConfig_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DL_GapConfig_NB_r13_H_ */
#include <asn_internal.h>
