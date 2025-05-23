/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_EstablishmentCause_H_
#define	_NR_EstablishmentCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_EstablishmentCause {
	NR_EstablishmentCause_emergency	= 0,
	NR_EstablishmentCause_highPriorityAccess	= 1,
	NR_EstablishmentCause_mt_Access	= 2,
	NR_EstablishmentCause_mo_Signalling	= 3,
	NR_EstablishmentCause_mo_Data	= 4,
	NR_EstablishmentCause_mo_VoiceCall	= 5,
	NR_EstablishmentCause_mo_VideoCall	= 6,
	NR_EstablishmentCause_mo_SMS	= 7,
	NR_EstablishmentCause_mps_PriorityAccess	= 8,
	NR_EstablishmentCause_mcs_PriorityAccess	= 9,
	NR_EstablishmentCause_spare6	= 10,
	NR_EstablishmentCause_spare5	= 11,
	NR_EstablishmentCause_spare4	= 12,
	NR_EstablishmentCause_spare3	= 13,
	NR_EstablishmentCause_spare2	= 14,
	NR_EstablishmentCause_spare1	= 15
} e_NR_EstablishmentCause;

/* NR_EstablishmentCause */
typedef long	 NR_EstablishmentCause_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_EstablishmentCause_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_EstablishmentCause;
extern const asn_INTEGER_specifics_t asn_SPC_NR_EstablishmentCause_specs_1;
asn_struct_free_f NR_EstablishmentCause_free;
asn_struct_print_f NR_EstablishmentCause_print;
asn_constr_check_f NR_EstablishmentCause_constraint;
xer_type_decoder_f NR_EstablishmentCause_decode_xer;
xer_type_encoder_f NR_EstablishmentCause_encode_xer;
per_type_decoder_f NR_EstablishmentCause_decode_uper;
per_type_encoder_f NR_EstablishmentCause_encode_uper;
per_type_decoder_f NR_EstablishmentCause_decode_aper;
per_type_encoder_f NR_EstablishmentCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_EstablishmentCause_H_ */
#include <asn_internal.h>
