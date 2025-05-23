/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_TMGI_r9_H_
#define	_LTE_TMGI_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeInteger.h>
#include "LTE_PLMN-Identity.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_TMGI_r9__plmn_Id_r9_PR {
	LTE_TMGI_r9__plmn_Id_r9_PR_NOTHING,	/* No components present */
	LTE_TMGI_r9__plmn_Id_r9_PR_plmn_Index_r9,
	LTE_TMGI_r9__plmn_Id_r9_PR_explicitValue_r9
} LTE_TMGI_r9__plmn_Id_r9_PR;

/* LTE_TMGI-r9 */
typedef struct LTE_TMGI_r9 {
	struct LTE_TMGI_r9__plmn_Id_r9 {
		LTE_TMGI_r9__plmn_Id_r9_PR present;
		union LTE_TMGI_r9__LTE_plmn_Id_r9_u {
			long	 plmn_Index_r9;
			LTE_PLMN_Identity_t	 explicitValue_r9;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} plmn_Id_r9;
	OCTET_STRING_t	 serviceId_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_TMGI_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_TMGI_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_TMGI_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_TMGI_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_TMGI_r9_H_ */
#include <asn_internal.h>
