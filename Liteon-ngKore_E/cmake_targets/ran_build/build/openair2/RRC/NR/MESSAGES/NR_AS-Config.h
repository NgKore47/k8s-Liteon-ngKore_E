/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_AS_Config_H_
#define	_NR_AS_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_AS_Config__ext2__sourceSCG_Configured {
	NR_AS_Config__ext2__sourceSCG_Configured_true	= 0
} e_NR_AS_Config__ext2__sourceSCG_Configured;

/* Forward declarations */
struct NR_SDT_Config_r17;

/* NR_AS-Config */
typedef struct NR_AS_Config {
	OCTET_STRING_t	 rrcReconfiguration;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_AS_Config__ext1 {
		OCTET_STRING_t	*sourceRB_SN_Config;	/* OPTIONAL */
		OCTET_STRING_t	*sourceSCG_NR_Config;	/* OPTIONAL */
		OCTET_STRING_t	*sourceSCG_EUTRA_Config;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_AS_Config__ext2 {
		long	*sourceSCG_Configured;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_AS_Config__ext3 {
		struct NR_SDT_Config_r17	*sdt_Config_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_AS_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sourceSCG_Configured_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_AS_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_AS_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_AS_Config_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SDT-Config-r17.h"

#endif	/* _NR_AS_Config_H_ */
#include <asn_internal.h>
