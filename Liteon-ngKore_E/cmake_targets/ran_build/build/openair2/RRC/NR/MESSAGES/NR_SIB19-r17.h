/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SIB19_r17_H_
#define	_NR_SIB19_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>
#include "NR_ReferenceLocation-r17.h"
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_NTN_Config_r17;
struct NR_NTN_NeighCellConfigList_r17;

/* NR_SIB19-r17 */
typedef struct NR_SIB19_r17 {
	struct NR_NTN_Config_r17	*ntn_Config_r17;	/* OPTIONAL */
	INTEGER_t	*t_Service_r17;	/* OPTIONAL */
	NR_ReferenceLocation_r17_t	*referenceLocation_r17;	/* OPTIONAL */
	long	*distanceThresh_r17;	/* OPTIONAL */
	struct NR_NTN_NeighCellConfigList_r17	*ntn_NeighCellConfigList_r17;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_SIB19_r17__ext1 {
		struct NR_NTN_NeighCellConfigList_r17	*ntn_NeighCellConfigListExt_v1720;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SIB19_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SIB19_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SIB19_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SIB19_r17_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_NTN-Config-r17.h"
#include "NR_NTN-NeighCellConfigList-r17.h"

#endif	/* _NR_SIB19_r17_H_ */
#include <asn_internal.h>
