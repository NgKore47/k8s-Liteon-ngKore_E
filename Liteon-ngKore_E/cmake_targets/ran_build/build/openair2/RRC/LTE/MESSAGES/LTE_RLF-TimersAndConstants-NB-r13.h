/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RLF_TimersAndConstants_NB_r13_H_
#define	_LTE_RLF_TimersAndConstants_NB_r13_H_


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
typedef enum LTE_RLF_TimersAndConstants_NB_r13_PR {
	LTE_RLF_TimersAndConstants_NB_r13_PR_NOTHING,	/* No components present */
	LTE_RLF_TimersAndConstants_NB_r13_PR_release,
	LTE_RLF_TimersAndConstants_NB_r13_PR_setup
} LTE_RLF_TimersAndConstants_NB_r13_PR;
typedef enum LTE_RLF_TimersAndConstants_NB_r13__setup__t301_r13 {
	LTE_RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms2500	= 0,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms4000	= 1,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms6000	= 2,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms10000	= 3,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms15000	= 4,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms25000	= 5,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms40000	= 6,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t301_r13_ms60000	= 7
} e_LTE_RLF_TimersAndConstants_NB_r13__setup__t301_r13;
typedef enum LTE_RLF_TimersAndConstants_NB_r13__setup__t310_r13 {
	LTE_RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms0	= 0,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms200	= 1,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms500	= 2,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms1000	= 3,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms2000	= 4,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms4000	= 5,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t310_r13_ms8000	= 6
} e_LTE_RLF_TimersAndConstants_NB_r13__setup__t310_r13;
typedef enum LTE_RLF_TimersAndConstants_NB_r13__setup__n310_r13 {
	LTE_RLF_TimersAndConstants_NB_r13__setup__n310_r13_n1	= 0,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n310_r13_n2	= 1,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n310_r13_n3	= 2,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n310_r13_n4	= 3,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n310_r13_n6	= 4,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n310_r13_n8	= 5,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n310_r13_n10	= 6,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n310_r13_n20	= 7
} e_LTE_RLF_TimersAndConstants_NB_r13__setup__n310_r13;
typedef enum LTE_RLF_TimersAndConstants_NB_r13__setup__t311_r13 {
	LTE_RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms1000	= 0,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms3000	= 1,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms5000	= 2,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms10000	= 3,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms15000	= 4,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms20000	= 5,
	LTE_RLF_TimersAndConstants_NB_r13__setup__t311_r13_ms30000	= 6
} e_LTE_RLF_TimersAndConstants_NB_r13__setup__t311_r13;
typedef enum LTE_RLF_TimersAndConstants_NB_r13__setup__n311_r13 {
	LTE_RLF_TimersAndConstants_NB_r13__setup__n311_r13_n1	= 0,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n311_r13_n2	= 1,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n311_r13_n3	= 2,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n311_r13_n4	= 3,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n311_r13_n5	= 4,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n311_r13_n6	= 5,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n311_r13_n8	= 6,
	LTE_RLF_TimersAndConstants_NB_r13__setup__n311_r13_n10	= 7
} e_LTE_RLF_TimersAndConstants_NB_r13__setup__n311_r13;
typedef enum LTE_RLF_TimersAndConstants_NB_r13__setup__ext1__t311_v1350 {
	LTE_RLF_TimersAndConstants_NB_r13__setup__ext1__t311_v1350_ms40000	= 0,
	LTE_RLF_TimersAndConstants_NB_r13__setup__ext1__t311_v1350_ms60000	= 1,
	LTE_RLF_TimersAndConstants_NB_r13__setup__ext1__t311_v1350_ms90000	= 2,
	LTE_RLF_TimersAndConstants_NB_r13__setup__ext1__t311_v1350_ms120000	= 3
} e_LTE_RLF_TimersAndConstants_NB_r13__setup__ext1__t311_v1350;
typedef enum LTE_RLF_TimersAndConstants_NB_r13__setup__ext2__t301_v1530 {
	LTE_RLF_TimersAndConstants_NB_r13__setup__ext2__t301_v1530_ms80000	= 0,
	LTE_RLF_TimersAndConstants_NB_r13__setup__ext2__t301_v1530_ms100000	= 1,
	LTE_RLF_TimersAndConstants_NB_r13__setup__ext2__t301_v1530_ms120000	= 2
} e_LTE_RLF_TimersAndConstants_NB_r13__setup__ext2__t301_v1530;
typedef enum LTE_RLF_TimersAndConstants_NB_r13__setup__ext2__t311_v1530 {
	LTE_RLF_TimersAndConstants_NB_r13__setup__ext2__t311_v1530_ms160000	= 0,
	LTE_RLF_TimersAndConstants_NB_r13__setup__ext2__t311_v1530_ms200000	= 1
} e_LTE_RLF_TimersAndConstants_NB_r13__setup__ext2__t311_v1530;

/* LTE_RLF-TimersAndConstants-NB-r13 */
typedef struct LTE_RLF_TimersAndConstants_NB_r13 {
	LTE_RLF_TimersAndConstants_NB_r13_PR present;
	union LTE_RLF_TimersAndConstants_NB_r13_u {
		NULL_t	 release;
		struct LTE_RLF_TimersAndConstants_NB_r13__setup {
			long	 t301_r13;
			long	 t310_r13;
			long	 n310_r13;
			long	 t311_r13;
			long	 n311_r13;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct LTE_RLF_TimersAndConstants_NB_r13__setup__ext1 {
				long	*t311_v1350;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ext1;
			struct LTE_RLF_TimersAndConstants_NB_r13__setup__ext2 {
				long	*t301_v1530;	/* OPTIONAL */
				long	*t311_v1530;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ext2;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RLF_TimersAndConstants_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t301_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t310_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_n310_r13_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t311_r13_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_n311_r13_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t311_v1350_49;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t301_v1530_55;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t311_v1530_59;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RLF_TimersAndConstants_NB_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_RLF_TimersAndConstants_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RLF_TimersAndConstants_NB_r13_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_RLF_TimersAndConstants_NB_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RLF_TimersAndConstants_NB_r13_H_ */
#include <asn_internal.h>
