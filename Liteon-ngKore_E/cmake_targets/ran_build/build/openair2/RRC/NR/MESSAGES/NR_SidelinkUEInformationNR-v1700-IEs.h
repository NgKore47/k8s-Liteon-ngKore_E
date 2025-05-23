/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SidelinkUEInformationNR_v1700_IEs_H_
#define	_NR_SidelinkUEInformationNR_v1700_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NR_SL-SourceIdentity-r17.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SidelinkUEInformationNR_v1700_IEs__ue_Type_r17 {
	NR_SidelinkUEInformationNR_v1700_IEs__ue_Type_r17_relayUE	= 0,
	NR_SidelinkUEInformationNR_v1700_IEs__ue_Type_r17_remoteUE	= 1
} e_NR_SidelinkUEInformationNR_v1700_IEs__ue_Type_r17;

/* Forward declarations */
struct NR_SL_TxResourceReqList_v1700;
struct NR_SL_RxDRX_ReportList_v1700;
struct NR_SL_RxInterestedGC_BC_DestList_r17;
struct NR_SL_InterestedFreqList_r16;
struct NR_SL_TxResourceReqListDisc_r17;
struct NR_SL_TxResourceReqListCommRelay_r17;

/* NR_SidelinkUEInformationNR-v1700-IEs */
typedef struct NR_SidelinkUEInformationNR_v1700_IEs {
	struct NR_SL_TxResourceReqList_v1700	*sl_TxResourceReqList_v1700;	/* OPTIONAL */
	struct NR_SL_RxDRX_ReportList_v1700	*sl_RxDRX_ReportList_v1700;	/* OPTIONAL */
	struct NR_SL_RxInterestedGC_BC_DestList_r17	*sl_RxInterestedGC_BC_DestList_r17;	/* OPTIONAL */
	struct NR_SL_InterestedFreqList_r16	*sl_RxInterestedFreqListDisc_r17;	/* OPTIONAL */
	struct NR_SL_TxResourceReqListDisc_r17	*sl_TxResourceReqListDisc_r17;	/* OPTIONAL */
	struct NR_SL_TxResourceReqListCommRelay_r17	*sl_TxResourceReqListCommRelay_r17;	/* OPTIONAL */
	long	*ue_Type_r17;	/* OPTIONAL */
	NR_SL_SourceIdentity_r17_t	*sl_SourceIdentityRemoteUE_r17;	/* OPTIONAL */
	struct NR_SidelinkUEInformationNR_v1700_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SidelinkUEInformationNR_v1700_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ue_Type_r17_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SidelinkUEInformationNR_v1700_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SidelinkUEInformationNR_v1700_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SidelinkUEInformationNR_v1700_IEs_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SL-TxResourceReqList-v1700.h"
#include "NR_SL-RxDRX-ReportList-v1700.h"
#include "NR_SL-RxInterestedGC-BC-DestList-r17.h"
#include "NR_SL-InterestedFreqList-r16.h"
#include "NR_SL-TxResourceReqListDisc-r17.h"
#include "NR_SL-TxResourceReqListCommRelay-r17.h"

#endif	/* _NR_SidelinkUEInformationNR_v1700_IEs_H_ */
#include <asn_internal.h>
