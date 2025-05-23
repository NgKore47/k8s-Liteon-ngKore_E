/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_Phy_ParametersCommon_v16a0_H_
#define	_NR_Phy_ParametersCommon_v16a0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_Phy_ParametersCommon_v16a0__srs_PeriodicityAndOffsetExt_r16 {
	NR_Phy_ParametersCommon_v16a0__srs_PeriodicityAndOffsetExt_r16_supported	= 0
} e_NR_Phy_ParametersCommon_v16a0__srs_PeriodicityAndOffsetExt_r16;

/* NR_Phy-ParametersCommon-v16a0 */
typedef struct NR_Phy_ParametersCommon_v16a0 {
	long	*srs_PeriodicityAndOffsetExt_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_Phy_ParametersCommon_v16a0_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_srs_PeriodicityAndOffsetExt_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_Phy_ParametersCommon_v16a0;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_Phy_ParametersCommon_v16a0_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_Phy_ParametersCommon_v16a0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_Phy_ParametersCommon_v16a0_H_ */
#include <asn_internal.h>
