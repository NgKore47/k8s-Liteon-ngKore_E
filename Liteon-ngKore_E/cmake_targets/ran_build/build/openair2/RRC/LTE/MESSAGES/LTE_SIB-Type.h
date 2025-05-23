/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SIB_Type_H_
#define	_LTE_SIB_Type_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SIB_Type {
	LTE_SIB_Type_sibType3	= 0,
	LTE_SIB_Type_sibType4	= 1,
	LTE_SIB_Type_sibType5	= 2,
	LTE_SIB_Type_sibType6	= 3,
	LTE_SIB_Type_sibType7	= 4,
	LTE_SIB_Type_sibType8	= 5,
	LTE_SIB_Type_sibType9	= 6,
	LTE_SIB_Type_sibType10	= 7,
	LTE_SIB_Type_sibType11	= 8,
	LTE_SIB_Type_sibType12_v920	= 9,
	LTE_SIB_Type_sibType13_v920	= 10,
	LTE_SIB_Type_sibType14_v1130	= 11,
	LTE_SIB_Type_sibType15_v1130	= 12,
	LTE_SIB_Type_sibType16_v1130	= 13,
	LTE_SIB_Type_sibType17_v1250	= 14,
	LTE_SIB_Type_sibType18_v1250	= 15,
	/*
	 * Enumeration is extensible
	 */
	LTE_SIB_Type_sibType19_v1250	= 16,
	LTE_SIB_Type_sibType20_v1310	= 17,
	LTE_SIB_Type_sibType21_v1430	= 18,
	LTE_SIB_Type_sibType24_v1530	= 19,
	LTE_SIB_Type_sibType25_v1530	= 20,
	LTE_SIB_Type_sibType26_v1530	= 21
} e_LTE_SIB_Type;

/* LTE_SIB-Type */
typedef long	 LTE_SIB_Type_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_SIB_Type_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_SIB_Type;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_SIB_Type_specs_1;
asn_struct_free_f LTE_SIB_Type_free;
asn_struct_print_f LTE_SIB_Type_print;
asn_constr_check_f LTE_SIB_Type_constraint;
xer_type_decoder_f LTE_SIB_Type_decode_xer;
xer_type_encoder_f LTE_SIB_Type_encode_xer;
per_type_decoder_f LTE_SIB_Type_decode_uper;
per_type_encoder_f LTE_SIB_Type_encode_uper;
per_type_decoder_f LTE_SIB_Type_decode_aper;
per_type_encoder_f LTE_SIB_Type_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SIB_Type_H_ */
#include <asn_internal.h>
