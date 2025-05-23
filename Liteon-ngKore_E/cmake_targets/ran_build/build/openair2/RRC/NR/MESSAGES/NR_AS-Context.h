/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_AS_Context_H_
#define	_NR_AS_Context_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_ReestablishmentInfo;
struct NR_ConfigRestrictInfoSCG;
struct NR_RAN_NotificationAreaInfo;
struct NR_BandCombinationInfoSN;
struct NR_ConfigRestrictInfoDAPS_r16;
struct NR_NeedForGapsInfoNR_r16;
struct NR_ConfigRestrictInfoDAPS_v1640;
struct NR_NeedForGapNCSG_InfoNR_r17;
struct NR_NeedForGapNCSG_InfoEUTRA_r17;

/* NR_AS-Context */
typedef struct NR_AS_Context {
	struct NR_ReestablishmentInfo	*reestablishmentInfo;	/* OPTIONAL */
	struct NR_ConfigRestrictInfoSCG	*configRestrictInfo;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_AS_Context__ext1 {
		struct NR_RAN_NotificationAreaInfo	*ran_NotificationAreaInfo;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_AS_Context__ext2 {
		OCTET_STRING_t	*ueAssistanceInformation;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_AS_Context__ext3 {
		struct NR_BandCombinationInfoSN	*selectedBandCombinationSN;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct NR_AS_Context__ext4 {
		struct NR_ConfigRestrictInfoDAPS_r16	*configRestrictInfoDAPS_r16;	/* OPTIONAL */
		OCTET_STRING_t	*sidelinkUEInformationNR_r16;	/* OPTIONAL */
		OCTET_STRING_t	*sidelinkUEInformationEUTRA_r16;	/* OPTIONAL */
		OCTET_STRING_t	*ueAssistanceInformationEUTRA_r16;	/* OPTIONAL */
		OCTET_STRING_t	*ueAssistanceInformationSCG_r16;	/* OPTIONAL */
		struct NR_NeedForGapsInfoNR_r16	*needForGapsInfoNR_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct NR_AS_Context__ext5 {
		struct NR_ConfigRestrictInfoDAPS_v1640	*configRestrictInfoDAPS_v1640;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct NR_AS_Context__ext6 {
		struct NR_NeedForGapNCSG_InfoNR_r17	*needForGapNCSG_InfoNR_r17;	/* OPTIONAL */
		struct NR_NeedForGapNCSG_InfoEUTRA_r17	*needForGapNCSG_InfoEUTRA_r17;	/* OPTIONAL */
		OCTET_STRING_t	*mbsInterestIndication_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_AS_Context_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_AS_Context;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_AS_Context_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_AS_Context_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_ReestablishmentInfo.h"
#include "NR_ConfigRestrictInfoSCG.h"
#include "NR_RAN-NotificationAreaInfo.h"
#include "NR_BandCombinationInfoSN.h"
#include "NR_ConfigRestrictInfoDAPS-r16.h"
#include "NR_NeedForGapsInfoNR-r16.h"
#include "NR_ConfigRestrictInfoDAPS-v1640.h"
#include "NR_NeedForGapNCSG-InfoNR-r17.h"
#include "NR_NeedForGapNCSG-InfoEUTRA-r17.h"

#endif	/* _NR_AS_Context_H_ */
#include <asn_internal.h>
