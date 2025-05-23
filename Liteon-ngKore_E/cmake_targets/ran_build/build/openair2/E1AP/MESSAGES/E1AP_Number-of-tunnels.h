/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_Number_of_tunnels_H_
#define	_E1AP_Number_of_tunnels_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E1AP_Number-of-tunnels */
typedef long	 E1AP_Number_of_tunnels_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E1AP_Number_of_tunnels_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E1AP_Number_of_tunnels;
asn_struct_free_f E1AP_Number_of_tunnels_free;
asn_struct_print_f E1AP_Number_of_tunnels_print;
asn_constr_check_f E1AP_Number_of_tunnels_constraint;
xer_type_decoder_f E1AP_Number_of_tunnels_decode_xer;
xer_type_encoder_f E1AP_Number_of_tunnels_encode_xer;
per_type_decoder_f E1AP_Number_of_tunnels_decode_uper;
per_type_encoder_f E1AP_Number_of_tunnels_encode_uper;
per_type_decoder_f E1AP_Number_of_tunnels_decode_aper;
per_type_encoder_f E1AP_Number_of_tunnels_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_Number_of_tunnels_H_ */
#include <asn_internal.h>
