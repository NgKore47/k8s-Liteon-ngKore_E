/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/rhel/Liteon-ngKore_E/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_CauseRadioNetwork.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_E1AP_CauseRadioNetwork_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  24 }	/* (0..24,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_E1AP_CauseRadioNetwork_value2enum_1[] = {
	{ 0,	11,	"unspecified" },
	{ 1,	49,	"unknown-or-already-allocated-gnb-cu-cp-ue-e1ap-id" },
	{ 2,	49,	"unknown-or-already-allocated-gnb-cu-up-ue-e1ap-id" },
	{ 3,	42,	"unknown-or-inconsistent-pair-of-ue-e1ap-id" },
	{ 4,	32,	"interaction-with-other-procedure" },
	{ 5,	23,	"pPDCP-Count-wrap-around" },
	{ 6,	23,	"not-supported-QCI-value" },
	{ 7,	23,	"not-supported-5QI-value" },
	{ 8,	35,	"encryption-algorithms-not-supported" },
	{ 9,	45,	"integrity-protection-algorithms-not-supported" },
	{ 10,	36,	"uP-integrity-protection-not-possible" },
	{ 11,	42,	"uP-confidentiality-protection-not-possible" },
	{ 12,	33,	"multiple-PDU-Session-ID-Instances" },
	{ 13,	22,	"unknown-PDU-Session-ID" },
	{ 14,	30,	"multiple-QoS-Flow-ID-Instances" },
	{ 15,	19,	"unknown-QoS-Flow-ID" },
	{ 16,	25,	"multiple-DRB-ID-Instances" },
	{ 17,	14,	"unknown-DRB-ID" },
	{ 18,	23,	"invalid-QoS-combination" },
	{ 19,	19,	"procedure-cancelled" },
	{ 20,	14,	"normal-release" },
	{ 21,	28,	"no-radio-resources-available" },
	{ 22,	34,	"action-desirable-for-radio-reasons" },
	{ 23,	37,	"resources-not-available-for-the-slice" },
	{ 24,	32,	"pDCP-configuration-not-supported" },
	{ 25,	29,	"ue-dl-max-IP-data-rate-reason" },
	{ 26,	31,	"uP-integrity-protection-failure" },
	{ 27,	26,	"release-due-to-pre-emption" },
	{ 28,	28,	"rsn-not-available-for-the-up" },
	{ 29,	17,	"nPN-not-supported" },
	{ 30,	27,	"report-characteristic-empty" },
	{ 31,	23,	"existing-measurement-ID" },
	{ 32,	37,	"measurement-temporarily-not-available" },
	{ 33,	40,	"measurement-not-supported-for-the-object" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_E1AP_CauseRadioNetwork_enum2value_1[] = {
	22,	/* action-desirable-for-radio-reasons(22) */
	8,	/* encryption-algorithms-not-supported(8) */
	31,	/* existing-measurement-ID(31) */
	9,	/* integrity-protection-algorithms-not-supported(9) */
	4,	/* interaction-with-other-procedure(4) */
	18,	/* invalid-QoS-combination(18) */
	33,	/* measurement-not-supported-for-the-object(33) */
	32,	/* measurement-temporarily-not-available(32) */
	16,	/* multiple-DRB-ID-Instances(16) */
	12,	/* multiple-PDU-Session-ID-Instances(12) */
	14,	/* multiple-QoS-Flow-ID-Instances(14) */
	29,	/* nPN-not-supported(29) */
	21,	/* no-radio-resources-available(21) */
	20,	/* normal-release(20) */
	7,	/* not-supported-5QI-value(7) */
	6,	/* not-supported-QCI-value(6) */
	24,	/* pDCP-configuration-not-supported(24) */
	5,	/* pPDCP-Count-wrap-around(5) */
	19,	/* procedure-cancelled(19) */
	27,	/* release-due-to-pre-emption(27) */
	30,	/* report-characteristic-empty(30) */
	23,	/* resources-not-available-for-the-slice(23) */
	28,	/* rsn-not-available-for-the-up(28) */
	11,	/* uP-confidentiality-protection-not-possible(11) */
	26,	/* uP-integrity-protection-failure(26) */
	10,	/* uP-integrity-protection-not-possible(10) */
	25,	/* ue-dl-max-IP-data-rate-reason(25) */
	17,	/* unknown-DRB-ID(17) */
	13,	/* unknown-PDU-Session-ID(13) */
	15,	/* unknown-QoS-Flow-ID(15) */
	1,	/* unknown-or-already-allocated-gnb-cu-cp-ue-e1ap-id(1) */
	2,	/* unknown-or-already-allocated-gnb-cu-up-ue-e1ap-id(2) */
	3,	/* unknown-or-inconsistent-pair-of-ue-e1ap-id(3) */
	0	/* unspecified(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_E1AP_CauseRadioNetwork_specs_1 = {
	asn_MAP_E1AP_CauseRadioNetwork_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_E1AP_CauseRadioNetwork_enum2value_1,	/* N => "tag"; sorted by N */
	34,	/* Number of elements in the maps */
	26,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_E1AP_CauseRadioNetwork_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E1AP_CauseRadioNetwork = {
	"CauseRadioNetwork",
	"CauseRadioNetwork",
	&asn_OP_NativeEnumerated,
	asn_DEF_E1AP_CauseRadioNetwork_tags_1,
	sizeof(asn_DEF_E1AP_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_E1AP_CauseRadioNetwork_tags_1[0]), /* 1 */
	asn_DEF_E1AP_CauseRadioNetwork_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_E1AP_CauseRadioNetwork_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_E1AP_CauseRadioNetwork_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_E1AP_CauseRadioNetwork_specs_1	/* Additional specs */
};

