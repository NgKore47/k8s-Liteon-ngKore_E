/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_VarMeasReport_H_
#define	_NR_VarMeasReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_MeasId.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_CellsTriggeredList;
struct NR_CLI_TriggeredList_r16;
struct NR_Tx_PoolMeasList_r16;
struct NR_RelaysTriggeredList_r17;

/* NR_VarMeasReport */
typedef struct NR_VarMeasReport {
	NR_MeasId_t	 measId;
	struct NR_CellsTriggeredList	*cellsTriggeredList;	/* OPTIONAL */
	long	 numberOfReportsSent;
	struct NR_CLI_TriggeredList_r16	*cli_TriggeredList_r16;	/* OPTIONAL */
	struct NR_Tx_PoolMeasList_r16	*tx_PoolMeasToAddModListNR_r16;	/* OPTIONAL */
	struct NR_RelaysTriggeredList_r17	*relaysTriggeredList_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_VarMeasReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_VarMeasReport;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_VarMeasReport_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_VarMeasReport_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CellsTriggeredList.h"
#include "NR_CLI-TriggeredList-r16.h"
#include "NR_Tx-PoolMeasList-r16.h"
#include "NR_RelaysTriggeredList-r17.h"

#endif	/* _NR_VarMeasReport_H_ */
#include <asn_internal.h>
