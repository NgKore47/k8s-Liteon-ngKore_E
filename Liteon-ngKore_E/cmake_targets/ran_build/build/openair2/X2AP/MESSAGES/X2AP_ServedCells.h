/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_ServedCells_H_
#define	_X2AP_ServedCells_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "X2AP_ServedCell-Information.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_Neighbour_Information;
struct X2AP_ProtocolExtensionContainer;

/* Forward definitions */
typedef struct X2AP_ServedCells__Member {
	X2AP_ServedCell_Information_t	 servedCellInfo;
	struct X2AP_Neighbour_Information	*neighbour_Info;	/* OPTIONAL */
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedCells__Member;

/* X2AP_ServedCells */
typedef struct X2AP_ServedCells {
	A_SEQUENCE_OF(ServedCells__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ServedCells_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ServedCells;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_ServedCells_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_ServedCells_1[1];
extern asn_per_constraints_t asn_PER_type_X2AP_ServedCells_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ServedCells_H_ */
#include <asn_internal.h>
