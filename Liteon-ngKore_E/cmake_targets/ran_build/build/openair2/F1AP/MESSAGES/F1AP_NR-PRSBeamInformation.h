/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_NR_PRSBeamInformation_H_
#define	_F1AP_NR_PRSBeamInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_NR-PRSBeamInformationList.h"
#include "F1AP_LCStoGCSTranslationList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_NR-PRSBeamInformation */
typedef struct F1AP_NR_PRSBeamInformation {
	F1AP_NR_PRSBeamInformationList_t	 nR_PRSBeamInformationList;
	F1AP_LCStoGCSTranslationList_t	 lCStoGCSTranslationList;
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_NR_PRSBeamInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_NR_PRSBeamInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_NR_PRSBeamInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_NR_PRSBeamInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_NR_PRSBeamInformation_H_ */
#include <asn_internal.h>
