/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_GNSS_GenericAssistDataSupportElement_H_
#define	_LPP_GNSS_GenericAssistDataSupportElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_GNSS-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_SBAS_ID;
struct LPP_GNSS_TimeModelListSupport;
struct LPP_GNSS_DifferentialCorrectionsSupport;
struct LPP_GNSS_NavigationModelSupport;
struct LPP_GNSS_RealTimeIntegritySupport;
struct LPP_GNSS_DataBitAssistanceSupport;
struct LPP_GNSS_AcquisitionAssistanceSupport;
struct LPP_GNSS_AlmanacSupport;
struct LPP_GNSS_UTC_ModelSupport;
struct LPP_GNSS_AuxiliaryInformationSupport;
struct LPP_BDS_DifferentialCorrectionsSupport_r12;
struct LPP_BDS_GridModelSupport_r12;
struct LPP_GNSS_RTK_ObservationsSupport_r15;
struct LPP_GLO_RTK_BiasInformationSupport_r15;
struct LPP_GNSS_RTK_MAC_CorrectionDifferencesSupport_r15;
struct LPP_GNSS_RTK_ResidualsSupport_r15;
struct LPP_GNSS_RTK_FKP_GradientsSupport_r15;
struct LPP_GNSS_SSR_OrbitCorrectionsSupport_r15;
struct LPP_GNSS_SSR_ClockCorrectionsSupport_r15;
struct LPP_GNSS_SSR_CodeBiasSupport_r15;
struct LPP_GNSS_SSR_URA_Support_r16;
struct LPP_GNSS_SSR_PhaseBiasSupport_r16;
struct LPP_GNSS_SSR_STEC_CorrectionSupport_r16;
struct LPP_GNSS_SSR_GriddedCorrectionSupport_r16;
struct LPP_NavIC_DifferentialCorrectionsSupport_r16;
struct LPP_NavIC_GridModelSupport_r16;

/* LPP_GNSS-GenericAssistDataSupportElement */
typedef struct LPP_GNSS_GenericAssistDataSupportElement {
	LPP_GNSS_ID_t	 gnss_ID;
	struct LPP_SBAS_ID	*sbas_ID;	/* OPTIONAL */
	struct LPP_GNSS_TimeModelListSupport	*gnss_TimeModelsSupport;	/* OPTIONAL */
	struct LPP_GNSS_DifferentialCorrectionsSupport	*gnss_DifferentialCorrectionsSupport;	/* OPTIONAL */
	struct LPP_GNSS_NavigationModelSupport	*gnss_NavigationModelSupport;	/* OPTIONAL */
	struct LPP_GNSS_RealTimeIntegritySupport	*gnss_RealTimeIntegritySupport;	/* OPTIONAL */
	struct LPP_GNSS_DataBitAssistanceSupport	*gnss_DataBitAssistanceSupport;	/* OPTIONAL */
	struct LPP_GNSS_AcquisitionAssistanceSupport	*gnss_AcquisitionAssistanceSupport;	/* OPTIONAL */
	struct LPP_GNSS_AlmanacSupport	*gnss_AlmanacSupport;	/* OPTIONAL */
	struct LPP_GNSS_UTC_ModelSupport	*gnss_UTC_ModelSupport;	/* OPTIONAL */
	struct LPP_GNSS_AuxiliaryInformationSupport	*gnss_AuxiliaryInformationSupport;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_GNSS_GenericAssistDataSupportElement__ext1 {
		struct LPP_BDS_DifferentialCorrectionsSupport_r12	*bds_DifferentialCorrectionsSupport_r12;	/* OPTIONAL */
		struct LPP_BDS_GridModelSupport_r12	*bds_GridModelSupport_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LPP_GNSS_GenericAssistDataSupportElement__ext2 {
		struct LPP_GNSS_RTK_ObservationsSupport_r15	*gnss_RTK_ObservationsSupport_r15;	/* OPTIONAL */
		struct LPP_GLO_RTK_BiasInformationSupport_r15	*glo_RTK_BiasInformationSupport_r15;	/* OPTIONAL */
		struct LPP_GNSS_RTK_MAC_CorrectionDifferencesSupport_r15	*gnss_RTK_MAC_CorrectionDifferencesSupport_r15;	/* OPTIONAL */
		struct LPP_GNSS_RTK_ResidualsSupport_r15	*gnss_RTK_ResidualsSupport_r15;	/* OPTIONAL */
		struct LPP_GNSS_RTK_FKP_GradientsSupport_r15	*gnss_RTK_FKP_GradientsSupport_r15;	/* OPTIONAL */
		struct LPP_GNSS_SSR_OrbitCorrectionsSupport_r15	*gnss_SSR_OrbitCorrectionsSupport_r15;	/* OPTIONAL */
		struct LPP_GNSS_SSR_ClockCorrectionsSupport_r15	*gnss_SSR_ClockCorrectionsSupport_r15;	/* OPTIONAL */
		struct LPP_GNSS_SSR_CodeBiasSupport_r15	*gnss_SSR_CodeBiasSupport_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LPP_GNSS_GenericAssistDataSupportElement__ext3 {
		struct LPP_GNSS_SSR_URA_Support_r16	*gnss_SSR_URA_Support_r16;	/* OPTIONAL */
		struct LPP_GNSS_SSR_PhaseBiasSupport_r16	*gnss_SSR_PhaseBiasSupport_r16;	/* OPTIONAL */
		struct LPP_GNSS_SSR_STEC_CorrectionSupport_r16	*gnss_SSR_STEC_CorrectionSupport_r16;	/* OPTIONAL */
		struct LPP_GNSS_SSR_GriddedCorrectionSupport_r16	*gnss_SSR_GriddedCorrectionSupport_r16;	/* OPTIONAL */
		struct LPP_NavIC_DifferentialCorrectionsSupport_r16	*navic_DifferentialCorrectionsSupport_r16;	/* OPTIONAL */
		struct LPP_NavIC_GridModelSupport_r16	*navic_GridModelSupport_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_GenericAssistDataSupportElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_GenericAssistDataSupportElement;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_GenericAssistDataSupportElement_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_GNSS_GenericAssistDataSupportElement_1[14];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_GenericAssistDataSupportElement_H_ */
#include <asn_internal.h>
