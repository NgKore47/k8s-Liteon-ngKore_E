/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_DRB_Setup_Item_EUTRAN_H_
#define	_E1AP_DRB_Setup_Item_EUTRAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E1AP_DRB-ID.h"
#include "E1AP_UP-TNL-Information.h"
#include "E1AP_UP-Parameters.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E1AP_DRB_Setup_Item_EUTRAN__s1_DL_UP_Unchanged {
	E1AP_DRB_Setup_Item_EUTRAN__s1_DL_UP_Unchanged_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_E1AP_DRB_Setup_Item_EUTRAN__s1_DL_UP_Unchanged;

/* Forward declarations */
struct E1AP_Data_Forwarding_Information;
struct E1AP_ProtocolExtensionContainer;

/* E1AP_DRB-Setup-Item-EUTRAN */
typedef struct E1AP_DRB_Setup_Item_EUTRAN {
	E1AP_DRB_ID_t	 dRB_ID;
	E1AP_UP_TNL_Information_t	 s1_DL_UP_TNL_Information;
	struct E1AP_Data_Forwarding_Information	*data_Forwarding_Information_Response;	/* OPTIONAL */
	E1AP_UP_Parameters_t	 uL_UP_Transport_Parameters;
	long	*s1_DL_UP_Unchanged;	/* OPTIONAL */
	struct E1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E1AP_DRB_Setup_Item_EUTRAN_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_E1AP_s1_DL_UP_Unchanged_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_E1AP_DRB_Setup_Item_EUTRAN;
extern asn_SEQUENCE_specifics_t asn_SPC_E1AP_DRB_Setup_Item_EUTRAN_specs_1;
extern asn_TYPE_member_t asn_MBR_E1AP_DRB_Setup_Item_EUTRAN_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_DRB_Setup_Item_EUTRAN_H_ */
#include <asn_internal.h>
