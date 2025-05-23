/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SIB_Type_NB_r13_H_
#define	_LTE_SIB_Type_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SIB_Type_NB_r13 {
	LTE_SIB_Type_NB_r13_sibType3_NB_r13	= 0,
	LTE_SIB_Type_NB_r13_sibType4_NB_r13	= 1,
	LTE_SIB_Type_NB_r13_sibType5_NB_r13	= 2,
	LTE_SIB_Type_NB_r13_sibType14_NB_r13	= 3,
	LTE_SIB_Type_NB_r13_sibType16_NB_r13	= 4,
	LTE_SIB_Type_NB_r13_sibType15_NB_r14	= 5,
	LTE_SIB_Type_NB_r13_sibType20_NB_r14	= 6,
	LTE_SIB_Type_NB_r13_sibType22_NB_r14	= 7
} e_LTE_SIB_Type_NB_r13;

/* LTE_SIB-Type-NB-r13 */
typedef long	 LTE_SIB_Type_NB_r13_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_SIB_Type_NB_r13_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_SIB_Type_NB_r13;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_SIB_Type_NB_r13_specs_1;
asn_struct_free_f LTE_SIB_Type_NB_r13_free;
asn_struct_print_f LTE_SIB_Type_NB_r13_print;
asn_constr_check_f LTE_SIB_Type_NB_r13_constraint;
xer_type_decoder_f LTE_SIB_Type_NB_r13_decode_xer;
xer_type_encoder_f LTE_SIB_Type_NB_r13_encode_xer;
per_type_decoder_f LTE_SIB_Type_NB_r13_decode_uper;
per_type_encoder_f LTE_SIB_Type_NB_r13_encode_uper;
per_type_decoder_f LTE_SIB_Type_NB_r13_decode_aper;
per_type_encoder_f LTE_SIB_Type_NB_r13_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SIB_Type_NB_r13_H_ */
#include <asn_internal.h>
