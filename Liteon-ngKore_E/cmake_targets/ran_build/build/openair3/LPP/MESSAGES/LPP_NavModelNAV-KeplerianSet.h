/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_NavModelNAV_KeplerianSet_H_
#define	_LPP_NavModelNAV_KeplerianSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPP_NavModelNAV-KeplerianSet */
typedef struct LPP_NavModelNAV_KeplerianSet {
	long	 navURA;
	long	 navFitFlag;
	long	 navToe;
	long	 navOmega;
	long	 navDeltaN;
	long	 navM0;
	long	 navOmegaADot;
	unsigned long	 navE;
	long	 navIDot;
	unsigned long	 navAPowerHalf;
	long	 navI0;
	long	 navOmegaA0;
	long	 navCrs;
	long	 navCis;
	long	 navCus;
	long	 navCrc;
	long	 navCic;
	long	 navCuc;
	struct LPP_NavModelNAV_KeplerianSet__addNAVparam {
		long	 ephemCodeOnL2;
		long	 ephemL2Pflag;
		struct LPP_NavModelNAV_KeplerianSet__addNAVparam__ephemSF1Rsvd {
			long	 reserved1;
			long	 reserved2;
			long	 reserved3;
			long	 reserved4;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ephemSF1Rsvd;
		long	 ephemAODA;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *addNAVparam;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_NavModelNAV_KeplerianSet_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_navE_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_navAPowerHalf_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_NavModelNAV_KeplerianSet;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_NavModelNAV_KeplerianSet_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_NavModelNAV_KeplerianSet_1[19];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_NavModelNAV_KeplerianSet_H_ */
#include <asn_internal.h>
