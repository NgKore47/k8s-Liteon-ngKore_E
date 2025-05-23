/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RRCReconfiguration_v1700_IEs_H_
#define	_NR_RRCReconfiguration_v1700_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RRCReconfiguration_v1700_IEs__scg_State_r17 {
	NR_RRCReconfiguration_v1700_IEs__scg_State_r17_deactivated	= 0
} e_NR_RRCReconfiguration_v1700_IEs__scg_State_r17;

/* Forward declarations */
struct NR_OtherConfig_v1700;
struct NR_SetupRelease_SL_L2RelayUE_Config_r17;
struct NR_SetupRelease_SL_L2RemoteUE_Config_r17;
struct NR_SetupRelease_NeedForGapNCSG_ConfigNR_r17;
struct NR_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17;
struct NR_SetupRelease_MUSIM_GapConfig_r17;
struct NR_SetupRelease_UL_GapFR2_Config_r17;
struct NR_AppLayerMeasConfig_r17;
struct NR_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17;

/* NR_RRCReconfiguration-v1700-IEs */
typedef struct NR_RRCReconfiguration_v1700_IEs {
	struct NR_OtherConfig_v1700	*otherConfig_v1700;	/* OPTIONAL */
	struct NR_SetupRelease_SL_L2RelayUE_Config_r17	*sl_L2RelayUE_Config_r17;	/* OPTIONAL */
	struct NR_SetupRelease_SL_L2RemoteUE_Config_r17	*sl_L2RemoteUE_Config_r17;	/* OPTIONAL */
	OCTET_STRING_t	*dedicatedPagingDelivery_r17;	/* OPTIONAL */
	struct NR_SetupRelease_NeedForGapNCSG_ConfigNR_r17	*needForGapNCSG_ConfigNR_r17;	/* OPTIONAL */
	struct NR_SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17	*needForGapNCSG_ConfigEUTRA_r17;	/* OPTIONAL */
	struct NR_SetupRelease_MUSIM_GapConfig_r17	*musim_GapConfig_r17;	/* OPTIONAL */
	struct NR_SetupRelease_UL_GapFR2_Config_r17	*ul_GapFR2_Config_r17;	/* OPTIONAL */
	long	*scg_State_r17;	/* OPTIONAL */
	struct NR_AppLayerMeasConfig_r17	*appLayerMeasConfig_r17;	/* OPTIONAL */
	struct NR_SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17	*ue_TxTEG_RequestUL_TDOA_Config_r17;	/* OPTIONAL */
	struct NR_RRCReconfiguration_v1700_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCReconfiguration_v1700_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scg_State_r17_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCReconfiguration_v1700_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCReconfiguration_v1700_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCReconfiguration_v1700_IEs_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_OtherConfig-v1700.h"
#include "NR_SetupRelease.h"
#include "NR_AppLayerMeasConfig-r17.h"

#endif	/* _NR_RRCReconfiguration_v1700_IEs_H_ */
#include <asn_internal.h>
