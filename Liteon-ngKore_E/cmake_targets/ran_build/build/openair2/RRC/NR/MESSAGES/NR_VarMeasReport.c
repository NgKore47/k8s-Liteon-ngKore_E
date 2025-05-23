/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_VarMeasReport.h"

asn_TYPE_member_t asn_MBR_NR_VarMeasReport_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_VarMeasReport, measId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasId,
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
		"measId"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_VarMeasReport, cellsTriggeredList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CellsTriggeredList,
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
		"cellsTriggeredList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_VarMeasReport, numberOfReportsSent),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
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
		"numberOfReportsSent"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_VarMeasReport, cli_TriggeredList_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_CLI_TriggeredList_r16,
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
		"cli-TriggeredList-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_VarMeasReport, tx_PoolMeasToAddModListNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Tx_PoolMeasList_r16,
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
		"tx-PoolMeasToAddModListNR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_VarMeasReport, relaysTriggeredList_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RelaysTriggeredList_r17,
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
		"relaysTriggeredList-r17"
		},
};
static const int asn_MAP_NR_VarMeasReport_oms_1[] = { 1, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_VarMeasReport_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_VarMeasReport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellsTriggeredList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* numberOfReportsSent */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cli-TriggeredList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tx-PoolMeasToAddModListNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* relaysTriggeredList-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_VarMeasReport_specs_1 = {
	sizeof(struct NR_VarMeasReport),
	offsetof(struct NR_VarMeasReport, _asn_ctx),
	asn_MAP_NR_VarMeasReport_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_VarMeasReport_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_VarMeasReport = {
	"VarMeasReport",
	"VarMeasReport",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_VarMeasReport_tags_1,
	sizeof(asn_DEF_NR_VarMeasReport_tags_1)
		/sizeof(asn_DEF_NR_VarMeasReport_tags_1[0]), /* 1 */
	asn_DEF_NR_VarMeasReport_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_VarMeasReport_tags_1)
		/sizeof(asn_DEF_NR_VarMeasReport_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_VarMeasReport_1,
	6,	/* Elements count */
	&asn_SPC_NR_VarMeasReport_specs_1	/* Additional specs */
};

