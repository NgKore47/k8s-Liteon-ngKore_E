/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-Containers"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/M3AP/MESSAGES/ASN1/m3ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/M3AP/MESSAGES`
 */

#ifndef	_M3AP_ProtocolIE_Field_H_
#define	_M3AP_ProtocolIE_Field_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M3AP_ProtocolIE-ID.h"
#include "M3AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "M3AP_MBMS-Service-associatedLogicalM3-ConnectionItem.h"
#include "M3AP_Presence.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include "M3AP_MME-MBMS-M3AP-ID.h"
#include "M3AP_TMGI.h"
#include "M3AP_MBMS-Session-ID.h"
#include "M3AP_MBMS-E-RAB-QoS-Parameters.h"
#include "M3AP_MBMS-Session-Duration.h"
#include "M3AP_MBMS-Service-Area.h"
#include "M3AP_MinimumTimeToMBMSDataTransfer.h"
#include "M3AP_TNL-Information.h"
#include "M3AP_Absolute-Time-ofMBMS-Data.h"
#include "M3AP_Reestablishment.h"
#include "M3AP_MBMS-Cell-List.h"
#include "M3AP_MCE-MBMS-M3AP-ID.h"
#include "M3AP_CriticalityDiagnostics.h"
#include "M3AP_Cause.h"
#include "M3AP_ResetType.h"
#include "M3AP_MBMS-Service-associatedLogicalM3-ConnectionListResAck.h"
#include "M3AP_Global-MCE-ID.h"
#include "M3AP_MCEname.h"
#include "M3AP_MBMSServiceAreaListItem.h"
#include "M3AP_TimeToWait.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes__value_PR {
	M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes__value_PR_NOTHING,	/* No components present */
	M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes__value_PR_MBMS_Service_associatedLogicalM3_ConnectionItem
} M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes__value_PR;
typedef enum M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck__value_PR {
	M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck__value_PR_NOTHING,	/* No components present */
	M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck__value_PR_MBMS_Service_associatedLogicalM3_ConnectionItem
} M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck__value_PR;
typedef enum M3AP_MBMSSessionStartRequest_IEs__value_PR {
	M3AP_MBMSSessionStartRequest_IEs__value_PR_NOTHING,	/* No components present */
	M3AP_MBMSSessionStartRequest_IEs__value_PR_MME_MBMS_M3AP_ID,
	M3AP_MBMSSessionStartRequest_IEs__value_PR_TMGI,
	M3AP_MBMSSessionStartRequest_IEs__value_PR_MBMS_Session_ID,
	M3AP_MBMSSessionStartRequest_IEs__value_PR_MBMS_E_RAB_QoS_Parameters,
	M3AP_MBMSSessionStartRequest_IEs__value_PR_MBMS_Session_Duration,
	M3AP_MBMSSessionStartRequest_IEs__value_PR_MBMS_Service_Area,
	M3AP_MBMSSessionStartRequest_IEs__value_PR_MinimumTimeToMBMSDataTransfer,
	M3AP_MBMSSessionStartRequest_IEs__value_PR_TNL_Information,
	M3AP_MBMSSessionStartRequest_IEs__value_PR_Absolute_Time_ofMBMS_Data,
	M3AP_MBMSSessionStartRequest_IEs__value_PR_Reestablishment,
	M3AP_MBMSSessionStartRequest_IEs__value_PR_TNL_Information_1,
	M3AP_MBMSSessionStartRequest_IEs__value_PR_MBMS_Cell_List
} M3AP_MBMSSessionStartRequest_IEs__value_PR;
typedef enum M3AP_MBMSSessionStartResponse_IEs__value_PR {
	M3AP_MBMSSessionStartResponse_IEs__value_PR_NOTHING,	/* No components present */
	M3AP_MBMSSessionStartResponse_IEs__value_PR_MME_MBMS_M3AP_ID,
	M3AP_MBMSSessionStartResponse_IEs__value_PR_MCE_MBMS_M3AP_ID,
	M3AP_MBMSSessionStartResponse_IEs__value_PR_CriticalityDiagnostics
} M3AP_MBMSSessionStartResponse_IEs__value_PR;
typedef enum M3AP_MBMSSessionStartFailure_IEs__value_PR {
	M3AP_MBMSSessionStartFailure_IEs__value_PR_NOTHING,	/* No components present */
	M3AP_MBMSSessionStartFailure_IEs__value_PR_MME_MBMS_M3AP_ID,
	M3AP_MBMSSessionStartFailure_IEs__value_PR_Cause,
	M3AP_MBMSSessionStartFailure_IEs__value_PR_CriticalityDiagnostics
} M3AP_MBMSSessionStartFailure_IEs__value_PR;
typedef enum M3AP_MBMSSessionStopRequest_IEs__value_PR {
	M3AP_MBMSSessionStopRequest_IEs__value_PR_NOTHING,	/* No components present */
	M3AP_MBMSSessionStopRequest_IEs__value_PR_MME_MBMS_M3AP_ID,
	M3AP_MBMSSessionStopRequest_IEs__value_PR_MCE_MBMS_M3AP_ID,
	M3AP_MBMSSessionStopRequest_IEs__value_PR_Absolute_Time_ofMBMS_Data
} M3AP_MBMSSessionStopRequest_IEs__value_PR;
typedef enum M3AP_MBMSSessionStopResponse_IEs__value_PR {
	M3AP_MBMSSessionStopResponse_IEs__value_PR_NOTHING,	/* No components present */
	M3AP_MBMSSessionStopResponse_IEs__value_PR_MME_MBMS_M3AP_ID,
	M3AP_MBMSSessionStopResponse_IEs__value_PR_MCE_MBMS_M3AP_ID,
	M3AP_MBMSSessionStopResponse_IEs__value_PR_CriticalityDiagnostics
} M3AP_MBMSSessionStopResponse_IEs__value_PR;
typedef enum M3AP_MBMSSessionUpdateRequest_IEs__value_PR {
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_NOTHING,	/* No components present */
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_MME_MBMS_M3AP_ID,
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_MCE_MBMS_M3AP_ID,
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_TMGI,
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_MBMS_Session_ID,
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_MBMS_E_RAB_QoS_Parameters,
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_MBMS_Session_Duration,
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_MBMS_Service_Area,
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_MinimumTimeToMBMSDataTransfer,
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_TNL_Information,
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_Absolute_Time_ofMBMS_Data,
	M3AP_MBMSSessionUpdateRequest_IEs__value_PR_MBMS_Cell_List
} M3AP_MBMSSessionUpdateRequest_IEs__value_PR;
typedef enum M3AP_MBMSSessionUpdateResponse_IEs__value_PR {
	M3AP_MBMSSessionUpdateResponse_IEs__value_PR_NOTHING,	/* No components present */
	M3AP_MBMSSessionUpdateResponse_IEs__value_PR_MME_MBMS_M3AP_ID,
	M3AP_MBMSSessionUpdateResponse_IEs__value_PR_MCE_MBMS_M3AP_ID,
	M3AP_MBMSSessionUpdateResponse_IEs__value_PR_CriticalityDiagnostics
} M3AP_MBMSSessionUpdateResponse_IEs__value_PR;
typedef enum M3AP_MBMSSessionUpdateFailure_IEs__value_PR {
	M3AP_MBMSSessionUpdateFailure_IEs__value_PR_NOTHING,	/* No components present */
	M3AP_MBMSSessionUpdateFailure_IEs__value_PR_MME_MBMS_M3AP_ID,
	M3AP_MBMSSessionUpdateFailure_IEs__value_PR_MCE_MBMS_M3AP_ID,
	M3AP_MBMSSessionUpdateFailure_IEs__value_PR_Cause,
	M3AP_MBMSSessionUpdateFailure_IEs__value_PR_CriticalityDiagnostics
} M3AP_MBMSSessionUpdateFailure_IEs__value_PR;
typedef enum M3AP_ErrorIndication_IEs__value_PR {
	M3AP_ErrorIndication_IEs__value_PR_NOTHING,	/* No components present */
	M3AP_ErrorIndication_IEs__value_PR_MME_MBMS_M3AP_ID,
	M3AP_ErrorIndication_IEs__value_PR_MCE_MBMS_M3AP_ID,
	M3AP_ErrorIndication_IEs__value_PR_Cause,
	M3AP_ErrorIndication_IEs__value_PR_CriticalityDiagnostics
} M3AP_ErrorIndication_IEs__value_PR;
typedef enum M3AP_ResetIEs__value_PR {
	M3AP_ResetIEs__value_PR_NOTHING,	/* No components present */
	M3AP_ResetIEs__value_PR_Cause,
	M3AP_ResetIEs__value_PR_ResetType
} M3AP_ResetIEs__value_PR;
typedef enum M3AP_ResetAcknowledgeIEs__value_PR {
	M3AP_ResetAcknowledgeIEs__value_PR_NOTHING,	/* No components present */
	M3AP_ResetAcknowledgeIEs__value_PR_MBMS_Service_associatedLogicalM3_ConnectionListResAck,
	M3AP_ResetAcknowledgeIEs__value_PR_CriticalityDiagnostics
} M3AP_ResetAcknowledgeIEs__value_PR;
typedef enum M3AP_M3SetupRequestIEs__value_PR {
	M3AP_M3SetupRequestIEs__value_PR_NOTHING,	/* No components present */
	M3AP_M3SetupRequestIEs__value_PR_Global_MCE_ID,
	M3AP_M3SetupRequestIEs__value_PR_MCEname,
	M3AP_M3SetupRequestIEs__value_PR_MBMSServiceAreaListItem
} M3AP_M3SetupRequestIEs__value_PR;
typedef enum M3AP_M3SetupResponseIEs__value_PR {
	M3AP_M3SetupResponseIEs__value_PR_NOTHING,	/* No components present */
	M3AP_M3SetupResponseIEs__value_PR_CriticalityDiagnostics
} M3AP_M3SetupResponseIEs__value_PR;
typedef enum M3AP_M3SetupFailureIEs__value_PR {
	M3AP_M3SetupFailureIEs__value_PR_NOTHING,	/* No components present */
	M3AP_M3SetupFailureIEs__value_PR_Cause,
	M3AP_M3SetupFailureIEs__value_PR_TimeToWait,
	M3AP_M3SetupFailureIEs__value_PR_CriticalityDiagnostics
} M3AP_M3SetupFailureIEs__value_PR;
typedef enum M3AP_MCEConfigurationUpdateIEs__value_PR {
	M3AP_MCEConfigurationUpdateIEs__value_PR_NOTHING,	/* No components present */
	M3AP_MCEConfigurationUpdateIEs__value_PR_Global_MCE_ID,
	M3AP_MCEConfigurationUpdateIEs__value_PR_MCEname,
	M3AP_MCEConfigurationUpdateIEs__value_PR_MBMSServiceAreaListItem
} M3AP_MCEConfigurationUpdateIEs__value_PR;
typedef enum M3AP_MCEConfigurationUpdateAcknowledgeIEs__value_PR {
	M3AP_MCEConfigurationUpdateAcknowledgeIEs__value_PR_NOTHING,	/* No components present */
	M3AP_MCEConfigurationUpdateAcknowledgeIEs__value_PR_CriticalityDiagnostics
} M3AP_MCEConfigurationUpdateAcknowledgeIEs__value_PR;
typedef enum M3AP_MCEConfigurationUpdateFailureIEs__value_PR {
	M3AP_MCEConfigurationUpdateFailureIEs__value_PR_NOTHING,	/* No components present */
	M3AP_MCEConfigurationUpdateFailureIEs__value_PR_Cause,
	M3AP_MCEConfigurationUpdateFailureIEs__value_PR_TimeToWait,
	M3AP_MCEConfigurationUpdateFailureIEs__value_PR_CriticalityDiagnostics
} M3AP_MCEConfigurationUpdateFailureIEs__value_PR;

/* M3AP_ProtocolIE-Field */
typedef struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes__value {
		M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes__value_PR present;
		union M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes__M3AP_value_u {
			M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_t	 MBMS_Service_associatedLogicalM3_ConnectionItem;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes_t;
typedef struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck__value {
		M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck__value_PR present;
		union M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck__M3AP_value_u {
			M3AP_MBMS_Service_associatedLogicalM3_ConnectionItem_t	 MBMS_Service_associatedLogicalM3_ConnectionItem;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck_t;
typedef struct M3AP_MBMSSessionStartRequest_IEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMSSessionStartRequest_IEs__value {
		M3AP_MBMSSessionStartRequest_IEs__value_PR present;
		union M3AP_MBMSSessionStartRequest_IEs__M3AP_value_u {
			M3AP_MME_MBMS_M3AP_ID_t	 MME_MBMS_M3AP_ID;
			M3AP_TMGI_t	 TMGI;
			M3AP_MBMS_Session_ID_t	 MBMS_Session_ID;
			M3AP_MBMS_E_RAB_QoS_Parameters_t	 MBMS_E_RAB_QoS_Parameters;
			M3AP_MBMS_Session_Duration_t	 MBMS_Session_Duration;
			M3AP_MBMS_Service_Area_t	 MBMS_Service_Area;
			M3AP_MinimumTimeToMBMSDataTransfer_t	 MinimumTimeToMBMSDataTransfer;
			M3AP_TNL_Information_t	 TNL_Information;
			M3AP_Absolute_Time_ofMBMS_Data_t	 Absolute_Time_ofMBMS_Data;
			M3AP_Reestablishment_t	 Reestablishment;
			M3AP_TNL_Information_t	 TNL_Information_1;
			M3AP_MBMS_Cell_List_t	 MBMS_Cell_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMSSessionStartRequest_IEs_t;
typedef struct M3AP_MBMSSessionStartResponse_IEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMSSessionStartResponse_IEs__value {
		M3AP_MBMSSessionStartResponse_IEs__value_PR present;
		union M3AP_MBMSSessionStartResponse_IEs__M3AP_value_u {
			M3AP_MME_MBMS_M3AP_ID_t	 MME_MBMS_M3AP_ID;
			M3AP_MCE_MBMS_M3AP_ID_t	 MCE_MBMS_M3AP_ID;
			M3AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMSSessionStartResponse_IEs_t;
typedef struct M3AP_MBMSSessionStartFailure_IEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMSSessionStartFailure_IEs__value {
		M3AP_MBMSSessionStartFailure_IEs__value_PR present;
		union M3AP_MBMSSessionStartFailure_IEs__M3AP_value_u {
			M3AP_MME_MBMS_M3AP_ID_t	 MME_MBMS_M3AP_ID;
			M3AP_Cause_t	 Cause;
			M3AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMSSessionStartFailure_IEs_t;
typedef struct M3AP_MBMSSessionStopRequest_IEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMSSessionStopRequest_IEs__value {
		M3AP_MBMSSessionStopRequest_IEs__value_PR present;
		union M3AP_MBMSSessionStopRequest_IEs__M3AP_value_u {
			M3AP_MME_MBMS_M3AP_ID_t	 MME_MBMS_M3AP_ID;
			M3AP_MCE_MBMS_M3AP_ID_t	 MCE_MBMS_M3AP_ID;
			M3AP_Absolute_Time_ofMBMS_Data_t	 Absolute_Time_ofMBMS_Data;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMSSessionStopRequest_IEs_t;
typedef struct M3AP_MBMSSessionStopResponse_IEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMSSessionStopResponse_IEs__value {
		M3AP_MBMSSessionStopResponse_IEs__value_PR present;
		union M3AP_MBMSSessionStopResponse_IEs__M3AP_value_u {
			M3AP_MME_MBMS_M3AP_ID_t	 MME_MBMS_M3AP_ID;
			M3AP_MCE_MBMS_M3AP_ID_t	 MCE_MBMS_M3AP_ID;
			M3AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMSSessionStopResponse_IEs_t;
typedef struct M3AP_MBMSSessionUpdateRequest_IEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMSSessionUpdateRequest_IEs__value {
		M3AP_MBMSSessionUpdateRequest_IEs__value_PR present;
		union M3AP_MBMSSessionUpdateRequest_IEs__M3AP_value_u {
			M3AP_MME_MBMS_M3AP_ID_t	 MME_MBMS_M3AP_ID;
			M3AP_MCE_MBMS_M3AP_ID_t	 MCE_MBMS_M3AP_ID;
			M3AP_TMGI_t	 TMGI;
			M3AP_MBMS_Session_ID_t	 MBMS_Session_ID;
			M3AP_MBMS_E_RAB_QoS_Parameters_t	 MBMS_E_RAB_QoS_Parameters;
			M3AP_MBMS_Session_Duration_t	 MBMS_Session_Duration;
			M3AP_MBMS_Service_Area_t	 MBMS_Service_Area;
			M3AP_MinimumTimeToMBMSDataTransfer_t	 MinimumTimeToMBMSDataTransfer;
			M3AP_TNL_Information_t	 TNL_Information;
			M3AP_Absolute_Time_ofMBMS_Data_t	 Absolute_Time_ofMBMS_Data;
			M3AP_MBMS_Cell_List_t	 MBMS_Cell_List;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMSSessionUpdateRequest_IEs_t;
typedef struct M3AP_MBMSSessionUpdateResponse_IEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMSSessionUpdateResponse_IEs__value {
		M3AP_MBMSSessionUpdateResponse_IEs__value_PR present;
		union M3AP_MBMSSessionUpdateResponse_IEs__M3AP_value_u {
			M3AP_MME_MBMS_M3AP_ID_t	 MME_MBMS_M3AP_ID;
			M3AP_MCE_MBMS_M3AP_ID_t	 MCE_MBMS_M3AP_ID;
			M3AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMSSessionUpdateResponse_IEs_t;
typedef struct M3AP_MBMSSessionUpdateFailure_IEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MBMSSessionUpdateFailure_IEs__value {
		M3AP_MBMSSessionUpdateFailure_IEs__value_PR present;
		union M3AP_MBMSSessionUpdateFailure_IEs__M3AP_value_u {
			M3AP_MME_MBMS_M3AP_ID_t	 MME_MBMS_M3AP_ID;
			M3AP_MCE_MBMS_M3AP_ID_t	 MCE_MBMS_M3AP_ID;
			M3AP_Cause_t	 Cause;
			M3AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MBMSSessionUpdateFailure_IEs_t;
typedef struct M3AP_ErrorIndication_IEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_ErrorIndication_IEs__value {
		M3AP_ErrorIndication_IEs__value_PR present;
		union M3AP_ErrorIndication_IEs__M3AP_value_u {
			M3AP_MME_MBMS_M3AP_ID_t	 MME_MBMS_M3AP_ID;
			M3AP_MCE_MBMS_M3AP_ID_t	 MCE_MBMS_M3AP_ID;
			M3AP_Cause_t	 Cause;
			M3AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ErrorIndication_IEs_t;
typedef struct M3AP_ResetIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_ResetIEs__value {
		M3AP_ResetIEs__value_PR present;
		union M3AP_ResetIEs__M3AP_value_u {
			M3AP_Cause_t	 Cause;
			M3AP_ResetType_t	 ResetType;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ResetIEs_t;
typedef struct M3AP_ResetAcknowledgeIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_ResetAcknowledgeIEs__value {
		M3AP_ResetAcknowledgeIEs__value_PR present;
		union M3AP_ResetAcknowledgeIEs__M3AP_value_u {
			M3AP_MBMS_Service_associatedLogicalM3_ConnectionListResAck_t	 MBMS_Service_associatedLogicalM3_ConnectionListResAck;
			M3AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ResetAcknowledgeIEs_t;
typedef struct M3AP_M3SetupRequestIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_M3SetupRequestIEs__value {
		M3AP_M3SetupRequestIEs__value_PR present;
		union M3AP_M3SetupRequestIEs__M3AP_value_u {
			M3AP_Global_MCE_ID_t	 Global_MCE_ID;
			M3AP_MCEname_t	 MCEname;
			M3AP_MBMSServiceAreaListItem_t	 MBMSServiceAreaListItem;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_M3SetupRequestIEs_t;
typedef struct M3AP_M3SetupResponseIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_M3SetupResponseIEs__value {
		M3AP_M3SetupResponseIEs__value_PR present;
		union M3AP_M3SetupResponseIEs__M3AP_value_u {
			M3AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_M3SetupResponseIEs_t;
typedef struct M3AP_M3SetupFailureIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_M3SetupFailureIEs__value {
		M3AP_M3SetupFailureIEs__value_PR present;
		union M3AP_M3SetupFailureIEs__M3AP_value_u {
			M3AP_Cause_t	 Cause;
			M3AP_TimeToWait_t	 TimeToWait;
			M3AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_M3SetupFailureIEs_t;
typedef struct M3AP_MCEConfigurationUpdateIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MCEConfigurationUpdateIEs__value {
		M3AP_MCEConfigurationUpdateIEs__value_PR present;
		union M3AP_MCEConfigurationUpdateIEs__M3AP_value_u {
			M3AP_Global_MCE_ID_t	 Global_MCE_ID;
			M3AP_MCEname_t	 MCEname;
			M3AP_MBMSServiceAreaListItem_t	 MBMSServiceAreaListItem;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MCEConfigurationUpdateIEs_t;
typedef struct M3AP_MCEConfigurationUpdateAcknowledgeIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MCEConfigurationUpdateAcknowledgeIEs__value {
		M3AP_MCEConfigurationUpdateAcknowledgeIEs__value_PR present;
		union M3AP_MCEConfigurationUpdateAcknowledgeIEs__M3AP_value_u {
			M3AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MCEConfigurationUpdateAcknowledgeIEs_t;
typedef struct M3AP_MCEConfigurationUpdateFailureIEs {
	M3AP_ProtocolIE_ID_t	 id;
	M3AP_Criticality_t	 criticality;
	struct M3AP_MCEConfigurationUpdateFailureIEs__value {
		M3AP_MCEConfigurationUpdateFailureIEs__value_PR present;
		union M3AP_MCEConfigurationUpdateFailureIEs__M3AP_value_u {
			M3AP_Cause_t	 Cause;
			M3AP_TimeToWait_t	 TimeToWait;
			M3AP_CriticalityDiagnostics_t	 CriticalityDiagnostics;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_MCEConfigurationUpdateFailureIEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemRes_1[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck_specs_5;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemResAck_5[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMSSessionStartRequest_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMSSessionStartRequest_IEs_specs_9;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMSSessionStartRequest_IEs_9[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMSSessionStartResponse_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMSSessionStartResponse_IEs_specs_13;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMSSessionStartResponse_IEs_13[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMSSessionStartFailure_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMSSessionStartFailure_IEs_specs_17;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMSSessionStartFailure_IEs_17[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMSSessionStopRequest_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMSSessionStopRequest_IEs_specs_21;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMSSessionStopRequest_IEs_21[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMSSessionStopResponse_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMSSessionStopResponse_IEs_specs_25;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMSSessionStopResponse_IEs_25[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMSSessionUpdateRequest_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMSSessionUpdateRequest_IEs_specs_29;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMSSessionUpdateRequest_IEs_29[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMSSessionUpdateResponse_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMSSessionUpdateResponse_IEs_specs_33;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMSSessionUpdateResponse_IEs_33[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MBMSSessionUpdateFailure_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MBMSSessionUpdateFailure_IEs_specs_37;
extern asn_TYPE_member_t asn_MBR_M3AP_MBMSSessionUpdateFailure_IEs_37[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ErrorIndication_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_ErrorIndication_IEs_specs_41;
extern asn_TYPE_member_t asn_MBR_M3AP_ErrorIndication_IEs_41[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ResetIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_ResetIEs_specs_45;
extern asn_TYPE_member_t asn_MBR_M3AP_ResetIEs_45[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ResetAcknowledgeIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_ResetAcknowledgeIEs_specs_49;
extern asn_TYPE_member_t asn_MBR_M3AP_ResetAcknowledgeIEs_49[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_M3SetupRequestIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_M3SetupRequestIEs_specs_53;
extern asn_TYPE_member_t asn_MBR_M3AP_M3SetupRequestIEs_53[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_M3SetupResponseIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_M3SetupResponseIEs_specs_57;
extern asn_TYPE_member_t asn_MBR_M3AP_M3SetupResponseIEs_57[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_M3SetupFailureIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_M3SetupFailureIEs_specs_61;
extern asn_TYPE_member_t asn_MBR_M3AP_M3SetupFailureIEs_61[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MCEConfigurationUpdateIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MCEConfigurationUpdateIEs_specs_65;
extern asn_TYPE_member_t asn_MBR_M3AP_MCEConfigurationUpdateIEs_65[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MCEConfigurationUpdateAcknowledgeIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MCEConfigurationUpdateAcknowledgeIEs_specs_69;
extern asn_TYPE_member_t asn_MBR_M3AP_MCEConfigurationUpdateAcknowledgeIEs_69[3];
extern asn_TYPE_descriptor_t asn_DEF_M3AP_MCEConfigurationUpdateFailureIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_M3AP_MCEConfigurationUpdateFailureIEs_specs_73;
extern asn_TYPE_member_t asn_MBR_M3AP_MCEConfigurationUpdateFailureIEs_73[3];

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_ProtocolIE_Field_H_ */
#include <asn_internal.h>
