/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_LastVisitedCell_Item_H_
#define	_S1AP_LastVisitedCell_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_LastVisitedEUTRANCellInformation.h"
#include "S1AP_LastVisitedUTRANCellInformation.h"
#include "S1AP_LastVisitedGERANCellInformation.h"
#include "S1AP_LastVisitedNGRANCellInformation.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_LastVisitedCell_Item_PR {
	S1AP_LastVisitedCell_Item_PR_NOTHING,	/* No components present */
	S1AP_LastVisitedCell_Item_PR_e_UTRAN_Cell,
	S1AP_LastVisitedCell_Item_PR_uTRAN_Cell,
	S1AP_LastVisitedCell_Item_PR_gERAN_Cell,
	/* Extensions may appear below */
	S1AP_LastVisitedCell_Item_PR_nG_RAN_Cell
} S1AP_LastVisitedCell_Item_PR;

/* S1AP_LastVisitedCell-Item */
typedef struct S1AP_LastVisitedCell_Item {
	S1AP_LastVisitedCell_Item_PR present;
	union S1AP_LastVisitedCell_Item_u {
		S1AP_LastVisitedEUTRANCellInformation_t	 e_UTRAN_Cell;
		S1AP_LastVisitedUTRANCellInformation_t	 uTRAN_Cell;
		S1AP_LastVisitedGERANCellInformation_t	 gERAN_Cell;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1AP_LastVisitedNGRANCellInformation_t	 nG_RAN_Cell;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_LastVisitedCell_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_LastVisitedCell_Item;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_LastVisitedCell_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_LastVisitedCell_Item_1[4];
extern asn_per_constraints_t asn_PER_type_S1AP_LastVisitedCell_Item_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_LastVisitedCell_Item_H_ */
#include <asn_internal.h>
