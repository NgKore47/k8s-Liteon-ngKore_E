/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_CGI-InfoEUTRA.h"

static int
memb_NR_cgi_info_EPC_list_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 12UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_cgi_info_5GC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 12UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_cgi_info_EPC_list_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_cgi_info_EPC_list_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_cgi_info_5GC_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_freqBandIndicatorPriority_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_cgi_info_5GC_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_cgi_info_EPC_list_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_CellAccessRelatedInfo_EUTRA_EPC,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_cgi_info_EPC_list_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_cgi_info_EPC_list_specs_4 = {
	sizeof(struct NR_CGI_InfoEUTRA__cgi_info_EPC__cgi_info_EPC_list),
	offsetof(struct NR_CGI_InfoEUTRA__cgi_info_EPC__cgi_info_EPC_list, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_cgi_info_EPC_list_4 = {
	"cgi-info-EPC-list",
	"cgi-info-EPC-list",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_cgi_info_EPC_list_tags_4,
	sizeof(asn_DEF_NR_cgi_info_EPC_list_tags_4)
		/sizeof(asn_DEF_NR_cgi_info_EPC_list_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_cgi_info_EPC_list_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_cgi_info_EPC_list_tags_4)
		/sizeof(asn_DEF_NR_cgi_info_EPC_list_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_cgi_info_EPC_list_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_cgi_info_EPC_list_4,
	1,	/* Single element */
	&asn_SPC_NR_cgi_info_EPC_list_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_cgi_info_EPC_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CGI_InfoEUTRA__cgi_info_EPC, cgi_info_EPC_legacy),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CellAccessRelatedInfo_EUTRA_EPC,
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
		"cgi-info-EPC-legacy"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CGI_InfoEUTRA__cgi_info_EPC, cgi_info_EPC_list),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_cgi_info_EPC_list_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_cgi_info_EPC_list_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_cgi_info_EPC_list_constraint_2
		},
		0, 0, /* No default value */
		"cgi-info-EPC-list"
		},
};
static const int asn_MAP_NR_cgi_info_EPC_oms_2[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_cgi_info_EPC_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_cgi_info_EPC_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cgi-info-EPC-legacy */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cgi-info-EPC-list */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_cgi_info_EPC_specs_2 = {
	sizeof(struct NR_CGI_InfoEUTRA__cgi_info_EPC),
	offsetof(struct NR_CGI_InfoEUTRA__cgi_info_EPC, _asn_ctx),
	asn_MAP_NR_cgi_info_EPC_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_NR_cgi_info_EPC_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_cgi_info_EPC_2 = {
	"cgi-info-EPC",
	"cgi-info-EPC",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_cgi_info_EPC_tags_2,
	sizeof(asn_DEF_NR_cgi_info_EPC_tags_2)
		/sizeof(asn_DEF_NR_cgi_info_EPC_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_cgi_info_EPC_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_cgi_info_EPC_tags_2)
		/sizeof(asn_DEF_NR_cgi_info_EPC_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_cgi_info_EPC_2,
	2,	/* Elements count */
	&asn_SPC_NR_cgi_info_EPC_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_cgi_info_5GC_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_CellAccessRelatedInfo_EUTRA_5GC,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_cgi_info_5GC_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_cgi_info_5GC_specs_6 = {
	sizeof(struct NR_CGI_InfoEUTRA__cgi_info_5GC),
	offsetof(struct NR_CGI_InfoEUTRA__cgi_info_5GC, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_cgi_info_5GC_6 = {
	"cgi-info-5GC",
	"cgi-info-5GC",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_cgi_info_5GC_tags_6,
	sizeof(asn_DEF_NR_cgi_info_5GC_tags_6)
		/sizeof(asn_DEF_NR_cgi_info_5GC_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_cgi_info_5GC_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_cgi_info_5GC_tags_6)
		/sizeof(asn_DEF_NR_cgi_info_5GC_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_cgi_info_5GC_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_cgi_info_5GC_6,
	1,	/* Single element */
	&asn_SPC_NR_cgi_info_5GC_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_freqBandIndicatorPriority_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_freqBandIndicatorPriority_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_freqBandIndicatorPriority_specs_10 = {
	asn_MAP_NR_freqBandIndicatorPriority_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_freqBandIndicatorPriority_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_freqBandIndicatorPriority_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_freqBandIndicatorPriority_10 = {
	"freqBandIndicatorPriority",
	"freqBandIndicatorPriority",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_freqBandIndicatorPriority_tags_10,
	sizeof(asn_DEF_NR_freqBandIndicatorPriority_tags_10)
		/sizeof(asn_DEF_NR_freqBandIndicatorPriority_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_freqBandIndicatorPriority_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_freqBandIndicatorPriority_tags_10)
		/sizeof(asn_DEF_NR_freqBandIndicatorPriority_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_freqBandIndicatorPriority_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_freqBandIndicatorPriority_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_CGI_InfoEUTRA_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_CGI_InfoEUTRA, cgi_info_EPC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_cgi_info_EPC_2,
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
		"cgi-info-EPC"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CGI_InfoEUTRA, cgi_info_5GC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_cgi_info_5GC_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_cgi_info_5GC_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_cgi_info_5GC_constraint_1
		},
		0, 0, /* No default value */
		"cgi-info-5GC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CGI_InfoEUTRA, freqBandIndicator),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FreqBandIndicatorEUTRA,
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
		"freqBandIndicator"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_CGI_InfoEUTRA, multiBandInfoList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MultiBandInfoListEUTRA,
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
		"multiBandInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CGI_InfoEUTRA, freqBandIndicatorPriority),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_freqBandIndicatorPriority_10,
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
		"freqBandIndicatorPriority"
		},
};
static const int asn_MAP_NR_CGI_InfoEUTRA_oms_1[] = { 0, 1, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_CGI_InfoEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CGI_InfoEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cgi-info-EPC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cgi-info-5GC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* freqBandIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* multiBandInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* freqBandIndicatorPriority */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CGI_InfoEUTRA_specs_1 = {
	sizeof(struct NR_CGI_InfoEUTRA),
	offsetof(struct NR_CGI_InfoEUTRA, _asn_ctx),
	asn_MAP_NR_CGI_InfoEUTRA_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NR_CGI_InfoEUTRA_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CGI_InfoEUTRA = {
	"CGI-InfoEUTRA",
	"CGI-InfoEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CGI_InfoEUTRA_tags_1,
	sizeof(asn_DEF_NR_CGI_InfoEUTRA_tags_1)
		/sizeof(asn_DEF_NR_CGI_InfoEUTRA_tags_1[0]), /* 1 */
	asn_DEF_NR_CGI_InfoEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CGI_InfoEUTRA_tags_1)
		/sizeof(asn_DEF_NR_CGI_InfoEUTRA_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_CGI_InfoEUTRA_1,
	5,	/* Elements count */
	&asn_SPC_NR_CGI_InfoEUTRA_specs_1	/* Additional specs */
};

