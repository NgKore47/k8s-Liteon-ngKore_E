/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_QosFlowNotifyItem_H_
#define	_NGAP_QosFlowNotifyItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_QosFlowIdentifier.h"
#include "NGAP_NotificationCause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_QosFlowNotifyItem */
typedef struct NGAP_QosFlowNotifyItem {
	NGAP_QosFlowIdentifier_t	 qosFlowIdentifier;
	NGAP_NotificationCause_t	 notificationCause;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_QosFlowNotifyItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_QosFlowNotifyItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_QosFlowNotifyItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_QosFlowNotifyItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_QosFlowNotifyItem_H_ */
#include <asn_internal.h>
