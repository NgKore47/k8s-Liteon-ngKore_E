/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_NRNRB_H_
#define	_X2AP_NRNRB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_NRNRB {
	X2AP_NRNRB_nrb11	= 0,
	X2AP_NRNRB_nrb18	= 1,
	X2AP_NRNRB_nrb24	= 2,
	X2AP_NRNRB_nrb25	= 3,
	X2AP_NRNRB_nrb31	= 4,
	X2AP_NRNRB_nrb32	= 5,
	X2AP_NRNRB_nrb38	= 6,
	X2AP_NRNRB_nrb51	= 7,
	X2AP_NRNRB_nrb52	= 8,
	X2AP_NRNRB_nrb65	= 9,
	X2AP_NRNRB_nrb66	= 10,
	X2AP_NRNRB_nrb78	= 11,
	X2AP_NRNRB_nrb79	= 12,
	X2AP_NRNRB_nrb93	= 13,
	X2AP_NRNRB_nrb106	= 14,
	X2AP_NRNRB_nrb107	= 15,
	X2AP_NRNRB_nrb121	= 16,
	X2AP_NRNRB_nrb132	= 17,
	X2AP_NRNRB_nrb133	= 18,
	X2AP_NRNRB_nrb135	= 19,
	X2AP_NRNRB_nrb160	= 20,
	X2AP_NRNRB_nrb162	= 21,
	X2AP_NRNRB_nrb189	= 22,
	X2AP_NRNRB_nrb216	= 23,
	X2AP_NRNRB_nrb217	= 24,
	X2AP_NRNRB_nrb245	= 25,
	X2AP_NRNRB_nrb264	= 26,
	X2AP_NRNRB_nrb270	= 27,
	X2AP_NRNRB_nrb273	= 28
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_NRNRB;

/* X2AP_NRNRB */
typedef long	 X2AP_NRNRB_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_NRNRB_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_NRNRB;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_NRNRB_specs_1;
asn_struct_free_f X2AP_NRNRB_free;
asn_struct_print_f X2AP_NRNRB_print;
asn_constr_check_f X2AP_NRNRB_constraint;
xer_type_decoder_f X2AP_NRNRB_decode_xer;
xer_type_encoder_f X2AP_NRNRB_encode_xer;
per_type_decoder_f X2AP_NRNRB_decode_uper;
per_type_encoder_f X2AP_NRNRB_encode_uper;
per_type_decoder_f X2AP_NRNRB_decode_aper;
per_type_encoder_f X2AP_NRNRB_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_NRNRB_H_ */
#include <asn_internal.h>
