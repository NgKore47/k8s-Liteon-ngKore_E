/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_VarLogMeasConfig_r16_IEs_H_
#define	_NR_VarLogMeasConfig_r16_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_LoggingDuration-r16.h"
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_VarLogMeasConfig_r16_IEs__reportType_PR {
	NR_VarLogMeasConfig_r16_IEs__reportType_PR_NOTHING,	/* No components present */
	NR_VarLogMeasConfig_r16_IEs__reportType_PR_periodical,
	NR_VarLogMeasConfig_r16_IEs__reportType_PR_eventTriggered
} NR_VarLogMeasConfig_r16_IEs__reportType_PR;
typedef enum NR_VarLogMeasConfig_r16_IEs__earlyMeasIndication_r17 {
	NR_VarLogMeasConfig_r16_IEs__earlyMeasIndication_r17_true	= 0
} e_NR_VarLogMeasConfig_r16_IEs__earlyMeasIndication_r17;

/* Forward declarations */
struct NR_AreaConfiguration_r16;
struct NR_BT_NameList_r16;
struct NR_WLAN_NameList_r16;
struct NR_Sensor_NameList_r16;
struct NR_AreaConfiguration_v1700;
struct NR_LoggedPeriodicalReportConfig_r16;
struct NR_LoggedEventTriggerConfig_r16;

/* NR_VarLogMeasConfig-r16-IEs */
typedef struct NR_VarLogMeasConfig_r16_IEs {
	struct NR_AreaConfiguration_r16	*areaConfiguration_r16;	/* OPTIONAL */
	struct NR_BT_NameList_r16	*bt_NameList_r16;	/* OPTIONAL */
	struct NR_WLAN_NameList_r16	*wlan_NameList_r16;	/* OPTIONAL */
	struct NR_Sensor_NameList_r16	*sensor_NameList_r16;	/* OPTIONAL */
	NR_LoggingDuration_r16_t	 loggingDuration_r16;
	struct NR_VarLogMeasConfig_r16_IEs__reportType {
		NR_VarLogMeasConfig_r16_IEs__reportType_PR present;
		union NR_VarLogMeasConfig_r16_IEs__NR_reportType_u {
			struct NR_LoggedPeriodicalReportConfig_r16	*periodical;
			struct NR_LoggedEventTriggerConfig_r16	*eventTriggered;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportType;
	long	*earlyMeasIndication_r17;	/* OPTIONAL */
	struct NR_AreaConfiguration_v1700	*areaConfiguration_v1700;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_VarLogMeasConfig_r16_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_earlyMeasIndication_r17_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_VarLogMeasConfig_r16_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_AreaConfiguration-r16.h"
#include "NR_BT-NameList-r16.h"
#include "NR_WLAN-NameList-r16.h"
#include "NR_Sensor-NameList-r16.h"
#include "NR_AreaConfiguration-v1700.h"
#include "NR_LoggedPeriodicalReportConfig-r16.h"
#include "NR_LoggedEventTriggerConfig-r16.h"

#endif	/* _NR_VarLogMeasConfig_r16_IEs_H_ */
#include <asn_internal.h>
