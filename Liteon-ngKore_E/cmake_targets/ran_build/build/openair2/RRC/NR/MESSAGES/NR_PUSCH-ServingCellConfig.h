/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PUSCH_ServingCellConfig_H_
#define	_NR_PUSCH_ServingCellConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PUSCH_ServingCellConfig__rateMatching {
	NR_PUSCH_ServingCellConfig__rateMatching_limitedBufferRM	= 0
} e_NR_PUSCH_ServingCellConfig__rateMatching;
typedef enum NR_PUSCH_ServingCellConfig__xOverhead {
	NR_PUSCH_ServingCellConfig__xOverhead_xoh6	= 0,
	NR_PUSCH_ServingCellConfig__xOverhead_xoh12	= 1,
	NR_PUSCH_ServingCellConfig__xOverhead_xoh18	= 2
} e_NR_PUSCH_ServingCellConfig__xOverhead;
typedef enum NR_PUSCH_ServingCellConfig__ext3__nrofHARQ_ProcessesForPUSCH_r17 {
	NR_PUSCH_ServingCellConfig__ext3__nrofHARQ_ProcessesForPUSCH_r17_n32	= 0
} e_NR_PUSCH_ServingCellConfig__ext3__nrofHARQ_ProcessesForPUSCH_r17;

/* Forward declarations */
struct NR_SetupRelease_PUSCH_CodeBlockGroupTransmission;
struct NR_SetupRelease_MaxMIMO_LayersDCI_0_2_r16;
struct NR_SetupRelease_UplinkHARQ_mode_r17;

/* NR_PUSCH-ServingCellConfig */
typedef struct NR_PUSCH_ServingCellConfig {
	struct NR_SetupRelease_PUSCH_CodeBlockGroupTransmission	*codeBlockGroupTransmission;	/* OPTIONAL */
	long	*rateMatching;	/* OPTIONAL */
	long	*xOverhead;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_PUSCH_ServingCellConfig__ext1 {
		long	*maxMIMO_Layers;	/* OPTIONAL */
		BOOLEAN_t	*processingType2Enabled;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_PUSCH_ServingCellConfig__ext2 {
		struct NR_SetupRelease_MaxMIMO_LayersDCI_0_2_r16	*maxMIMO_LayersDCI_0_2_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_PUSCH_ServingCellConfig__ext3 {
		long	*nrofHARQ_ProcessesForPUSCH_r17;	/* OPTIONAL */
		struct NR_SetupRelease_UplinkHARQ_mode_r17	*uplinkHARQ_mode_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PUSCH_ServingCellConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rateMatching_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_xOverhead_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nrofHARQ_ProcessesForPUSCH_r17_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PUSCH_ServingCellConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PUSCH_ServingCellConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PUSCH_ServingCellConfig_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"

#endif	/* _NR_PUSCH_ServingCellConfig_H_ */
#include <asn_internal.h>
