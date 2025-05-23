/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PTRS_UplinkConfig_H_
#define	_NR_PTRS_UplinkConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PTRS_UplinkConfig__transformPrecoderDisabled__maxNrofPorts {
	NR_PTRS_UplinkConfig__transformPrecoderDisabled__maxNrofPorts_n1	= 0,
	NR_PTRS_UplinkConfig__transformPrecoderDisabled__maxNrofPorts_n2	= 1
} e_NR_PTRS_UplinkConfig__transformPrecoderDisabled__maxNrofPorts;
typedef enum NR_PTRS_UplinkConfig__transformPrecoderDisabled__resourceElementOffset {
	NR_PTRS_UplinkConfig__transformPrecoderDisabled__resourceElementOffset_offset01	= 0,
	NR_PTRS_UplinkConfig__transformPrecoderDisabled__resourceElementOffset_offset10	= 1,
	NR_PTRS_UplinkConfig__transformPrecoderDisabled__resourceElementOffset_offset11	= 2
} e_NR_PTRS_UplinkConfig__transformPrecoderDisabled__resourceElementOffset;
typedef enum NR_PTRS_UplinkConfig__transformPrecoderDisabled__ptrs_Power {
	NR_PTRS_UplinkConfig__transformPrecoderDisabled__ptrs_Power_p00	= 0,
	NR_PTRS_UplinkConfig__transformPrecoderDisabled__ptrs_Power_p01	= 1,
	NR_PTRS_UplinkConfig__transformPrecoderDisabled__ptrs_Power_p10	= 2,
	NR_PTRS_UplinkConfig__transformPrecoderDisabled__ptrs_Power_p11	= 3
} e_NR_PTRS_UplinkConfig__transformPrecoderDisabled__ptrs_Power;
typedef enum NR_PTRS_UplinkConfig__transformPrecoderEnabled__timeDensityTransformPrecoding {
	NR_PTRS_UplinkConfig__transformPrecoderEnabled__timeDensityTransformPrecoding_d2	= 0
} e_NR_PTRS_UplinkConfig__transformPrecoderEnabled__timeDensityTransformPrecoding;

/* NR_PTRS-UplinkConfig */
typedef struct NR_PTRS_UplinkConfig {
	struct NR_PTRS_UplinkConfig__transformPrecoderDisabled {
		struct NR_PTRS_UplinkConfig__transformPrecoderDisabled__frequencyDensity {
			A_SEQUENCE_OF(long) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *frequencyDensity;
		struct NR_PTRS_UplinkConfig__transformPrecoderDisabled__timeDensity {
			A_SEQUENCE_OF(long) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *timeDensity;
		long	 maxNrofPorts;
		long	*resourceElementOffset;	/* OPTIONAL */
		long	 ptrs_Power;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *transformPrecoderDisabled;
	struct NR_PTRS_UplinkConfig__transformPrecoderEnabled {
		struct NR_PTRS_UplinkConfig__transformPrecoderEnabled__sampleDensity {
			A_SEQUENCE_OF(long) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} sampleDensity;
		long	*timeDensityTransformPrecoding;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *transformPrecoderEnabled;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PTRS_UplinkConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNrofPorts_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_resourceElementOffset_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ptrs_Power_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_timeDensityTransformPrecoding_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PTRS_UplinkConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PTRS_UplinkConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PTRS_UplinkConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PTRS_UplinkConfig_H_ */
#include <asn_internal.h>
