/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PeriodicalReportConfigInterRAT_H_
#define	_NR_PeriodicalReportConfigInterRAT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ReportInterval.h"
#include <NativeEnumerated.h>
#include "NR_MeasReportQuantity.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PeriodicalReportConfigInterRAT__reportAmount {
	NR_PeriodicalReportConfigInterRAT__reportAmount_r1	= 0,
	NR_PeriodicalReportConfigInterRAT__reportAmount_r2	= 1,
	NR_PeriodicalReportConfigInterRAT__reportAmount_r4	= 2,
	NR_PeriodicalReportConfigInterRAT__reportAmount_r8	= 3,
	NR_PeriodicalReportConfigInterRAT__reportAmount_r16	= 4,
	NR_PeriodicalReportConfigInterRAT__reportAmount_r32	= 5,
	NR_PeriodicalReportConfigInterRAT__reportAmount_r64	= 6,
	NR_PeriodicalReportConfigInterRAT__reportAmount_infinity	= 7
} e_NR_PeriodicalReportConfigInterRAT__reportAmount;
typedef enum NR_PeriodicalReportConfigInterRAT__ext2__includeCommonLocationInfo_r16 {
	NR_PeriodicalReportConfigInterRAT__ext2__includeCommonLocationInfo_r16_true	= 0
} e_NR_PeriodicalReportConfigInterRAT__ext2__includeCommonLocationInfo_r16;

/* Forward declarations */
struct NR_MeasReportQuantityUTRA_FDD_r16;
struct NR_SetupRelease_BT_NameList_r16;
struct NR_SetupRelease_WLAN_NameList_r16;
struct NR_SetupRelease_Sensor_NameList_r16;
struct NR_SL_MeasReportQuantity_r16;

/* NR_PeriodicalReportConfigInterRAT */
typedef struct NR_PeriodicalReportConfigInterRAT {
	NR_ReportInterval_t	 reportInterval;
	long	 reportAmount;
	NR_MeasReportQuantity_t	 reportQuantity;
	long	 maxReportCells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_PeriodicalReportConfigInterRAT__ext1 {
		struct NR_MeasReportQuantityUTRA_FDD_r16	*reportQuantityUTRA_FDD_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_PeriodicalReportConfigInterRAT__ext2 {
		long	*includeCommonLocationInfo_r16;	/* OPTIONAL */
		struct NR_SetupRelease_BT_NameList_r16	*includeBT_Meas_r16;	/* OPTIONAL */
		struct NR_SetupRelease_WLAN_NameList_r16	*includeWLAN_Meas_r16;	/* OPTIONAL */
		struct NR_SetupRelease_Sensor_NameList_r16	*includeSensor_Meas_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_PeriodicalReportConfigInterRAT__ext3 {
		struct NR_SL_MeasReportQuantity_r16	*reportQuantityRelay_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PeriodicalReportConfigInterRAT_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reportAmount_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_includeCommonLocationInfo_r16_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PeriodicalReportConfigInterRAT;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PeriodicalReportConfigInterRAT_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PeriodicalReportConfigInterRAT_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasReportQuantityUTRA-FDD-r16.h"
#include "NR_SetupRelease.h"
#include "NR_SL-MeasReportQuantity-r16.h"

#endif	/* _NR_PeriodicalReportConfigInterRAT_H_ */
#include <asn_internal.h>
