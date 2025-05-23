/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PathlossReferenceRS_r17_H_
#define	_NR_PathlossReferenceRS_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_PathlossReferenceRS-Id-r17.h"
#include "NR_AdditionalPCIIndex-r17.h"
#include "NR_SSB-Index.h"
#include "NR_NZP-CSI-RS-ResourceId.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PathlossReferenceRS_r17__referenceSignal_r17_PR {
	NR_PathlossReferenceRS_r17__referenceSignal_r17_PR_NOTHING,	/* No components present */
	NR_PathlossReferenceRS_r17__referenceSignal_r17_PR_ssb_Index,
	NR_PathlossReferenceRS_r17__referenceSignal_r17_PR_csi_RS_Index
} NR_PathlossReferenceRS_r17__referenceSignal_r17_PR;

/* NR_PathlossReferenceRS-r17 */
typedef struct NR_PathlossReferenceRS_r17 {
	NR_PathlossReferenceRS_Id_r17_t	 pathlossReferenceRS_Id_r17;
	struct NR_PathlossReferenceRS_r17__referenceSignal_r17 {
		NR_PathlossReferenceRS_r17__referenceSignal_r17_PR present;
		union NR_PathlossReferenceRS_r17__NR_referenceSignal_r17_u {
			NR_SSB_Index_t	 ssb_Index;
			NR_NZP_CSI_RS_ResourceId_t	 csi_RS_Index;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} referenceSignal_r17;
	NR_AdditionalPCIIndex_r17_t	*additionalPCI_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PathlossReferenceRS_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PathlossReferenceRS_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PathlossReferenceRS_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PathlossReferenceRS_r17_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PathlossReferenceRS_r17_H_ */
#include <asn_internal.h>
