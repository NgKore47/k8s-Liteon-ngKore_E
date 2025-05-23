/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MeasConfigMN_H_
#define	_NR_MeasConfigMN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MeasConfigMN__gapPurpose {
	NR_MeasConfigMN__gapPurpose_perUE	= 0,
	NR_MeasConfigMN__gapPurpose_perFR1	= 1
} e_NR_MeasConfigMN__gapPurpose;
typedef enum NR_MeasConfigMN__ext2__interFreqNoGap_r16 {
	NR_MeasConfigMN__ext2__interFreqNoGap_r16_true	= 0
} e_NR_MeasConfigMN__ext2__interFreqNoGap_r16;

/* Forward declarations */
struct NR_SetupRelease_GapConfig;
struct NR_NR_FreqInfo;

/* NR_MeasConfigMN */
typedef struct NR_MeasConfigMN {
	struct NR_MeasConfigMN__measuredFrequenciesMN {
		A_SEQUENCE_OF(struct NR_NR_FreqInfo) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measuredFrequenciesMN;
	struct NR_SetupRelease_GapConfig	*measGapConfig;	/* OPTIONAL */
	long	*gapPurpose;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_MeasConfigMN__ext1 {
		struct NR_SetupRelease_GapConfig	*measGapConfigFR2;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_MeasConfigMN__ext2 {
		long	*interFreqNoGap_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasConfigMN_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_gapPurpose_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interFreqNoGap_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasConfigMN;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasConfigMN_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasConfigMN_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"
#include "NR_NR-FreqInfo.h"

#endif	/* _NR_MeasConfigMN_H_ */
#include <asn_internal.h>
