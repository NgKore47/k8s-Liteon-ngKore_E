/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SRS_ResourceSet_H_
#define	_NR_SRS_ResourceSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SRS-ResourceSetId.h"
#include <NativeEnumerated.h>
#include "NR_Alpha.h"
#include <NativeInteger.h>
#include "NR_SRS-ResourceId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "NR_NZP-CSI-RS-ResourceId.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "NR_AvailableSlotOffset-r17.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SRS_ResourceSet__resourceType_PR {
	NR_SRS_ResourceSet__resourceType_PR_NOTHING,	/* No components present */
	NR_SRS_ResourceSet__resourceType_PR_aperiodic,
	NR_SRS_ResourceSet__resourceType_PR_semi_persistent,
	NR_SRS_ResourceSet__resourceType_PR_periodic
} NR_SRS_ResourceSet__resourceType_PR;
typedef enum NR_SRS_ResourceSet__usage {
	NR_SRS_ResourceSet__usage_beamManagement	= 0,
	NR_SRS_ResourceSet__usage_codebook	= 1,
	NR_SRS_ResourceSet__usage_nonCodebook	= 2,
	NR_SRS_ResourceSet__usage_antennaSwitching	= 3
} e_NR_SRS_ResourceSet__usage;
typedef enum NR_SRS_ResourceSet__srs_PowerControlAdjustmentStates {
	NR_SRS_ResourceSet__srs_PowerControlAdjustmentStates_sameAsFci2	= 0,
	NR_SRS_ResourceSet__srs_PowerControlAdjustmentStates_separateClosedLoop	= 1
} e_NR_SRS_ResourceSet__srs_PowerControlAdjustmentStates;
typedef enum NR_SRS_ResourceSet__ext2__usagePDC_r17 {
	NR_SRS_ResourceSet__ext2__usagePDC_r17_true	= 0
} e_NR_SRS_ResourceSet__ext2__usagePDC_r17;
typedef enum NR_SRS_ResourceSet__ext2__followUnifiedTCI_StateSRS_r17 {
	NR_SRS_ResourceSet__ext2__followUnifiedTCI_StateSRS_r17_enabled	= 0
} e_NR_SRS_ResourceSet__ext2__followUnifiedTCI_StateSRS_r17;

/* Forward declarations */
struct NR_PathlossReferenceRS_Config;
struct NR_SetupRelease_PathlossReferenceRSList_r16;

/* NR_SRS-ResourceSet */
typedef struct NR_SRS_ResourceSet {
	NR_SRS_ResourceSetId_t	 srs_ResourceSetId;
	struct NR_SRS_ResourceSet__srs_ResourceIdList {
		A_SEQUENCE_OF(NR_SRS_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceIdList;
	struct NR_SRS_ResourceSet__resourceType {
		NR_SRS_ResourceSet__resourceType_PR present;
		union NR_SRS_ResourceSet__NR_resourceType_u {
			struct NR_SRS_ResourceSet__resourceType__aperiodic {
				long	 aperiodicSRS_ResourceTrigger;
				NR_NZP_CSI_RS_ResourceId_t	*csi_RS;	/* OPTIONAL */
				long	*slotOffset;	/* OPTIONAL */
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				struct NR_SRS_ResourceSet__resourceType__aperiodic__ext1 {
					struct NR_SRS_ResourceSet__resourceType__aperiodic__ext1__aperiodicSRS_ResourceTriggerList {
						A_SEQUENCE_OF(long) list;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *aperiodicSRS_ResourceTriggerList;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *ext1;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *aperiodic;
			struct NR_SRS_ResourceSet__resourceType__semi_persistent {
				NR_NZP_CSI_RS_ResourceId_t	*associatedCSI_RS;	/* OPTIONAL */
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *semi_persistent;
			struct NR_SRS_ResourceSet__resourceType__periodic {
				NR_NZP_CSI_RS_ResourceId_t	*associatedCSI_RS;	/* OPTIONAL */
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *periodic;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resourceType;
	long	 usage;
	NR_Alpha_t	*alpha;	/* OPTIONAL */
	long	*p0;	/* OPTIONAL */
	struct NR_PathlossReferenceRS_Config	*pathlossReferenceRS;	/* OPTIONAL */
	long	*srs_PowerControlAdjustmentStates;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_SRS_ResourceSet__ext1 {
		struct NR_SetupRelease_PathlossReferenceRSList_r16	*pathlossReferenceRSList_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_SRS_ResourceSet__ext2 {
		long	*usagePDC_r17;	/* OPTIONAL */
		struct NR_SRS_ResourceSet__ext2__availableSlotOffsetList_r17 {
			A_SEQUENCE_OF(NR_AvailableSlotOffset_r17_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *availableSlotOffsetList_r17;
		long	*followUnifiedTCI_StateSRS_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SRS_ResourceSet_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_usage_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_srs_PowerControlAdjustmentStates_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_usagePDC_r17_35;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_followUnifiedTCI_StateSRS_r17_39;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SRS_ResourceSet;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SRS_ResourceSet_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SRS_ResourceSet_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PathlossReferenceRS-Config.h"
#include "NR_SetupRelease.h"

#endif	/* _NR_SRS_ResourceSet_H_ */
#include <asn_internal.h>
