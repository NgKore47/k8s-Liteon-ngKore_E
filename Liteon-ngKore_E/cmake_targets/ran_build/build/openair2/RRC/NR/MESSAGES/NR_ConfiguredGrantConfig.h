/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_ConfiguredGrantConfig_H_
#define	_NR_ConfiguredGrantConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NR_DMRS-UplinkConfig.h"
#include "NR_P0-PUSCH-AlphaSetId.h"
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include "NR_ConfiguredGrantConfigIndex-r16.h"
#include "NR_ConfiguredGrantConfigIndexMAC-r16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_ConfiguredGrantConfig__frequencyHopping {
	NR_ConfiguredGrantConfig__frequencyHopping_intraSlot	= 0,
	NR_ConfiguredGrantConfig__frequencyHopping_interSlot	= 1
} e_NR_ConfiguredGrantConfig__frequencyHopping;
typedef enum NR_ConfiguredGrantConfig__mcs_Table {
	NR_ConfiguredGrantConfig__mcs_Table_qam256	= 0,
	NR_ConfiguredGrantConfig__mcs_Table_qam64LowSE	= 1
} e_NR_ConfiguredGrantConfig__mcs_Table;
typedef enum NR_ConfiguredGrantConfig__mcs_TableTransformPrecoder {
	NR_ConfiguredGrantConfig__mcs_TableTransformPrecoder_qam256	= 0,
	NR_ConfiguredGrantConfig__mcs_TableTransformPrecoder_qam64LowSE	= 1
} e_NR_ConfiguredGrantConfig__mcs_TableTransformPrecoder;
typedef enum NR_ConfiguredGrantConfig__resourceAllocation {
	NR_ConfiguredGrantConfig__resourceAllocation_resourceAllocationType0	= 0,
	NR_ConfiguredGrantConfig__resourceAllocation_resourceAllocationType1	= 1,
	NR_ConfiguredGrantConfig__resourceAllocation_dynamicSwitch	= 2
} e_NR_ConfiguredGrantConfig__resourceAllocation;
typedef enum NR_ConfiguredGrantConfig__rbg_Size {
	NR_ConfiguredGrantConfig__rbg_Size_config2	= 0
} e_NR_ConfiguredGrantConfig__rbg_Size;
typedef enum NR_ConfiguredGrantConfig__powerControlLoopToUse {
	NR_ConfiguredGrantConfig__powerControlLoopToUse_n0	= 0,
	NR_ConfiguredGrantConfig__powerControlLoopToUse_n1	= 1
} e_NR_ConfiguredGrantConfig__powerControlLoopToUse;
typedef enum NR_ConfiguredGrantConfig__transformPrecoder {
	NR_ConfiguredGrantConfig__transformPrecoder_enabled	= 0,
	NR_ConfiguredGrantConfig__transformPrecoder_disabled	= 1
} e_NR_ConfiguredGrantConfig__transformPrecoder;
typedef enum NR_ConfiguredGrantConfig__repK {
	NR_ConfiguredGrantConfig__repK_n1	= 0,
	NR_ConfiguredGrantConfig__repK_n2	= 1,
	NR_ConfiguredGrantConfig__repK_n4	= 2,
	NR_ConfiguredGrantConfig__repK_n8	= 3
} e_NR_ConfiguredGrantConfig__repK;
typedef enum NR_ConfiguredGrantConfig__repK_RV {
	NR_ConfiguredGrantConfig__repK_RV_s1_0231	= 0,
	NR_ConfiguredGrantConfig__repK_RV_s2_0303	= 1,
	NR_ConfiguredGrantConfig__repK_RV_s3_0000	= 2
} e_NR_ConfiguredGrantConfig__repK_RV;
typedef enum NR_ConfiguredGrantConfig__periodicity {
	NR_ConfiguredGrantConfig__periodicity_sym2	= 0,
	NR_ConfiguredGrantConfig__periodicity_sym7	= 1,
	NR_ConfiguredGrantConfig__periodicity_sym1x14	= 2,
	NR_ConfiguredGrantConfig__periodicity_sym2x14	= 3,
	NR_ConfiguredGrantConfig__periodicity_sym4x14	= 4,
	NR_ConfiguredGrantConfig__periodicity_sym5x14	= 5,
	NR_ConfiguredGrantConfig__periodicity_sym8x14	= 6,
	NR_ConfiguredGrantConfig__periodicity_sym10x14	= 7,
	NR_ConfiguredGrantConfig__periodicity_sym16x14	= 8,
	NR_ConfiguredGrantConfig__periodicity_sym20x14	= 9,
	NR_ConfiguredGrantConfig__periodicity_sym32x14	= 10,
	NR_ConfiguredGrantConfig__periodicity_sym40x14	= 11,
	NR_ConfiguredGrantConfig__periodicity_sym64x14	= 12,
	NR_ConfiguredGrantConfig__periodicity_sym80x14	= 13,
	NR_ConfiguredGrantConfig__periodicity_sym128x14	= 14,
	NR_ConfiguredGrantConfig__periodicity_sym160x14	= 15,
	NR_ConfiguredGrantConfig__periodicity_sym256x14	= 16,
	NR_ConfiguredGrantConfig__periodicity_sym320x14	= 17,
	NR_ConfiguredGrantConfig__periodicity_sym512x14	= 18,
	NR_ConfiguredGrantConfig__periodicity_sym640x14	= 19,
	NR_ConfiguredGrantConfig__periodicity_sym1024x14	= 20,
	NR_ConfiguredGrantConfig__periodicity_sym1280x14	= 21,
	NR_ConfiguredGrantConfig__periodicity_sym2560x14	= 22,
	NR_ConfiguredGrantConfig__periodicity_sym5120x14	= 23,
	NR_ConfiguredGrantConfig__periodicity_sym6	= 24,
	NR_ConfiguredGrantConfig__periodicity_sym1x12	= 25,
	NR_ConfiguredGrantConfig__periodicity_sym2x12	= 26,
	NR_ConfiguredGrantConfig__periodicity_sym4x12	= 27,
	NR_ConfiguredGrantConfig__periodicity_sym5x12	= 28,
	NR_ConfiguredGrantConfig__periodicity_sym8x12	= 29,
	NR_ConfiguredGrantConfig__periodicity_sym10x12	= 30,
	NR_ConfiguredGrantConfig__periodicity_sym16x12	= 31,
	NR_ConfiguredGrantConfig__periodicity_sym20x12	= 32,
	NR_ConfiguredGrantConfig__periodicity_sym32x12	= 33,
	NR_ConfiguredGrantConfig__periodicity_sym40x12	= 34,
	NR_ConfiguredGrantConfig__periodicity_sym64x12	= 35,
	NR_ConfiguredGrantConfig__periodicity_sym80x12	= 36,
	NR_ConfiguredGrantConfig__periodicity_sym128x12	= 37,
	NR_ConfiguredGrantConfig__periodicity_sym160x12	= 38,
	NR_ConfiguredGrantConfig__periodicity_sym256x12	= 39,
	NR_ConfiguredGrantConfig__periodicity_sym320x12	= 40,
	NR_ConfiguredGrantConfig__periodicity_sym512x12	= 41,
	NR_ConfiguredGrantConfig__periodicity_sym640x12	= 42,
	NR_ConfiguredGrantConfig__periodicity_sym1280x12	= 43,
	NR_ConfiguredGrantConfig__periodicity_sym2560x12	= 44
} e_NR_ConfiguredGrantConfig__periodicity;
typedef enum NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1__pusch_RepTypeIndicator_r16 {
	NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1__pusch_RepTypeIndicator_r16_pusch_RepTypeA	= 0,
	NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1__pusch_RepTypeIndicator_r16_pusch_RepTypeB	= 1
} e_NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1__pusch_RepTypeIndicator_r16;
typedef enum NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1__frequencyHoppingPUSCH_RepTypeB_r16 {
	NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1__frequencyHoppingPUSCH_RepTypeB_r16_interRepetition	= 0,
	NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1__frequencyHoppingPUSCH_RepTypeB_r16_interSlot	= 1
} e_NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1__frequencyHoppingPUSCH_RepTypeB_r16;
typedef enum NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1__timeReferenceSFN_r16 {
	NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1__timeReferenceSFN_r16_sfn512	= 0
} e_NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1__timeReferenceSFN_r16;
typedef enum NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16 {
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym7	= 0,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym1x14	= 1,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym2x14	= 2,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym3x14	= 3,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym4x14	= 4,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym5x14	= 5,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym6x14	= 6,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym7x14	= 7,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym8x14	= 8,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym9x14	= 9,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym10x14	= 10,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym11x14	= 11,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym12x14	= 12,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym13x14	= 13,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym14x14	= 14,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym15x14	= 15,
	NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16_sym16x14	= 16
} e_NR_ConfiguredGrantConfig__ext1__cg_minDFI_Delay_r16;
typedef enum NR_ConfiguredGrantConfig__ext1__cg_UCI_Multiplexing_r16 {
	NR_ConfiguredGrantConfig__ext1__cg_UCI_Multiplexing_r16_enabled	= 0
} e_NR_ConfiguredGrantConfig__ext1__cg_UCI_Multiplexing_r16;
typedef enum NR_ConfiguredGrantConfig__ext1__startingFromRV0_r16 {
	NR_ConfiguredGrantConfig__ext1__startingFromRV0_r16_on	= 0,
	NR_ConfiguredGrantConfig__ext1__startingFromRV0_r16_off	= 1
} e_NR_ConfiguredGrantConfig__ext1__startingFromRV0_r16;
typedef enum NR_ConfiguredGrantConfig__ext1__phy_PriorityIndex_r16 {
	NR_ConfiguredGrantConfig__ext1__phy_PriorityIndex_r16_p0	= 0,
	NR_ConfiguredGrantConfig__ext1__phy_PriorityIndex_r16_p1	= 1
} e_NR_ConfiguredGrantConfig__ext1__phy_PriorityIndex_r16;
typedef enum NR_ConfiguredGrantConfig__ext1__autonomousTx_r16 {
	NR_ConfiguredGrantConfig__ext1__autonomousTx_r16_enabled	= 0
} e_NR_ConfiguredGrantConfig__ext1__autonomousTx_r16;
typedef enum NR_ConfiguredGrantConfig__ext2__mappingPattern_r17 {
	NR_ConfiguredGrantConfig__ext2__mappingPattern_r17_cyclicMapping	= 0,
	NR_ConfiguredGrantConfig__ext2__mappingPattern_r17_sequentialMapping	= 1
} e_NR_ConfiguredGrantConfig__ext2__mappingPattern_r17;
typedef enum NR_ConfiguredGrantConfig__ext2__powerControlLoopToUse2_r17 {
	NR_ConfiguredGrantConfig__ext2__powerControlLoopToUse2_r17_n0	= 0,
	NR_ConfiguredGrantConfig__ext2__powerControlLoopToUse2_r17_n1	= 1
} e_NR_ConfiguredGrantConfig__ext2__powerControlLoopToUse2_r17;
typedef enum NR_ConfiguredGrantConfig__ext2__repK_v1710 {
	NR_ConfiguredGrantConfig__ext2__repK_v1710_n12	= 0,
	NR_ConfiguredGrantConfig__ext2__repK_v1710_n16	= 1,
	NR_ConfiguredGrantConfig__ext2__repK_v1710_n24	= 2,
	NR_ConfiguredGrantConfig__ext2__repK_v1710_n32	= 3
} e_NR_ConfiguredGrantConfig__ext2__repK_v1710;

/* Forward declarations */
struct NR_SetupRelease_CG_UCI_OnPUSCH;
struct NR_CG_SDT_Configuration_r17;
struct NR_CG_StartingOffsets_r16;
struct NR_CG_COT_Sharing_r16;
struct NR_SetupRelease_BetaOffsetsCrossPriSelCG_r17;
struct NR_CG_COT_Sharing_r17;

/* NR_ConfiguredGrantConfig */
typedef struct NR_ConfiguredGrantConfig {
	long	*frequencyHopping;	/* OPTIONAL */
	NR_DMRS_UplinkConfig_t	 cg_DMRS_Configuration;
	long	*mcs_Table;	/* OPTIONAL */
	long	*mcs_TableTransformPrecoder;	/* OPTIONAL */
	struct NR_SetupRelease_CG_UCI_OnPUSCH	*uci_OnPUSCH;	/* OPTIONAL */
	long	 resourceAllocation;
	long	*rbg_Size;	/* OPTIONAL */
	long	 powerControlLoopToUse;
	NR_P0_PUSCH_AlphaSetId_t	 p0_PUSCH_Alpha;
	long	*transformPrecoder;	/* OPTIONAL */
	long	 nrofHARQ_Processes;
	long	 repK;
	long	*repK_RV;	/* OPTIONAL */
	long	 periodicity;
	long	*configuredGrantTimer;	/* OPTIONAL */
	struct NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant {
		long	 timeDomainOffset;
		long	 timeDomainAllocation;
		BIT_STRING_t	 frequencyDomainAllocation;
		long	 antennaPort;
		long	*dmrs_SeqInitialization;	/* OPTIONAL */
		long	 precodingAndNumberOfLayers;
		long	*srs_ResourceIndicator;	/* OPTIONAL */
		long	 mcsAndTBS;
		long	*frequencyHoppingOffset;	/* OPTIONAL */
		long	 pathlossReferenceIndex;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext1 {
			long	*pusch_RepTypeIndicator_r16;	/* OPTIONAL */
			long	*frequencyHoppingPUSCH_RepTypeB_r16;	/* OPTIONAL */
			long	*timeReferenceSFN_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext1;
		struct NR_ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant__ext2 {
			long	*pathlossReferenceIndex2_r17;	/* OPTIONAL */
			long	*srs_ResourceIndicator2_r17;	/* OPTIONAL */
			long	*precodingAndNumberOfLayers2_r17;	/* OPTIONAL */
			long	*timeDomainAllocation_v1710;	/* OPTIONAL */
			long	*timeDomainOffset_r17;	/* OPTIONAL */
			struct NR_CG_SDT_Configuration_r17	*cg_SDT_Configuration_r17;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext2;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rrc_ConfiguredUplinkGrant;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_ConfiguredGrantConfig__ext1 {
		long	*cg_RetransmissionTimer_r16;	/* OPTIONAL */
		long	*cg_minDFI_Delay_r16;	/* OPTIONAL */
		long	*cg_nrofPUSCH_InSlot_r16;	/* OPTIONAL */
		long	*cg_nrofSlots_r16;	/* OPTIONAL */
		struct NR_CG_StartingOffsets_r16	*cg_StartingOffsets_r16;	/* OPTIONAL */
		long	*cg_UCI_Multiplexing_r16;	/* OPTIONAL */
		long	*cg_COT_SharingOffset_r16;	/* OPTIONAL */
		long	*betaOffsetCG_UCI_r16;	/* OPTIONAL */
		struct NR_ConfiguredGrantConfig__ext1__cg_COT_SharingList_r16 {
			A_SEQUENCE_OF(struct NR_CG_COT_Sharing_r16) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *cg_COT_SharingList_r16;
		long	*harq_ProcID_Offset_r16;	/* OPTIONAL */
		long	*harq_ProcID_Offset2_r16;	/* OPTIONAL */
		NR_ConfiguredGrantConfigIndex_r16_t	*configuredGrantConfigIndex_r16;	/* OPTIONAL */
		NR_ConfiguredGrantConfigIndexMAC_r16_t	*configuredGrantConfigIndexMAC_r16;	/* OPTIONAL */
		long	*periodicityExt_r16;	/* OPTIONAL */
		long	*startingFromRV0_r16;	/* OPTIONAL */
		long	*phy_PriorityIndex_r16;	/* OPTIONAL */
		long	*autonomousTx_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_ConfiguredGrantConfig__ext2 {
		struct NR_SetupRelease_BetaOffsetsCrossPriSelCG_r17	*cg_betaOffsetsCrossPri0_r17;	/* OPTIONAL */
		struct NR_SetupRelease_BetaOffsetsCrossPriSelCG_r17	*cg_betaOffsetsCrossPri1_r17;	/* OPTIONAL */
		long	*mappingPattern_r17;	/* OPTIONAL */
		long	*sequenceOffsetForRV_r17;	/* OPTIONAL */
		NR_P0_PUSCH_AlphaSetId_t	*p0_PUSCH_Alpha2_r17;	/* OPTIONAL */
		long	*powerControlLoopToUse2_r17;	/* OPTIONAL */
		struct NR_ConfiguredGrantConfig__ext2__cg_COT_SharingList_r17 {
			A_SEQUENCE_OF(struct NR_CG_COT_Sharing_r17) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *cg_COT_SharingList_r17;
		long	*periodicityExt_r17;	/* OPTIONAL */
		long	*repK_v1710;	/* OPTIONAL */
		long	*nrofHARQ_Processes_v1700;	/* OPTIONAL */
		long	*harq_ProcID_Offset2_v1700;	/* OPTIONAL */
		long	*configuredGrantTimer_v1700;	/* OPTIONAL */
		long	*cg_minDFI_Delay_v1710;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_ConfiguredGrantConfig__ext3 {
		long	*harq_ProcID_Offset_v1730;	/* OPTIONAL */
		long	*cg_nrofSlots_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ConfiguredGrantConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_frequencyHopping_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mcs_Table_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mcs_TableTransformPrecoder_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_resourceAllocation_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rbg_Size_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_powerControlLoopToUse_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_transformPrecoder_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_repK_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_repK_RV_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_periodicity_36;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_RepTypeIndicator_r16_96;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_frequencyHoppingPUSCH_RepTypeB_r16_99;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_timeReferenceSFN_r16_102;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cg_minDFI_Delay_r16_114;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_cg_UCI_Multiplexing_r16_135;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_startingFromRV0_r16_146;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_phy_PriorityIndex_r16_149;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_autonomousTx_r16_152;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mappingPattern_r17_157;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_powerControlLoopToUse2_r17_162;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_repK_v1710_168;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_ConfiguredGrantConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ConfiguredGrantConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ConfiguredGrantConfig_1[19];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"
#include "NR_CG-SDT-Configuration-r17.h"
#include "NR_CG-StartingOffsets-r16.h"
#include "NR_CG-COT-Sharing-r16.h"
#include "NR_CG-COT-Sharing-r17.h"

#endif	/* _NR_ConfiguredGrantConfig_H_ */
#include <asn_internal.h>
