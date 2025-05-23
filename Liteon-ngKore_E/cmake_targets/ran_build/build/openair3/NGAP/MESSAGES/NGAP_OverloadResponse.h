/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_OverloadResponse_H_
#define	_NGAP_OverloadResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_OverloadAction.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_OverloadResponse_PR {
	NGAP_OverloadResponse_PR_NOTHING,	/* No components present */
	NGAP_OverloadResponse_PR_overloadAction,
	NGAP_OverloadResponse_PR_choice_Extensions
} NGAP_OverloadResponse_PR;

/* Forward declarations */
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_OverloadResponse */
typedef struct NGAP_OverloadResponse {
	NGAP_OverloadResponse_PR present;
	union NGAP_OverloadResponse_u {
		NGAP_OverloadAction_t	 overloadAction;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_OverloadResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_OverloadResponse;
extern asn_CHOICE_specifics_t asn_SPC_NGAP_OverloadResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_OverloadResponse_1[2];
extern asn_per_constraints_t asn_PER_type_NGAP_OverloadResponse_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_OverloadResponse_H_ */
#include <asn_internal.h>
