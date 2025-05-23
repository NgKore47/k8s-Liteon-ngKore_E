/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_RRCEstablishmentCause_H_
#define	_NGAP_RRCEstablishmentCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_RRCEstablishmentCause {
	NGAP_RRCEstablishmentCause_emergency	= 0,
	NGAP_RRCEstablishmentCause_highPriorityAccess	= 1,
	NGAP_RRCEstablishmentCause_mt_Access	= 2,
	NGAP_RRCEstablishmentCause_mo_Signalling	= 3,
	NGAP_RRCEstablishmentCause_mo_Data	= 4,
	NGAP_RRCEstablishmentCause_mo_VoiceCall	= 5,
	NGAP_RRCEstablishmentCause_mo_VideoCall	= 6,
	NGAP_RRCEstablishmentCause_mo_SMS	= 7,
	NGAP_RRCEstablishmentCause_mps_PriorityAccess	= 8,
	NGAP_RRCEstablishmentCause_mcs_PriorityAccess	= 9,
	/*
	 * Enumeration is extensible
	 */
	NGAP_RRCEstablishmentCause_notAvailable	= 10
} e_NGAP_RRCEstablishmentCause;

/* NGAP_RRCEstablishmentCause */
typedef long	 NGAP_RRCEstablishmentCause_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_RRCEstablishmentCause_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_RRCEstablishmentCause;
extern const asn_INTEGER_specifics_t asn_SPC_NGAP_RRCEstablishmentCause_specs_1;
asn_struct_free_f NGAP_RRCEstablishmentCause_free;
asn_struct_print_f NGAP_RRCEstablishmentCause_print;
asn_constr_check_f NGAP_RRCEstablishmentCause_constraint;
xer_type_decoder_f NGAP_RRCEstablishmentCause_decode_xer;
xer_type_encoder_f NGAP_RRCEstablishmentCause_encode_xer;
per_type_decoder_f NGAP_RRCEstablishmentCause_decode_uper;
per_type_encoder_f NGAP_RRCEstablishmentCause_encode_uper;
per_type_decoder_f NGAP_RRCEstablishmentCause_decode_aper;
per_type_encoder_f NGAP_RRCEstablishmentCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_RRCEstablishmentCause_H_ */
#include <asn_internal.h>
