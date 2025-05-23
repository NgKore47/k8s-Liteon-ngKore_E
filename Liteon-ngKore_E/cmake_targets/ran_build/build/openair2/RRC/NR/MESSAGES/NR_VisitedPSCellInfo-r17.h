/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_VisitedPSCellInfo_r17_H_
#define	_NR_VisitedPSCellInfo_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_VisitedPSCellInfo_r17__visitedCellId_r17_PR {
	NR_VisitedPSCellInfo_r17__visitedCellId_r17_PR_NOTHING,	/* No components present */
	NR_VisitedPSCellInfo_r17__visitedCellId_r17_PR_nr_CellId_r17,
	NR_VisitedPSCellInfo_r17__visitedCellId_r17_PR_eutra_CellId_r17
} NR_VisitedPSCellInfo_r17__visitedCellId_r17_PR;
typedef enum NR_VisitedPSCellInfo_r17__visitedCellId_r17__nr_CellId_r17_PR {
	NR_VisitedPSCellInfo_r17__visitedCellId_r17__nr_CellId_r17_PR_NOTHING,	/* No components present */
	NR_VisitedPSCellInfo_r17__visitedCellId_r17__nr_CellId_r17_PR_cgi_Info_r17,
	NR_VisitedPSCellInfo_r17__visitedCellId_r17__nr_CellId_r17_PR_pci_arfcn_r17
} NR_VisitedPSCellInfo_r17__visitedCellId_r17__nr_CellId_r17_PR;
typedef enum NR_VisitedPSCellInfo_r17__visitedCellId_r17__eutra_CellId_r17_PR {
	NR_VisitedPSCellInfo_r17__visitedCellId_r17__eutra_CellId_r17_PR_NOTHING,	/* No components present */
	NR_VisitedPSCellInfo_r17__visitedCellId_r17__eutra_CellId_r17_PR_cellGlobalId_r17,
	NR_VisitedPSCellInfo_r17__visitedCellId_r17__eutra_CellId_r17_PR_pci_arfcn_r17
} NR_VisitedPSCellInfo_r17__visitedCellId_r17__eutra_CellId_r17_PR;

/* Forward declarations */
struct NR_CGI_Info_Logging_r16;
struct NR_PCI_ARFCN_NR_r16;
struct NR_CGI_InfoEUTRALogging;
struct NR_PCI_ARFCN_EUTRA_r16;

/* NR_VisitedPSCellInfo-r17 */
typedef struct NR_VisitedPSCellInfo_r17 {
	struct NR_VisitedPSCellInfo_r17__visitedCellId_r17 {
		NR_VisitedPSCellInfo_r17__visitedCellId_r17_PR present;
		union NR_VisitedPSCellInfo_r17__NR_visitedCellId_r17_u {
			struct NR_VisitedPSCellInfo_r17__visitedCellId_r17__nr_CellId_r17 {
				NR_VisitedPSCellInfo_r17__visitedCellId_r17__nr_CellId_r17_PR present;
				union NR_VisitedPSCellInfo_r17__NR_visitedCellId_r17__NR_nr_CellId_r17_u {
					struct NR_CGI_Info_Logging_r16	*cgi_Info_r17;
					struct NR_PCI_ARFCN_NR_r16	*pci_arfcn_r17;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nr_CellId_r17;
			struct NR_VisitedPSCellInfo_r17__visitedCellId_r17__eutra_CellId_r17 {
				NR_VisitedPSCellInfo_r17__visitedCellId_r17__eutra_CellId_r17_PR present;
				union NR_VisitedPSCellInfo_r17__NR_visitedCellId_r17__NR_eutra_CellId_r17_u {
					struct NR_CGI_InfoEUTRALogging	*cellGlobalId_r17;
					struct NR_PCI_ARFCN_EUTRA_r16	*pci_arfcn_r17;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eutra_CellId_r17;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *visitedCellId_r17;
	long	 timeSpent_r17;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_VisitedPSCellInfo_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_VisitedPSCellInfo_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_VisitedPSCellInfo_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_VisitedPSCellInfo_r17_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CGI-Info-Logging-r16.h"
#include "NR_PCI-ARFCN-NR-r16.h"
#include "NR_CGI-InfoEUTRALogging.h"
#include "NR_PCI-ARFCN-EUTRA-r16.h"

#endif	/* _NR_VisitedPSCellInfo_r17_H_ */
#include <asn_internal.h>
