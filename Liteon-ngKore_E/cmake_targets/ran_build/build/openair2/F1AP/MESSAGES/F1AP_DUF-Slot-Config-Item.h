/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_DUF_Slot_Config_Item_H_
#define	_F1AP_DUF_Slot_Config_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_DUF_Slot_Config_Item_PR {
	F1AP_DUF_Slot_Config_Item_PR_NOTHING,	/* No components present */
	F1AP_DUF_Slot_Config_Item_PR_explicitFormat,
	F1AP_DUF_Slot_Config_Item_PR_implicitFormat,
	F1AP_DUF_Slot_Config_Item_PR_choice_extension
} F1AP_DUF_Slot_Config_Item_PR;

/* Forward declarations */
struct F1AP_ExplicitFormat;
struct F1AP_ImplicitFormat;
struct F1AP_ProtocolIE_SingleContainer;

/* F1AP_DUF-Slot-Config-Item */
typedef struct F1AP_DUF_Slot_Config_Item {
	F1AP_DUF_Slot_Config_Item_PR present;
	union F1AP_DUF_Slot_Config_Item_u {
		struct F1AP_ExplicitFormat	*explicitFormat;
		struct F1AP_ImplicitFormat	*implicitFormat;
		struct F1AP_ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_DUF_Slot_Config_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_DUF_Slot_Config_Item;
extern asn_CHOICE_specifics_t asn_SPC_F1AP_DUF_Slot_Config_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_DUF_Slot_Config_Item_1[3];
extern asn_per_constraints_t asn_PER_type_F1AP_DUF_Slot_Config_Item_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_DUF_Slot_Config_Item_H_ */
#include <asn_internal.h>
