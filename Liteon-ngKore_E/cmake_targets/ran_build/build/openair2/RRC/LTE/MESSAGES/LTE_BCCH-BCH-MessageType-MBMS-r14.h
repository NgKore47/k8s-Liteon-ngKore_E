/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BCCH_BCH_MessageType_MBMS_r14_H_
#define	_LTE_BCCH_BCH_MessageType_MBMS_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MasterInformationBlock-MBMS-r14.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_BCCH-BCH-MessageType-MBMS-r14 */
typedef LTE_MasterInformationBlock_MBMS_r14_t	 LTE_BCCH_BCH_MessageType_MBMS_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BCCH_BCH_MessageType_MBMS_r14;
asn_struct_free_f LTE_BCCH_BCH_MessageType_MBMS_r14_free;
asn_struct_print_f LTE_BCCH_BCH_MessageType_MBMS_r14_print;
asn_constr_check_f LTE_BCCH_BCH_MessageType_MBMS_r14_constraint;
xer_type_decoder_f LTE_BCCH_BCH_MessageType_MBMS_r14_decode_xer;
xer_type_encoder_f LTE_BCCH_BCH_MessageType_MBMS_r14_encode_xer;
per_type_decoder_f LTE_BCCH_BCH_MessageType_MBMS_r14_decode_uper;
per_type_encoder_f LTE_BCCH_BCH_MessageType_MBMS_r14_encode_uper;
per_type_decoder_f LTE_BCCH_BCH_MessageType_MBMS_r14_decode_aper;
per_type_encoder_f LTE_BCCH_BCH_MessageType_MBMS_r14_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_BCCH_BCH_MessageType_MBMS_r14_H_ */
#include <asn_internal.h>
