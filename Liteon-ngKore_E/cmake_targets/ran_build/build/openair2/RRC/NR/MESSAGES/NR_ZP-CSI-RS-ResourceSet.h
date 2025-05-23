/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_ZP_CSI_RS_ResourceSet_H_
#define	_NR_ZP_CSI_RS_ResourceSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ZP-CSI-RS-ResourceSetId.h"
#include "NR_ZP-CSI-RS-ResourceId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_ZP-CSI-RS-ResourceSet */
typedef struct NR_ZP_CSI_RS_ResourceSet {
	NR_ZP_CSI_RS_ResourceSetId_t	 zp_CSI_RS_ResourceSetId;
	struct NR_ZP_CSI_RS_ResourceSet__zp_CSI_RS_ResourceIdList {
		A_SEQUENCE_OF(NR_ZP_CSI_RS_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} zp_CSI_RS_ResourceIdList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ZP_CSI_RS_ResourceSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_ZP_CSI_RS_ResourceSet;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ZP_CSI_RS_ResourceSet_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ZP_CSI_RS_ResourceSet_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_ZP_CSI_RS_ResourceSet_H_ */
#include <asn_internal.h>
