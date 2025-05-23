/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MBS_SessionInfo_r17_H_
#define	_NR_MBS_SessionInfo_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_TMGI-r17.h"
#include "NR_RNTI-Value.h"
#include "NR_MRB-ListBroadcast-r17.h"
#include "NR_DRX-ConfigPTM-Index-r17.h"
#include <BIT_STRING.h>
#include "NR_PDSCH-ConfigIndex-r17.h"
#include "NR_MTCH-SSB-MappingWindowIndex-r17.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_MBS-SessionInfo-r17 */
typedef struct NR_MBS_SessionInfo_r17 {
	NR_TMGI_r17_t	 mbs_SessionId_r17;
	NR_RNTI_Value_t	 g_RNTI_r17;
	NR_MRB_ListBroadcast_r17_t	 mrb_ListBroadcast_r17;
	NR_DRX_ConfigPTM_Index_r17_t	*mtch_SchedulingInfo_r17;	/* OPTIONAL */
	BIT_STRING_t	*mtch_NeighbourCell_r17;	/* OPTIONAL */
	NR_PDSCH_ConfigIndex_r17_t	*pdsch_ConfigIndex_r17;	/* OPTIONAL */
	NR_MTCH_SSB_MappingWindowIndex_r17_t	*mtch_SSB_MappingWindowIndex_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MBS_SessionInfo_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MBS_SessionInfo_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MBS_SessionInfo_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MBS_SessionInfo_r17_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MBS_SessionInfo_r17_H_ */
#include <asn_internal.h>
