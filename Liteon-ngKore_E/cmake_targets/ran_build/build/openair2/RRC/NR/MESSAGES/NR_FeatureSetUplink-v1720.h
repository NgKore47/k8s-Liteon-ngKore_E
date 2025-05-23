/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_FeatureSetUplink_v1720_H_
#define	_NR_FeatureSetUplink_v1720_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_FeatureSetUplink_v1720__pucch_Repetition_F0_1_2_3_4_RRC_Config_r17 {
	NR_FeatureSetUplink_v1720__pucch_Repetition_F0_1_2_3_4_RRC_Config_r17_supported	= 0
} e_NR_FeatureSetUplink_v1720__pucch_Repetition_F0_1_2_3_4_RRC_Config_r17;
typedef enum NR_FeatureSetUplink_v1720__pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17 {
	NR_FeatureSetUplink_v1720__pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17_supported	= 0
} e_NR_FeatureSetUplink_v1720__pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17;
typedef enum NR_FeatureSetUplink_v1720__interSubslotFreqHopping_PUCCH_r17 {
	NR_FeatureSetUplink_v1720__interSubslotFreqHopping_PUCCH_r17_supported	= 0
} e_NR_FeatureSetUplink_v1720__interSubslotFreqHopping_PUCCH_r17;
typedef enum NR_FeatureSetUplink_v1720__semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17 {
	NR_FeatureSetUplink_v1720__semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17_supported	= 0
} e_NR_FeatureSetUplink_v1720__semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17;
typedef enum NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__pusch_PreparationLowPriority_r17 {
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__pusch_PreparationLowPriority_r17_sym0	= 0,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__pusch_PreparationLowPriority_r17_sym1	= 1,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__pusch_PreparationLowPriority_r17_sym2	= 2
} e_NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__pusch_PreparationLowPriority_r17;
typedef enum NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_15kHz_r17 {
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_15kHz_r17_sym0	= 0,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_15kHz_r17_sym1	= 1,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_15kHz_r17_sym2	= 2
} e_NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_15kHz_r17;
typedef enum NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_30kHz_r17 {
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_30kHz_r17_sym0	= 0,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_30kHz_r17_sym1	= 1,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_30kHz_r17_sym2	= 2,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_30kHz_r17_sym3	= 3,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_30kHz_r17_sym4	= 4
} e_NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_30kHz_r17;
typedef enum NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_60kHz_r17 {
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_60kHz_r17_sym0	= 0,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_60kHz_r17_sym1	= 1,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_60kHz_r17_sym2	= 2,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_60kHz_r17_sym3	= 3,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_60kHz_r17_sym4	= 4,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_60kHz_r17_sym5	= 5,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_60kHz_r17_sym6	= 6,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_60kHz_r17_sym7	= 7,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_60kHz_r17_sym8	= 8
} e_NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_60kHz_r17;
typedef enum NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17 {
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym0	= 0,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym1	= 1,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym2	= 2,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym3	= 3,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym4	= 4,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym5	= 5,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym6	= 6,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym7	= 7,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym8	= 8,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym9	= 9,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym10	= 10,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym11	= 11,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym12	= 12,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym13	= 13,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym14	= 14,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym15	= 15,
	NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17_sym16	= 16
} e_NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17__scs_120kHz_r17;
typedef enum NR_FeatureSetUplink_v1720__extendedDC_LocationReport_r17 {
	NR_FeatureSetUplink_v1720__extendedDC_LocationReport_r17_supported	= 0
} e_NR_FeatureSetUplink_v1720__extendedDC_LocationReport_r17;

/* NR_FeatureSetUplink-v1720 */
typedef struct NR_FeatureSetUplink_v1720 {
	long	*pucch_Repetition_F0_1_2_3_4_RRC_Config_r17;	/* OPTIONAL */
	long	*pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17;	/* OPTIONAL */
	long	*interSubslotFreqHopping_PUCCH_r17;	/* OPTIONAL */
	long	*semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17;	/* OPTIONAL */
	long	*phy_PrioritizationLowPriorityDG_HighPriorityCG_r17;	/* OPTIONAL */
	struct NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17 {
		long	 pusch_PreparationLowPriority_r17;
		struct NR_FeatureSetUplink_v1720__phy_PrioritizationHighPriorityDG_LowPriorityCG_r17__additionalCancellationTime_r17 {
			long	*scs_15kHz_r17;	/* OPTIONAL */
			long	*scs_30kHz_r17;	/* OPTIONAL */
			long	*scs_60kHz_r17;	/* OPTIONAL */
			long	*scs_120kHz_r17;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} additionalCancellationTime_r17;
		long	 maxNumberCarriers_r17;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *phy_PrioritizationHighPriorityDG_LowPriorityCG_r17;
	long	*extendedDC_LocationReport_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_FeatureSetUplink_v1720_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pucch_Repetition_F0_1_2_3_4_RRC_Config_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interSubslotFreqHopping_PUCCH_r17_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_PreparationLowPriority_r17_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_15kHz_r17_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_30kHz_r17_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_60kHz_r17_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scs_120kHz_r17_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_extendedDC_LocationReport_r17_56;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_FeatureSetUplink_v1720;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_FeatureSetUplink_v1720_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_FeatureSetUplink_v1720_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_FeatureSetUplink_v1720_H_ */
#include <asn_internal.h>
