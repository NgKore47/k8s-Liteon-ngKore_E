/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN1C-UsefulInformationObjectClasses"
 * 	found in "/opt/asn1c/share/asn1c/standard-modules/ASN1C-UsefulInformationObjectClasses.asn1"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_EXTERNAL_H_
#define	_LPP_EXTERNAL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include <NativeInteger.h>
#include <ObjectDescriptor.h>
#include <ANY.h>
#include <OCTET_STRING.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_EXTERNAL__encoding_PR {
	LPP_EXTERNAL__encoding_PR_NOTHING,	/* No components present */
	LPP_EXTERNAL__encoding_PR_single_ASN1_type,
	LPP_EXTERNAL__encoding_PR_octet_aligned,
	LPP_EXTERNAL__encoding_PR_arbitrary
} LPP_EXTERNAL__encoding_PR;

/* LPP_EXTERNAL */
typedef struct LPP_EXTERNAL {
	OBJECT_IDENTIFIER_t	*direct_reference;	/* OPTIONAL */
	long	*indirect_reference;	/* OPTIONAL */
	ObjectDescriptor_t	*data_value_descriptor;	/* OPTIONAL */
	struct LPP_EXTERNAL__encoding {
		LPP_EXTERNAL__encoding_PR present;
		union LPP_EXTERNAL__LPP_encoding_u {
			ANY_t	 single_ASN1_type;
			OCTET_STRING_t	 octet_aligned;
			BIT_STRING_t	 arbitrary;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} encoding;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_EXTERNAL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_EXTERNAL;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_EXTERNAL_H_ */
#include <asn_internal.h>
