/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MeasParameters_v1430_H_
#define	_LTE_MeasParameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasParameters_v1430__ceMeasurements_r14 {
	LTE_MeasParameters_v1430__ceMeasurements_r14_supported	= 0
} e_LTE_MeasParameters_v1430__ceMeasurements_r14;
typedef enum LTE_MeasParameters_v1430__ncsg_r14 {
	LTE_MeasParameters_v1430__ncsg_r14_supported	= 0
} e_LTE_MeasParameters_v1430__ncsg_r14;
typedef enum LTE_MeasParameters_v1430__shortMeasurementGap_r14 {
	LTE_MeasParameters_v1430__shortMeasurementGap_r14_supported	= 0
} e_LTE_MeasParameters_v1430__shortMeasurementGap_r14;
typedef enum LTE_MeasParameters_v1430__perServingCellMeasurementGap_r14 {
	LTE_MeasParameters_v1430__perServingCellMeasurementGap_r14_supported	= 0
} e_LTE_MeasParameters_v1430__perServingCellMeasurementGap_r14;
typedef enum LTE_MeasParameters_v1430__nonUniformGap_r14 {
	LTE_MeasParameters_v1430__nonUniformGap_r14_supported	= 0
} e_LTE_MeasParameters_v1430__nonUniformGap_r14;

/* LTE_MeasParameters-v1430 */
typedef struct LTE_MeasParameters_v1430 {
	long	*ceMeasurements_r14;	/* OPTIONAL */
	long	*ncsg_r14;	/* OPTIONAL */
	long	*shortMeasurementGap_r14;	/* OPTIONAL */
	long	*perServingCellMeasurementGap_r14;	/* OPTIONAL */
	long	*nonUniformGap_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasParameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ceMeasurements_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ncsg_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_shortMeasurementGap_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_perServingCellMeasurementGap_r14_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_nonUniformGap_r14_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasParameters_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasParameters_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasParameters_v1430_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasParameters_v1430_H_ */
#include <asn_internal.h>
