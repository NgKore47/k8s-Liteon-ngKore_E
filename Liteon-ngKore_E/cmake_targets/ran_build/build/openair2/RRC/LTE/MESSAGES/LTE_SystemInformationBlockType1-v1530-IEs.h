/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SystemInformationBlockType1_v1530_IEs_H_
#define	_LTE_SystemInformationBlockType1_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NULL.h>
#include <constr_CHOICE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType1_v1530_IEs__hsdn_Cell_r15 {
	LTE_SystemInformationBlockType1_v1530_IEs__hsdn_Cell_r15_true	= 0
} e_LTE_SystemInformationBlockType1_v1530_IEs__hsdn_Cell_r15;
typedef enum LTE_SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15_PR {
	LTE_SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15_PR_NOTHING,	/* No components present */
	LTE_SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15_PR_crs_IntfMitigEnabled_15,
	LTE_SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15_PR_crs_IntfMitigNumPRBs_r15
} LTE_SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15_PR;
typedef enum LTE_SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15__crs_IntfMitigNumPRBs_r15 {
	LTE_SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15__crs_IntfMitigNumPRBs_r15_n6	= 0,
	LTE_SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15__crs_IntfMitigNumPRBs_r15_n24	= 1
} e_LTE_SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15__crs_IntfMitigNumPRBs_r15;
typedef enum LTE_SystemInformationBlockType1_v1530_IEs__cellBarred_CRS_r15 {
	LTE_SystemInformationBlockType1_v1530_IEs__cellBarred_CRS_r15_barred	= 0,
	LTE_SystemInformationBlockType1_v1530_IEs__cellBarred_CRS_r15_notBarred	= 1
} e_LTE_SystemInformationBlockType1_v1530_IEs__cellBarred_CRS_r15;
typedef enum LTE_SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15__cellBarred_5GC_r15 {
	LTE_SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15__cellBarred_5GC_r15_barred	= 0,
	LTE_SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15__cellBarred_5GC_r15_notBarred	= 1
} e_LTE_SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15__cellBarred_5GC_r15;
typedef enum LTE_SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15__cellBarred_5GC_CRS_r15 {
	LTE_SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15__cellBarred_5GC_CRS_r15_barred	= 0,
	LTE_SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15__cellBarred_5GC_CRS_r15_notBarred	= 1
} e_LTE_SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15__cellBarred_5GC_CRS_r15;
typedef enum LTE_SystemInformationBlockType1_v1530_IEs__ims_EmergencySupport5GC_r15 {
	LTE_SystemInformationBlockType1_v1530_IEs__ims_EmergencySupport5GC_r15_true	= 0
} e_LTE_SystemInformationBlockType1_v1530_IEs__ims_EmergencySupport5GC_r15;
typedef enum LTE_SystemInformationBlockType1_v1530_IEs__eCallOverIMS_Support5GC_r15 {
	LTE_SystemInformationBlockType1_v1530_IEs__eCallOverIMS_Support5GC_r15_true	= 0
} e_LTE_SystemInformationBlockType1_v1530_IEs__eCallOverIMS_Support5GC_r15;

/* Forward declarations */
struct LTE_CellSelectionInfoCE_v1530;
struct LTE_PLMN_IdentityList_v1530;
struct LTE_PosSchedulingInfoList_r15;
struct LTE_SystemInformationBlockType1_v1540_IEs;
struct LTE_CellAccessRelatedInfo_5GC_r15;

/* LTE_SystemInformationBlockType1-v1530-IEs */
typedef struct LTE_SystemInformationBlockType1_v1530_IEs {
	long	*hsdn_Cell_r15;	/* OPTIONAL */
	struct LTE_CellSelectionInfoCE_v1530	*cellSelectionInfoCE_v1530;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15 {
		LTE_SystemInformationBlockType1_v1530_IEs__crs_IntfMitigConfig_r15_PR present;
		union LTE_SystemInformationBlockType1_v1530_IEs__LTE_crs_IntfMitigConfig_r15_u {
			NULL_t	 crs_IntfMitigEnabled_15;
			long	 crs_IntfMitigNumPRBs_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *crs_IntfMitigConfig_r15;
	long	 cellBarred_CRS_r15;
	struct LTE_PLMN_IdentityList_v1530	*plmn_IdentityList_v1530;	/* OPTIONAL */
	struct LTE_PosSchedulingInfoList_r15	*posSchedulingInfoList_r15;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15 {
		long	 cellBarred_5GC_r15;
		long	 cellBarred_5GC_CRS_r15;
		struct LTE_SystemInformationBlockType1_v1530_IEs__cellAccessRelatedInfo_5GC_r15__cellAccessRelatedInfoList_5GC_r15 {
			A_SEQUENCE_OF(struct LTE_CellAccessRelatedInfo_5GC_r15) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} cellAccessRelatedInfoList_5GC_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellAccessRelatedInfo_5GC_r15;
	long	*ims_EmergencySupport5GC_r15;	/* OPTIONAL */
	long	*eCallOverIMS_Support5GC_r15;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_v1540_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_v1530_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_hsdn_Cell_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_crs_IntfMitigNumPRBs_r15_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cellBarred_CRS_r15_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cellBarred_5GC_r15_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cellBarred_5GC_CRS_r15_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ims_EmergencySupport5GC_r15_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_eCallOverIMS_Support5GC_r15_26;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_v1530_IEs_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CellSelectionInfoCE-v1530.h"
#include "LTE_PLMN-IdentityList-v1530.h"
#include "LTE_PosSchedulingInfoList-r15.h"
#include "LTE_SystemInformationBlockType1-v1540-IEs.h"
#include "LTE_CellAccessRelatedInfo-5GC-r15.h"

#endif	/* _LTE_SystemInformationBlockType1_v1530_IEs_H_ */
#include <asn_internal.h>
