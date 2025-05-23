/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UE_EUTRA_Capability_v1530_IEs_H_
#define	_LTE_UE_EUTRA_Capability_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UE_EUTRA_Capability_v1530_IEs__extendedNumberOfDRBs_r15 {
	LTE_UE_EUTRA_Capability_v1530_IEs__extendedNumberOfDRBs_r15_supported	= 0
} e_LTE_UE_EUTRA_Capability_v1530_IEs__extendedNumberOfDRBs_r15;
typedef enum LTE_UE_EUTRA_Capability_v1530_IEs__reducedCP_Latency_r15 {
	LTE_UE_EUTRA_Capability_v1530_IEs__reducedCP_Latency_r15_supported	= 0
} e_LTE_UE_EUTRA_Capability_v1530_IEs__reducedCP_Latency_r15;

/* Forward declarations */
struct LTE_MeasParameters_v1530;
struct LTE_Other_Parameters_v1530;
struct LTE_NeighCellSI_AcquisitionParameters_v1530;
struct LTE_MAC_Parameters_v1530;
struct LTE_PhyLayerParameters_v1530;
struct LTE_RF_Parameters_v1530;
struct LTE_PDCP_Parameters_v1530;
struct LTE_UE_BasedNetwPerfMeasParameters_v1530;
struct LTE_RLC_Parameters_v1530;
struct LTE_SL_Parameters_v1530;
struct LTE_LAA_Parameters_v1530;
struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1530;
struct LTE_UE_EUTRA_Capability_v1540_IEs;

/* LTE_UE-EUTRA-Capability-v1530-IEs */
typedef struct LTE_UE_EUTRA_Capability_v1530_IEs {
	struct LTE_MeasParameters_v1530	*measParameters_v1530;	/* OPTIONAL */
	struct LTE_Other_Parameters_v1530	*otherParameters_v1530;	/* OPTIONAL */
	struct LTE_NeighCellSI_AcquisitionParameters_v1530	*neighCellSI_AcquisitionParameters_v1530;	/* OPTIONAL */
	struct LTE_MAC_Parameters_v1530	*mac_Parameters_v1530;	/* OPTIONAL */
	struct LTE_PhyLayerParameters_v1530	*phyLayerParameters_v1530;	/* OPTIONAL */
	struct LTE_RF_Parameters_v1530	*rf_Parameters_v1530;	/* OPTIONAL */
	struct LTE_PDCP_Parameters_v1530	*pdcp_Parameters_v1530;	/* OPTIONAL */
	long	*ue_CategoryDL_v1530;	/* OPTIONAL */
	struct LTE_UE_BasedNetwPerfMeasParameters_v1530	*ue_BasedNetwPerfMeasParameters_v1530;	/* OPTIONAL */
	struct LTE_RLC_Parameters_v1530	*rlc_Parameters_v1530;	/* OPTIONAL */
	struct LTE_SL_Parameters_v1530	*sl_Parameters_v1530;	/* OPTIONAL */
	long	*extendedNumberOfDRBs_r15;	/* OPTIONAL */
	long	*reducedCP_Latency_r15;	/* OPTIONAL */
	struct LTE_LAA_Parameters_v1530	*laa_Parameters_v1530;	/* OPTIONAL */
	long	*ue_CategoryUL_v1530;	/* OPTIONAL */
	struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1530	*fdd_Add_UE_EUTRA_Capabilities_v1530;	/* OPTIONAL */
	struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1530	*tdd_Add_UE_EUTRA_Capabilities_v1530;	/* OPTIONAL */
	struct LTE_UE_EUTRA_Capability_v1540_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_v1530_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_extendedNumberOfDRBs_r15_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_reducedCP_Latency_r15_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1530_IEs_1[18];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasParameters-v1530.h"
#include "LTE_Other-Parameters-v1530.h"
#include "LTE_NeighCellSI-AcquisitionParameters-v1530.h"
#include "LTE_MAC-Parameters-v1530.h"
#include "LTE_PhyLayerParameters-v1530.h"
#include "LTE_RF-Parameters-v1530.h"
#include "LTE_PDCP-Parameters-v1530.h"
#include "LTE_UE-BasedNetwPerfMeasParameters-v1530.h"
#include "LTE_RLC-Parameters-v1530.h"
#include "LTE_SL-Parameters-v1530.h"
#include "LTE_LAA-Parameters-v1530.h"
#include "LTE_UE-EUTRA-CapabilityAddXDD-Mode-v1530.h"
#include "LTE_UE-EUTRA-Capability-v1540-IEs.h"

#endif	/* _LTE_UE_EUTRA_Capability_v1530_IEs_H_ */
#include <asn_internal.h>
