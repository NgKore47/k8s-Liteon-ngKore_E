/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_VarSuccessHO_Report_r17_IEs_H_
#define	_NR_VarSuccessHO_Report_r17_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SuccessHO-Report-r17.h"
#include "NR_PLMN-IdentityList2-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_VarSuccessHO-Report-r17-IEs */
typedef struct NR_VarSuccessHO_Report_r17_IEs {
	NR_SuccessHO_Report_r17_t	 successHO_Report_r17;
	NR_PLMN_IdentityList2_r16_t	 plmn_IdentityList_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_VarSuccessHO_Report_r17_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_VarSuccessHO_Report_r17_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_VarSuccessHO_Report_r17_IEs_H_ */
#include <asn_internal.h>
