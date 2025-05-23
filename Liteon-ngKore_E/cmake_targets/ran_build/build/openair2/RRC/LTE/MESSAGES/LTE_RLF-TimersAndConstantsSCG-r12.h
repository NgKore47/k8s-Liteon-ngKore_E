/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RLF_TimersAndConstantsSCG_r12_H_
#define	_LTE_RLF_TimersAndConstantsSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RLF_TimersAndConstantsSCG_r12_PR {
	LTE_RLF_TimersAndConstantsSCG_r12_PR_NOTHING,	/* No components present */
	LTE_RLF_TimersAndConstantsSCG_r12_PR_release,
	LTE_RLF_TimersAndConstantsSCG_r12_PR_setup
} LTE_RLF_TimersAndConstantsSCG_r12_PR;
typedef enum LTE_RLF_TimersAndConstantsSCG_r12__setup__t313_r12 {
	LTE_RLF_TimersAndConstantsSCG_r12__setup__t313_r12_ms0	= 0,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__t313_r12_ms50	= 1,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__t313_r12_ms100	= 2,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__t313_r12_ms200	= 3,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__t313_r12_ms500	= 4,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__t313_r12_ms1000	= 5,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__t313_r12_ms2000	= 6
} e_LTE_RLF_TimersAndConstantsSCG_r12__setup__t313_r12;
typedef enum LTE_RLF_TimersAndConstantsSCG_r12__setup__n313_r12 {
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n313_r12_n1	= 0,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n313_r12_n2	= 1,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n313_r12_n3	= 2,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n313_r12_n4	= 3,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n313_r12_n6	= 4,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n313_r12_n8	= 5,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n313_r12_n10	= 6,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n313_r12_n20	= 7
} e_LTE_RLF_TimersAndConstantsSCG_r12__setup__n313_r12;
typedef enum LTE_RLF_TimersAndConstantsSCG_r12__setup__n314_r12 {
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n314_r12_n1	= 0,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n314_r12_n2	= 1,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n314_r12_n3	= 2,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n314_r12_n4	= 3,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n314_r12_n5	= 4,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n314_r12_n6	= 5,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n314_r12_n8	= 6,
	LTE_RLF_TimersAndConstantsSCG_r12__setup__n314_r12_n10	= 7
} e_LTE_RLF_TimersAndConstantsSCG_r12__setup__n314_r12;

/* LTE_RLF-TimersAndConstantsSCG-r12 */
typedef struct LTE_RLF_TimersAndConstantsSCG_r12 {
	LTE_RLF_TimersAndConstantsSCG_r12_PR present;
	union LTE_RLF_TimersAndConstantsSCG_r12_u {
		NULL_t	 release;
		struct LTE_RLF_TimersAndConstantsSCG_r12__setup {
			long	 t313_r12;
			long	 n313_r12;
			long	 n314_r12;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RLF_TimersAndConstantsSCG_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t313_r12_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_n313_r12_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_n314_r12_21;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RLF_TimersAndConstantsSCG_r12;
extern asn_CHOICE_specifics_t asn_SPC_LTE_RLF_TimersAndConstantsSCG_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RLF_TimersAndConstantsSCG_r12_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_RLF_TimersAndConstantsSCG_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RLF_TimersAndConstantsSCG_r12_H_ */
#include <asn_internal.h>
