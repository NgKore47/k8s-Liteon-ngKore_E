/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_NPNSupportInfo_H_
#define	_E1AP_NPNSupportInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E1AP_NPNSupportInfo_PR {
	E1AP_NPNSupportInfo_PR_NOTHING,	/* No components present */
	E1AP_NPNSupportInfo_PR_sNPN,
	E1AP_NPNSupportInfo_PR_choice_extension
} E1AP_NPNSupportInfo_PR;

/* Forward declarations */
struct E1AP_NPNSupportInfo_SNPN;
struct E1AP_ProtocolIE_SingleContainer;

/* E1AP_NPNSupportInfo */
typedef struct E1AP_NPNSupportInfo {
	E1AP_NPNSupportInfo_PR present;
	union E1AP_NPNSupportInfo_u {
		struct E1AP_NPNSupportInfo_SNPN	*sNPN;
		struct E1AP_ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E1AP_NPNSupportInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E1AP_NPNSupportInfo;
extern asn_CHOICE_specifics_t asn_SPC_E1AP_NPNSupportInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_E1AP_NPNSupportInfo_1[2];
extern asn_per_constraints_t asn_PER_type_E1AP_NPNSupportInfo_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_NPNSupportInfo_H_ */
#include <asn_internal.h>
