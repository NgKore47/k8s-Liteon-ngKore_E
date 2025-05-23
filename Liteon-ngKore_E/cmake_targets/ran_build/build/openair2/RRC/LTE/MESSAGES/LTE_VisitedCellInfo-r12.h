/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_VisitedCellInfo_r12_H_
#define	_LTE_VisitedCellInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_CellGlobalIdEUTRA.h"
#include "LTE_PhysCellId.h"
#include "LTE_ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_VisitedCellInfo_r12__visitedCellId_r12_PR {
	LTE_VisitedCellInfo_r12__visitedCellId_r12_PR_NOTHING,	/* No components present */
	LTE_VisitedCellInfo_r12__visitedCellId_r12_PR_cellGlobalId_r12,
	LTE_VisitedCellInfo_r12__visitedCellId_r12_PR_pci_arfcn_r12
} LTE_VisitedCellInfo_r12__visitedCellId_r12_PR;

/* LTE_VisitedCellInfo-r12 */
typedef struct LTE_VisitedCellInfo_r12 {
	struct LTE_VisitedCellInfo_r12__visitedCellId_r12 {
		LTE_VisitedCellInfo_r12__visitedCellId_r12_PR present;
		union LTE_VisitedCellInfo_r12__LTE_visitedCellId_r12_u {
			LTE_CellGlobalIdEUTRA_t	 cellGlobalId_r12;
			struct LTE_VisitedCellInfo_r12__visitedCellId_r12__pci_arfcn_r12 {
				LTE_PhysCellId_t	 physCellId_r12;
				LTE_ARFCN_ValueEUTRA_r9_t	 carrierFreq_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} pci_arfcn_r12;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *visitedCellId_r12;
	long	 timeSpent_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VisitedCellInfo_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VisitedCellInfo_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_VisitedCellInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_VisitedCellInfo_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_VisitedCellInfo_r12_H_ */
#include <asn_internal.h>
