/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SL_SyncAllowed_r14_H_
#define	_LTE_SL_SyncAllowed_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_SyncAllowed_r14__gnss_Sync_r14 {
	LTE_SL_SyncAllowed_r14__gnss_Sync_r14_true	= 0
} e_LTE_SL_SyncAllowed_r14__gnss_Sync_r14;
typedef enum LTE_SL_SyncAllowed_r14__enb_Sync_r14 {
	LTE_SL_SyncAllowed_r14__enb_Sync_r14_true	= 0
} e_LTE_SL_SyncAllowed_r14__enb_Sync_r14;
typedef enum LTE_SL_SyncAllowed_r14__ue_Sync_r14 {
	LTE_SL_SyncAllowed_r14__ue_Sync_r14_true	= 0
} e_LTE_SL_SyncAllowed_r14__ue_Sync_r14;

/* LTE_SL-SyncAllowed-r14 */
typedef struct LTE_SL_SyncAllowed_r14 {
	long	*gnss_Sync_r14;	/* OPTIONAL */
	long	*enb_Sync_r14;	/* OPTIONAL */
	long	*ue_Sync_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_SyncAllowed_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_gnss_Sync_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_enb_Sync_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ue_Sync_r14_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_SyncAllowed_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_SyncAllowed_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_SyncAllowed_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_SyncAllowed_r14_H_ */
#include <asn_internal.h>
