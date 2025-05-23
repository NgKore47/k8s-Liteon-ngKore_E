/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_EmergencyAreaIDBroadcastNR_H_
#define	_NGAP_EmergencyAreaIDBroadcastNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_EmergencyAreaIDBroadcastNR_Item;

/* NGAP_EmergencyAreaIDBroadcastNR */
typedef struct NGAP_EmergencyAreaIDBroadcastNR {
	A_SEQUENCE_OF(struct NGAP_EmergencyAreaIDBroadcastNR_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_EmergencyAreaIDBroadcastNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_EmergencyAreaIDBroadcastNR;
extern asn_SET_OF_specifics_t asn_SPC_NGAP_EmergencyAreaIDBroadcastNR_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_EmergencyAreaIDBroadcastNR_1[1];
extern asn_per_constraints_t asn_PER_type_NGAP_EmergencyAreaIDBroadcastNR_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_EmergencyAreaIDBroadcastNR_H_ */
#include <asn_internal.h>
