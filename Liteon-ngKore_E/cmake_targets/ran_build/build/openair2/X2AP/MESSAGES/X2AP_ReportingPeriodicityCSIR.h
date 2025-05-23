/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_ReportingPeriodicityCSIR_H_
#define	_X2AP_ReportingPeriodicityCSIR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_ReportingPeriodicityCSIR {
	X2AP_ReportingPeriodicityCSIR_ms5	= 0,
	X2AP_ReportingPeriodicityCSIR_ms10	= 1,
	X2AP_ReportingPeriodicityCSIR_ms20	= 2,
	X2AP_ReportingPeriodicityCSIR_ms40	= 3,
	X2AP_ReportingPeriodicityCSIR_ms80	= 4
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_ReportingPeriodicityCSIR;

/* X2AP_ReportingPeriodicityCSIR */
typedef long	 X2AP_ReportingPeriodicityCSIR_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_ReportingPeriodicityCSIR_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ReportingPeriodicityCSIR;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_ReportingPeriodicityCSIR_specs_1;
asn_struct_free_f X2AP_ReportingPeriodicityCSIR_free;
asn_struct_print_f X2AP_ReportingPeriodicityCSIR_print;
asn_constr_check_f X2AP_ReportingPeriodicityCSIR_constraint;
xer_type_decoder_f X2AP_ReportingPeriodicityCSIR_decode_xer;
xer_type_encoder_f X2AP_ReportingPeriodicityCSIR_encode_xer;
per_type_decoder_f X2AP_ReportingPeriodicityCSIR_decode_uper;
per_type_encoder_f X2AP_ReportingPeriodicityCSIR_encode_uper;
per_type_decoder_f X2AP_ReportingPeriodicityCSIR_decode_aper;
per_type_encoder_f X2AP_ReportingPeriodicityCSIR_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ReportingPeriodicityCSIR_H_ */
#include <asn_internal.h>
