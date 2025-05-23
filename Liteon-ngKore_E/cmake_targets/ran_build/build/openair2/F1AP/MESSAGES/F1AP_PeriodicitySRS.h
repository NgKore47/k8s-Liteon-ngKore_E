/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_PeriodicitySRS_H_
#define	_F1AP_PeriodicitySRS_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_PeriodicitySRS {
	F1AP_PeriodicitySRS_ms0p125	= 0,
	F1AP_PeriodicitySRS_ms0p25	= 1,
	F1AP_PeriodicitySRS_ms0p5	= 2,
	F1AP_PeriodicitySRS_ms0p625	= 3,
	F1AP_PeriodicitySRS_ms1	= 4,
	F1AP_PeriodicitySRS_ms1p25	= 5,
	F1AP_PeriodicitySRS_ms2	= 6,
	F1AP_PeriodicitySRS_ms2p5	= 7,
	F1AP_PeriodicitySRS_ms4	= 8,
	F1AP_PeriodicitySRS_ms5	= 9,
	F1AP_PeriodicitySRS_ms8	= 10,
	F1AP_PeriodicitySRS_ms10	= 11,
	F1AP_PeriodicitySRS_ms16	= 12,
	F1AP_PeriodicitySRS_ms20	= 13,
	F1AP_PeriodicitySRS_ms32	= 14,
	F1AP_PeriodicitySRS_ms40	= 15,
	F1AP_PeriodicitySRS_ms64	= 16,
	F1AP_PeriodicitySRS_ms80	= 17,
	F1AP_PeriodicitySRS_ms160	= 18,
	F1AP_PeriodicitySRS_ms320	= 19,
	F1AP_PeriodicitySRS_ms640	= 20,
	F1AP_PeriodicitySRS_ms1280	= 21,
	F1AP_PeriodicitySRS_ms2560	= 22,
	F1AP_PeriodicitySRS_ms5120	= 23,
	F1AP_PeriodicitySRS_ms10240	= 24
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_PeriodicitySRS;

/* F1AP_PeriodicitySRS */
typedef long	 F1AP_PeriodicitySRS_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_PeriodicitySRS_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_PeriodicitySRS;
extern const asn_INTEGER_specifics_t asn_SPC_F1AP_PeriodicitySRS_specs_1;
asn_struct_free_f F1AP_PeriodicitySRS_free;
asn_struct_print_f F1AP_PeriodicitySRS_print;
asn_constr_check_f F1AP_PeriodicitySRS_constraint;
xer_type_decoder_f F1AP_PeriodicitySRS_decode_xer;
xer_type_encoder_f F1AP_PeriodicitySRS_encode_xer;
per_type_decoder_f F1AP_PeriodicitySRS_decode_uper;
per_type_encoder_f F1AP_PeriodicitySRS_encode_uper;
per_type_decoder_f F1AP_PeriodicitySRS_decode_aper;
per_type_encoder_f F1AP_PeriodicitySRS_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_PeriodicitySRS_H_ */
#include <asn_internal.h>
