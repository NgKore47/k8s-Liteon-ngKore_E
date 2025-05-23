/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_NR_DL_PRS_ResourcesCapability_r16_H_
#define	_LPP_NR_DL_PRS_ResourcesCapability_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "LPP_DL-PRS-ResourcesBandCombinationList-r16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_NR_DL_PRS_ResourcesCapability_r16__maxNrOfTRP_AcrossFreqs_r16 {
	LPP_NR_DL_PRS_ResourcesCapability_r16__maxNrOfTRP_AcrossFreqs_r16_n4	= 0,
	LPP_NR_DL_PRS_ResourcesCapability_r16__maxNrOfTRP_AcrossFreqs_r16_n6	= 1,
	LPP_NR_DL_PRS_ResourcesCapability_r16__maxNrOfTRP_AcrossFreqs_r16_n12	= 2,
	LPP_NR_DL_PRS_ResourcesCapability_r16__maxNrOfTRP_AcrossFreqs_r16_n16	= 3,
	LPP_NR_DL_PRS_ResourcesCapability_r16__maxNrOfTRP_AcrossFreqs_r16_n32	= 4,
	LPP_NR_DL_PRS_ResourcesCapability_r16__maxNrOfTRP_AcrossFreqs_r16_n64	= 5,
	LPP_NR_DL_PRS_ResourcesCapability_r16__maxNrOfTRP_AcrossFreqs_r16_n128	= 6,
	LPP_NR_DL_PRS_ResourcesCapability_r16__maxNrOfTRP_AcrossFreqs_r16_n256	= 7
	/*
	 * Enumeration is extensible
	 */
} e_LPP_NR_DL_PRS_ResourcesCapability_r16__maxNrOfTRP_AcrossFreqs_r16;

/* Forward declarations */
struct LPP_DL_PRS_ResourcesCapabilityPerBand_r16;

/* LPP_NR-DL-PRS-ResourcesCapability-r16 */
typedef struct LPP_NR_DL_PRS_ResourcesCapability_r16 {
	long	 maxNrOfDL_PRS_ResourceSetPerTrpPerFrequencyLayer_r16;
	long	 maxNrOfTRP_AcrossFreqs_r16;
	long	 maxNrOfPosLayer_r16;
	struct LPP_NR_DL_PRS_ResourcesCapability_r16__dl_PRS_ResourcesCapabilityBandList_r16 {
		A_SEQUENCE_OF(struct LPP_DL_PRS_ResourcesCapabilityPerBand_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} dl_PRS_ResourcesCapabilityBandList_r16;
	LPP_DL_PRS_ResourcesBandCombinationList_r16_t	 dl_PRS_ResourcesBandCombinationList_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_NR_DL_PRS_ResourcesCapability_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_maxNrOfTRP_AcrossFreqs_r16_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_NR_DL_PRS_ResourcesCapability_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_NR_DL_PRS_ResourcesCapability_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_NR_DL_PRS_ResourcesCapability_r16_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_NR_DL_PRS_ResourcesCapability_r16_H_ */
#include <asn_internal.h>
