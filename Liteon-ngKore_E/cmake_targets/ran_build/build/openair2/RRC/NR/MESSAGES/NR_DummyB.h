/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_DummyB_H_
#define	_NR_DummyB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DummyB__maxNumberTxPortsPerResource {
	NR_DummyB__maxNumberTxPortsPerResource_p2	= 0,
	NR_DummyB__maxNumberTxPortsPerResource_p4	= 1,
	NR_DummyB__maxNumberTxPortsPerResource_p8	= 2,
	NR_DummyB__maxNumberTxPortsPerResource_p12	= 3,
	NR_DummyB__maxNumberTxPortsPerResource_p16	= 4,
	NR_DummyB__maxNumberTxPortsPerResource_p24	= 5,
	NR_DummyB__maxNumberTxPortsPerResource_p32	= 6
} e_NR_DummyB__maxNumberTxPortsPerResource;
typedef enum NR_DummyB__supportedCodebookMode {
	NR_DummyB__supportedCodebookMode_mode1	= 0,
	NR_DummyB__supportedCodebookMode_mode1AndMode2	= 1
} e_NR_DummyB__supportedCodebookMode;

/* NR_DummyB */
typedef struct NR_DummyB {
	long	 maxNumberTxPortsPerResource;
	long	 maxNumberResources;
	long	 totalNumberTxPorts;
	long	 supportedCodebookMode;
	long	 maxNumberCSI_RS_PerResourceSet;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DummyB_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberTxPortsPerResource_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_supportedCodebookMode_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DummyB;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DummyB_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DummyB_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DummyB_H_ */
#include <asn_internal.h>
