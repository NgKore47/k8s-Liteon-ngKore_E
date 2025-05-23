/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_NPRACH-ConfigSIB-NB-v1530.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_nprach_PreambleFormat_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_dummy_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_edt_SmallTBS_Subset_r15_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_nprach_PreambleFormat_r15_value2enum_3[] = {
	{ 0,	4,	"fmt0" },
	{ 1,	4,	"fmt1" },
	{ 2,	4,	"fmt2" },
	{ 3,	6,	"fmt0-a" },
	{ 4,	6,	"fmt1-a" }
};
static const unsigned int asn_MAP_LTE_nprach_PreambleFormat_r15_enum2value_3[] = {
	0,	/* fmt0(0) */
	3,	/* fmt0-a(3) */
	1,	/* fmt1(1) */
	4,	/* fmt1-a(4) */
	2	/* fmt2(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nprach_PreambleFormat_r15_specs_3 = {
	asn_MAP_LTE_nprach_PreambleFormat_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nprach_PreambleFormat_r15_enum2value_3,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nprach_PreambleFormat_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nprach_PreambleFormat_r15_3 = {
	"nprach-PreambleFormat-r15",
	"nprach-PreambleFormat-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nprach_PreambleFormat_r15_tags_3,
	sizeof(asn_DEF_LTE_nprach_PreambleFormat_r15_tags_3)
		/sizeof(asn_DEF_LTE_nprach_PreambleFormat_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_nprach_PreambleFormat_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_nprach_PreambleFormat_r15_tags_3)
		/sizeof(asn_DEF_LTE_nprach_PreambleFormat_r15_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_nprach_PreambleFormat_r15_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nprach_PreambleFormat_r15_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_dummy_value2enum_9[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" },
	{ 7,	4,	"n128" },
	{ 8,	4,	"n256" },
	{ 9,	4,	"n512" },
	{ 10,	5,	"n1024" }
};
static const unsigned int asn_MAP_LTE_dummy_enum2value_9[] = {
	0,	/* n1(0) */
	10,	/* n1024(10) */
	7,	/* n128(7) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	8,	/* n256(8) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	9,	/* n512(9) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_dummy_specs_9 = {
	asn_MAP_LTE_dummy_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_dummy_enum2value_9,	/* N => "tag"; sorted by N */
	11,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_dummy_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dummy_9 = {
	"dummy",
	"dummy",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_dummy_tags_9,
	sizeof(asn_DEF_LTE_dummy_tags_9)
		/sizeof(asn_DEF_LTE_dummy_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_dummy_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_dummy_tags_9)
		/sizeof(asn_DEF_LTE_dummy_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_dummy_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_dummy_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_tdd_Parameters_r15_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530__tdd_Parameters_r15, nprach_PreambleFormat_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nprach_PreambleFormat_r15_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"nprach-PreambleFormat-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530__tdd_Parameters_r15, dummy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_dummy_9,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"dummy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530__tdd_Parameters_r15, nprach_ParametersListTDD_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NPRACH_ParametersListTDD_NB_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"nprach-ParametersListTDD-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_tdd_Parameters_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_tdd_Parameters_r15_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nprach-PreambleFormat-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nprach-ParametersListTDD-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_tdd_Parameters_r15_specs_2 = {
	sizeof(struct LTE_NPRACH_ConfigSIB_NB_v1530__tdd_Parameters_r15),
	offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530__tdd_Parameters_r15, _asn_ctx),
	asn_MAP_LTE_tdd_Parameters_r15_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_tdd_Parameters_r15_2 = {
	"tdd-Parameters-r15",
	"tdd-Parameters-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_tdd_Parameters_r15_tags_2,
	sizeof(asn_DEF_LTE_tdd_Parameters_r15_tags_2)
		/sizeof(asn_DEF_LTE_tdd_Parameters_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_tdd_Parameters_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_tdd_Parameters_r15_tags_2)
		/sizeof(asn_DEF_LTE_tdd_Parameters_r15_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_tdd_Parameters_r15_2,
	3,	/* Elements count */
	&asn_SPC_LTE_tdd_Parameters_r15_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_fmt2_Parameters_r15_22[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530__fmt2_Parameters_r15, nprach_ParametersListFmt2_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NPRACH_ParametersListFmt2_NB_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"nprach-ParametersListFmt2-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530__fmt2_Parameters_r15, nprach_ParametersListFmt2EDT_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NPRACH_ParametersListFmt2_NB_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"nprach-ParametersListFmt2EDT-r15"
		},
};
static const int asn_MAP_LTE_fmt2_Parameters_r15_oms_22[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_fmt2_Parameters_r15_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_fmt2_Parameters_r15_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nprach-ParametersListFmt2-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nprach-ParametersListFmt2EDT-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_fmt2_Parameters_r15_specs_22 = {
	sizeof(struct LTE_NPRACH_ConfigSIB_NB_v1530__fmt2_Parameters_r15),
	offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530__fmt2_Parameters_r15, _asn_ctx),
	asn_MAP_LTE_fmt2_Parameters_r15_tag2el_22,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_fmt2_Parameters_r15_oms_22,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_fmt2_Parameters_r15_22 = {
	"fmt2-Parameters-r15",
	"fmt2-Parameters-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_fmt2_Parameters_r15_tags_22,
	sizeof(asn_DEF_LTE_fmt2_Parameters_r15_tags_22)
		/sizeof(asn_DEF_LTE_fmt2_Parameters_r15_tags_22[0]) - 1, /* 1 */
	asn_DEF_LTE_fmt2_Parameters_r15_tags_22,	/* Same as above */
	sizeof(asn_DEF_LTE_fmt2_Parameters_r15_tags_22)
		/sizeof(asn_DEF_LTE_fmt2_Parameters_r15_tags_22[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_fmt2_Parameters_r15_22,
	2,	/* Elements count */
	&asn_SPC_LTE_fmt2_Parameters_r15_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_edt_SmallTBS_Subset_r15_value2enum_26[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_edt_SmallTBS_Subset_r15_enum2value_26[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_edt_SmallTBS_Subset_r15_specs_26 = {
	asn_MAP_LTE_edt_SmallTBS_Subset_r15_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_edt_SmallTBS_Subset_r15_enum2value_26,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_edt_SmallTBS_Subset_r15_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_edt_SmallTBS_Subset_r15_26 = {
	"edt-SmallTBS-Subset-r15",
	"edt-SmallTBS-Subset-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_edt_SmallTBS_Subset_r15_tags_26,
	sizeof(asn_DEF_LTE_edt_SmallTBS_Subset_r15_tags_26)
		/sizeof(asn_DEF_LTE_edt_SmallTBS_Subset_r15_tags_26[0]) - 1, /* 1 */
	asn_DEF_LTE_edt_SmallTBS_Subset_r15_tags_26,	/* Same as above */
	sizeof(asn_DEF_LTE_edt_SmallTBS_Subset_r15_tags_26)
		/sizeof(asn_DEF_LTE_edt_SmallTBS_Subset_r15_tags_26[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_edt_SmallTBS_Subset_r15_constr_26,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_edt_SmallTBS_Subset_r15_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_edt_Parameters_r15_25[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530__edt_Parameters_r15, edt_SmallTBS_Subset_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_edt_SmallTBS_Subset_r15_26,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"edt-SmallTBS-Subset-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530__edt_Parameters_r15, edt_TBS_InfoList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_EDT_TBS_InfoList_NB_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"edt-TBS-InfoList-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530__edt_Parameters_r15, nprach_ParametersListEDT_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NPRACH_ParametersList_NB_r14,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"nprach-ParametersListEDT-r15"
		},
};
static const int asn_MAP_LTE_edt_Parameters_r15_oms_25[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_edt_Parameters_r15_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_edt_Parameters_r15_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* edt-SmallTBS-Subset-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* edt-TBS-InfoList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nprach-ParametersListEDT-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_edt_Parameters_r15_specs_25 = {
	sizeof(struct LTE_NPRACH_ConfigSIB_NB_v1530__edt_Parameters_r15),
	offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530__edt_Parameters_r15, _asn_ctx),
	asn_MAP_LTE_edt_Parameters_r15_tag2el_25,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_edt_Parameters_r15_oms_25,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_edt_Parameters_r15_25 = {
	"edt-Parameters-r15",
	"edt-Parameters-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_edt_Parameters_r15_tags_25,
	sizeof(asn_DEF_LTE_edt_Parameters_r15_tags_25)
		/sizeof(asn_DEF_LTE_edt_Parameters_r15_tags_25[0]) - 1, /* 1 */
	asn_DEF_LTE_edt_Parameters_r15_tags_25,	/* Same as above */
	sizeof(asn_DEF_LTE_edt_Parameters_r15_tags_25)
		/sizeof(asn_DEF_LTE_edt_Parameters_r15_tags_25[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_edt_Parameters_r15_25,
	3,	/* Elements count */
	&asn_SPC_LTE_edt_Parameters_r15_specs_25	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_NPRACH_ConfigSIB_NB_v1530_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530, tdd_Parameters_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_tdd_Parameters_r15_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"tdd-Parameters-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530, fmt2_Parameters_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_fmt2_Parameters_r15_22,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"fmt2-Parameters-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530, edt_Parameters_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_edt_Parameters_r15_25,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"edt-Parameters-r15"
		},
};
static const int asn_MAP_LTE_NPRACH_ConfigSIB_NB_v1530_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_NPRACH_ConfigSIB_NB_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd-Parameters-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* fmt2-Parameters-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* edt-Parameters-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_NPRACH_ConfigSIB_NB_v1530_specs_1 = {
	sizeof(struct LTE_NPRACH_ConfigSIB_NB_v1530),
	offsetof(struct LTE_NPRACH_ConfigSIB_NB_v1530, _asn_ctx),
	asn_MAP_LTE_NPRACH_ConfigSIB_NB_v1530_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_NPRACH_ConfigSIB_NB_v1530_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1530 = {
	"NPRACH-ConfigSIB-NB-v1530",
	"NPRACH-ConfigSIB-NB-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1530_tags_1,
	sizeof(asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1530_tags_1)
		/sizeof(asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1530_tags_1[0]), /* 1 */
	asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1530_tags_1)
		/sizeof(asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1530_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_NPRACH_ConfigSIB_NB_v1530_1,
	3,	/* Elements count */
	&asn_SPC_LTE_NPRACH_ConfigSIB_NB_v1530_specs_1	/* Additional specs */
};

