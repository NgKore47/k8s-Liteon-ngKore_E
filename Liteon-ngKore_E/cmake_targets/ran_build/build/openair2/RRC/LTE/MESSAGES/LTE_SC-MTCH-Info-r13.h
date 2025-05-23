/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SC_MTCH_Info_r13_H_
#define	_LTE_SC_MTCH_Info_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MBMSSessionInfo-r13.h"
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SC_MTCH_Info_r13__ext1__p_a_r13 {
	LTE_SC_MTCH_Info_r13__ext1__p_a_r13_dB_6	= 0,
	LTE_SC_MTCH_Info_r13__ext1__p_a_r13_dB_4dot77	= 1,
	LTE_SC_MTCH_Info_r13__ext1__p_a_r13_dB_3	= 2,
	LTE_SC_MTCH_Info_r13__ext1__p_a_r13_dB_1dot77	= 3,
	LTE_SC_MTCH_Info_r13__ext1__p_a_r13_dB0	= 4,
	LTE_SC_MTCH_Info_r13__ext1__p_a_r13_dB1	= 5,
	LTE_SC_MTCH_Info_r13__ext1__p_a_r13_dB2	= 6,
	LTE_SC_MTCH_Info_r13__ext1__p_a_r13_dB3	= 7
} e_LTE_SC_MTCH_Info_r13__ext1__p_a_r13;

/* Forward declarations */
struct LTE_SC_MTCH_SchedulingInfo_r13;

/* LTE_SC-MTCH-Info-r13 */
typedef struct LTE_SC_MTCH_Info_r13 {
	LTE_MBMSSessionInfo_r13_t	 mbmsSessionInfo_r13;
	BIT_STRING_t	 g_RNTI_r13;
	struct LTE_SC_MTCH_SchedulingInfo_r13	*sc_mtch_schedulingInfo_r13;	/* OPTIONAL */
	BIT_STRING_t	*sc_mtch_neighbourCell_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SC_MTCH_Info_r13__ext1 {
		long	*p_a_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SC_MTCH_Info_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_p_a_r13_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SC_MTCH_Info_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SC_MTCH_Info_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SC_MTCH_Info_r13_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SC-MTCH-SchedulingInfo-r13.h"

#endif	/* _LTE_SC_MTCH_Info_r13_H_ */
#include <asn_internal.h>
