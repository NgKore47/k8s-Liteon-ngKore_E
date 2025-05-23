/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CondTriggerConfig_r16_H_
#define	_NR_CondTriggerConfig_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_NR-RS-Type.h"
#include "NR_MeasTriggerQuantityOffset.h"
#include "NR_Hysteresis.h"
#include "NR_TimeToTrigger.h"
#include <constr_SEQUENCE.h>
#include "NR_MeasTriggerQuantity.h"
#include <NativeInteger.h>
#include "NR_ReferenceLocation-r17.h"
#include "NR_HysteresisLocation-r17.h"
#include <INTEGER.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CondTriggerConfig_r16__condEventId_PR {
	NR_CondTriggerConfig_r16__condEventId_PR_NOTHING,	/* No components present */
	NR_CondTriggerConfig_r16__condEventId_PR_condEventA3,
	NR_CondTriggerConfig_r16__condEventId_PR_condEventA5,
	/* Extensions may appear below */
	NR_CondTriggerConfig_r16__condEventId_PR_condEventA4_r17,
	NR_CondTriggerConfig_r16__condEventId_PR_condEventD1_r17,
	NR_CondTriggerConfig_r16__condEventId_PR_condEventT1_r17
} NR_CondTriggerConfig_r16__condEventId_PR;

/* NR_CondTriggerConfig-r16 */
typedef struct NR_CondTriggerConfig_r16 {
	struct NR_CondTriggerConfig_r16__condEventId {
		NR_CondTriggerConfig_r16__condEventId_PR present;
		union NR_CondTriggerConfig_r16__NR_condEventId_u {
			struct NR_CondTriggerConfig_r16__condEventId__condEventA3 {
				NR_MeasTriggerQuantityOffset_t	 a3_Offset;
				NR_Hysteresis_t	 hysteresis;
				NR_TimeToTrigger_t	 timeToTrigger;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *condEventA3;
			struct NR_CondTriggerConfig_r16__condEventId__condEventA5 {
				NR_MeasTriggerQuantity_t	 a5_Threshold1;
				NR_MeasTriggerQuantity_t	 a5_Threshold2;
				NR_Hysteresis_t	 hysteresis;
				NR_TimeToTrigger_t	 timeToTrigger;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *condEventA5;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct NR_CondTriggerConfig_r16__condEventId__condEventA4_r17 {
				NR_MeasTriggerQuantity_t	 a4_Threshold_r17;
				NR_Hysteresis_t	 hysteresis_r17;
				NR_TimeToTrigger_t	 timeToTrigger_r17;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *condEventA4_r17;
			struct NR_CondTriggerConfig_r16__condEventId__condEventD1_r17 {
				long	 distanceThreshFromReference1_r17;
				long	 distanceThreshFromReference2_r17;
				NR_ReferenceLocation_r17_t	 referenceLocation1_r17;
				NR_ReferenceLocation_r17_t	 referenceLocation2_r17;
				NR_HysteresisLocation_r17_t	 hysteresisLocation_r17;
				NR_TimeToTrigger_t	 timeToTrigger_r17;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *condEventD1_r17;
			struct NR_CondTriggerConfig_r16__condEventId__condEventT1_r17 {
				INTEGER_t	 t1_Threshold_r17;
				long	 duration_r17;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *condEventT1_r17;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} condEventId;
	NR_NR_RS_Type_t	 rsType_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CondTriggerConfig_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CondTriggerConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CondTriggerConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CondTriggerConfig_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CondTriggerConfig_r16_H_ */
#include <asn_internal.h>
