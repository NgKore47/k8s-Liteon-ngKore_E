/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/M2AP/MESSAGES/ASN1/m2ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/M2AP/MESSAGES`
 */

#ifndef	_M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item_H_
#define	_M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "M2AP_MBSFN-Area-ID.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__pdcchLength {
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__pdcchLength_s1	= 0,
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__pdcchLength_s2	= 1
	/*
	 * Enumeration is extensible
	 */
} e_M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__pdcchLength;
typedef enum M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__repetitionPeriod {
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__repetitionPeriod_rf32	= 0,
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__repetitionPeriod_rf64	= 1,
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__repetitionPeriod_rf128	= 2,
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__repetitionPeriod_rf256	= 3
} e_M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__repetitionPeriod;
typedef enum M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__modificationPeriod {
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__modificationPeriod_rf512	= 0,
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__modificationPeriod_rf1024	= 1
} e_M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__modificationPeriod;
typedef enum M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__modulationAndCodingScheme {
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__modulationAndCodingScheme_n2	= 0,
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__modulationAndCodingScheme_n7	= 1,
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__modulationAndCodingScheme_n13	= 2,
	M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__modulationAndCodingScheme_n19	= 3
} e_M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item__modulationAndCodingScheme;

/* Forward declarations */
struct M2AP_Cell_Information_List;
struct M2AP_ProtocolExtensionContainer;

/* M2AP_MCCHrelatedBCCH-ConfigPerMBSFNArea-Item */
typedef struct M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item {
	M2AP_MBSFN_Area_ID_t	 mbsfnArea;
	long	 pdcchLength;
	long	 repetitionPeriod;
	long	 offset;
	long	 modificationPeriod;
	BIT_STRING_t	 subframeAllocationInfo;
	long	 modulationAndCodingScheme;
	struct M2AP_Cell_Information_List	*cellInformationList;	/* OPTIONAL */
	struct M2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_M2AP_pdcchLength_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_M2AP_repetitionPeriod_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_M2AP_modificationPeriod_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_M2AP_modulationAndCodingScheme_17;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _M2AP_MCCHrelatedBCCH_ConfigPerMBSFNArea_Item_H_ */
#include <asn_internal.h>
