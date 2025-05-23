/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_ChannelAccessConfig_r16_H_
#define	_NR_ChannelAccessConfig_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_ChannelAccessConfig_r16__energyDetectionConfig_r16_PR {
	NR_ChannelAccessConfig_r16__energyDetectionConfig_r16_PR_NOTHING,	/* No components present */
	NR_ChannelAccessConfig_r16__energyDetectionConfig_r16_PR_maxEnergyDetectionThreshold_r16,
	NR_ChannelAccessConfig_r16__energyDetectionConfig_r16_PR_energyDetectionThresholdOffset_r16
} NR_ChannelAccessConfig_r16__energyDetectionConfig_r16_PR;
typedef enum NR_ChannelAccessConfig_r16__absenceOfAnyOtherTechnology_r16 {
	NR_ChannelAccessConfig_r16__absenceOfAnyOtherTechnology_r16_true	= 0
} e_NR_ChannelAccessConfig_r16__absenceOfAnyOtherTechnology_r16;

/* NR_ChannelAccessConfig-r16 */
typedef struct NR_ChannelAccessConfig_r16 {
	struct NR_ChannelAccessConfig_r16__energyDetectionConfig_r16 {
		NR_ChannelAccessConfig_r16__energyDetectionConfig_r16_PR present;
		union NR_ChannelAccessConfig_r16__NR_energyDetectionConfig_r16_u {
			long	 maxEnergyDetectionThreshold_r16;
			long	 energyDetectionThresholdOffset_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *energyDetectionConfig_r16;
	long	*ul_toDL_COT_SharingED_Threshold_r16;	/* OPTIONAL */
	long	*absenceOfAnyOtherTechnology_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ChannelAccessConfig_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_absenceOfAnyOtherTechnology_r16_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_ChannelAccessConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ChannelAccessConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ChannelAccessConfig_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_ChannelAccessConfig_r16_H_ */
#include <asn_internal.h>
