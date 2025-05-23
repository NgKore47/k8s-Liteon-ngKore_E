/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/M3AP/MESSAGES/ASN1/m3ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/M3AP/MESSAGES`
 */

#ifndef	_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_H_
#define	_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M3AP_MME-MBMS-M3AP-ID.h"
#include "M3AP_MCE-MBMS-M3AP-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct M3AP_ProtocolExtensionContainer;

/* M3AP_MBMS-Service-associatedLogicalM3-ConnectionItem */
typedef struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem {
	M3AP_MME_MBMS_M3AP_ID_t	*mME_MBMS_M3AP_ID;	/* OPTIONAL */
	M3AP_MCE_MBMS_M3AP_ID_t	*mCE_MBMS_M3AP_ID;	/* OPTIONAL */
	struct M3AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_H_ */
#include <asn_internal.h>
