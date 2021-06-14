/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#include "Ngap_DAPSRequestInfo.h"

#include "Ngap_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Ngap_dAPSIndicator_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_Ngap_dAPSIndicator_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_Ngap_dAPSIndicator_value2enum_2[] = {
	{ 0,	16,	"daps-ho-required" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Ngap_dAPSIndicator_enum2value_2[] = {
	0	/* daps-ho-required(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_Ngap_dAPSIndicator_specs_2 = {
	asn_MAP_Ngap_dAPSIndicator_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_Ngap_dAPSIndicator_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Ngap_dAPSIndicator_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Ngap_dAPSIndicator_2 = {
	"dAPSIndicator",
	"dAPSIndicator",
	&asn_OP_NativeEnumerated,
	asn_DEF_Ngap_dAPSIndicator_tags_2,
	sizeof(asn_DEF_Ngap_dAPSIndicator_tags_2)
		/sizeof(asn_DEF_Ngap_dAPSIndicator_tags_2[0]) - 1, /* 1 */
	asn_DEF_Ngap_dAPSIndicator_tags_2,	/* Same as above */
	sizeof(asn_DEF_Ngap_dAPSIndicator_tags_2)
		/sizeof(asn_DEF_Ngap_dAPSIndicator_tags_2[0]), /* 2 */
	{ &asn_OER_type_Ngap_dAPSIndicator_constr_2, &asn_PER_type_Ngap_dAPSIndicator_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Ngap_dAPSIndicator_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Ngap_DAPSRequestInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_DAPSRequestInfo, dAPSIndicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_dAPSIndicator_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dAPSIndicator"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_DAPSRequestInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_175P48,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_DAPSRequestInfo_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_Ngap_DAPSRequestInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_DAPSRequestInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dAPSIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_DAPSRequestInfo_specs_1 = {
	sizeof(struct Ngap_DAPSRequestInfo),
	offsetof(struct Ngap_DAPSRequestInfo, _asn_ctx),
	asn_MAP_Ngap_DAPSRequestInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Ngap_DAPSRequestInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_DAPSRequestInfo = {
	"DAPSRequestInfo",
	"DAPSRequestInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_DAPSRequestInfo_tags_1,
	sizeof(asn_DEF_Ngap_DAPSRequestInfo_tags_1)
		/sizeof(asn_DEF_Ngap_DAPSRequestInfo_tags_1[0]), /* 1 */
	asn_DEF_Ngap_DAPSRequestInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_DAPSRequestInfo_tags_1)
		/sizeof(asn_DEF_Ngap_DAPSRequestInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_DAPSRequestInfo_1,
	2,	/* Elements count */
	&asn_SPC_Ngap_DAPSRequestInfo_specs_1	/* Additional specs */
};

