/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_TCI_State_H_
#define	_NR_TCI_State_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_TCI-StateId.h"
#include "NR_QCL-Info.h"
#include "NR_AdditionalPCIIndex-r17.h"
#include "NR_PathlossReferenceRS-Id-r17.h"
#include "NR_Uplink-powerControlId-r17.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_QCL_Info;

/* NR_TCI-State */
typedef struct NR_TCI_State {
	NR_TCI_StateId_t	 tci_StateId;
	NR_QCL_Info_t	 qcl_Type1;
	struct NR_QCL_Info	*qcl_Type2;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_TCI_State__ext1 {
		NR_AdditionalPCIIndex_r17_t	*additionalPCI_r17;	/* OPTIONAL */
		NR_PathlossReferenceRS_Id_r17_t	*pathlossReferenceRS_Id_r17;	/* OPTIONAL */
		NR_Uplink_powerControlId_r17_t	*ul_powerControl_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_TCI_State_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_TCI_State;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_TCI_State_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_TCI_State_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_QCL-Info.h"

#endif	/* _NR_TCI_State_H_ */
#include <asn_internal.h>
