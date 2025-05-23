/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_H_
#define	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PhyLayerParameters;
struct LTE_IRAT_ParametersGERAN;
struct LTE_IRAT_ParametersUTRA_v920;
struct LTE_IRAT_ParametersCDMA2000_1XRTT_v920;
struct LTE_NeighCellSI_AcquisitionParameters_r9;

/* LTE_UE-EUTRA-CapabilityAddXDD-Mode-r9 */
typedef struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9 {
	struct LTE_PhyLayerParameters	*phyLayerParameters_r9;	/* OPTIONAL */
	BIT_STRING_t	*featureGroupIndicators_r9;	/* OPTIONAL */
	BIT_STRING_t	*featureGroupIndRel9Add_r9;	/* OPTIONAL */
	struct LTE_IRAT_ParametersGERAN	*interRAT_ParametersGERAN_r9;	/* OPTIONAL */
	struct LTE_IRAT_ParametersUTRA_v920	*interRAT_ParametersUTRA_r9;	/* OPTIONAL */
	struct LTE_IRAT_ParametersCDMA2000_1XRTT_v920	*interRAT_ParametersCDMA2000_r9;	/* OPTIONAL */
	struct LTE_NeighCellSI_AcquisitionParameters_r9	*neighCellSI_AcquisitionParameters_r9;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhyLayerParameters.h"
#include "LTE_IRAT-ParametersGERAN.h"
#include "LTE_IRAT-ParametersUTRA-v920.h"
#include "LTE_IRAT-ParametersCDMA2000-1XRTT-v920.h"
#include "LTE_NeighCellSI-AcquisitionParameters-r9.h"

#endif	/* _LTE_UE_EUTRA_CapabilityAddXDD_Mode_r9_H_ */
#include <asn_internal.h>
