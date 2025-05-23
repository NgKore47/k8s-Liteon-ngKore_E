/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SlotFormatCombinationsPerCell_H_
#define	_NR_SlotFormatCombinationsPerCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ServCellIndex.h"
#include "NR_SubcarrierSpacing.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SlotFormatCombinationsPerCell__ext1__enableConfiguredUL_r16 {
	NR_SlotFormatCombinationsPerCell__ext1__enableConfiguredUL_r16_enabled	= 0
} e_NR_SlotFormatCombinationsPerCell__ext1__enableConfiguredUL_r16;

/* Forward declarations */
struct NR_SlotFormatCombination;

/* NR_SlotFormatCombinationsPerCell */
typedef struct NR_SlotFormatCombinationsPerCell {
	NR_ServCellIndex_t	 servingCellId;
	NR_SubcarrierSpacing_t	 subcarrierSpacing;
	NR_SubcarrierSpacing_t	*subcarrierSpacing2;	/* OPTIONAL */
	struct NR_SlotFormatCombinationsPerCell__slotFormatCombinations {
		A_SEQUENCE_OF(struct NR_SlotFormatCombination) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *slotFormatCombinations;
	long	*positionInDCI;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_SlotFormatCombinationsPerCell__ext1 {
		long	*enableConfiguredUL_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SlotFormatCombinationsPerCell_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_enableConfiguredUL_r16_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SlotFormatCombinationsPerCell;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SlotFormatCombinationsPerCell_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SlotFormatCombinationsPerCell_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SlotFormatCombination.h"

#endif	/* _NR_SlotFormatCombinationsPerCell_H_ */
#include <asn_internal.h>
