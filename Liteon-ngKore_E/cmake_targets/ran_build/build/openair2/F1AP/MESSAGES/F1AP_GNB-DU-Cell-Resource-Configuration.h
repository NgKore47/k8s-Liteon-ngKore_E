/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_GNB_DU_Cell_Resource_Configuration_H_
#define	_F1AP_GNB_DU_Cell_Resource_Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_SubcarrierSpacing.h"
#include "F1AP_DUFTransmissionPeriodicity.h"
#include "F1AP_HSNATransmissionPeriodicity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_DUF_Slot_Config_List;
struct F1AP_HSNASlotConfigList;
struct F1AP_ProtocolExtensionContainer;

/* F1AP_GNB-DU-Cell-Resource-Configuration */
typedef struct F1AP_GNB_DU_Cell_Resource_Configuration {
	F1AP_SubcarrierSpacing_t	 subcarrierSpacing;
	F1AP_DUFTransmissionPeriodicity_t	*dUFTransmissionPeriodicity;	/* OPTIONAL */
	struct F1AP_DUF_Slot_Config_List	*dUF_Slot_Config_List;	/* OPTIONAL */
	F1AP_HSNATransmissionPeriodicity_t	 hSNATransmissionPeriodicity;
	struct F1AP_HSNASlotConfigList	*hNSASlotConfigList;	/* OPTIONAL */
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_GNB_DU_Cell_Resource_Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_GNB_DU_Cell_Resource_Configuration;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_GNB_DU_Cell_Resource_Configuration_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_GNB_DU_Cell_Resource_Configuration_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_GNB_DU_Cell_Resource_Configuration_H_ */
#include <asn_internal.h>
