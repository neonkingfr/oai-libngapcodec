/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#include "Ngap_OverloadStartNSSAIItem.h"

#include "Ngap_OverloadResponse.h"
#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_OverloadStartNSSAIItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_OverloadStartNSSAIItem, sliceOverloadList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_SliceOverloadList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sliceOverloadList"
		},
	{ ATF_POINTER, 3, offsetof(struct Ngap_OverloadStartNSSAIItem, sliceOverloadResponse),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Ngap_OverloadResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sliceOverloadResponse"
		},
	{ ATF_POINTER, 2, offsetof(struct Ngap_OverloadStartNSSAIItem, sliceTrafficLoadReductionIndication),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_TrafficLoadReductionIndication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sliceTrafficLoadReductionIndication"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_OverloadStartNSSAIItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_175P136,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_OverloadStartNSSAIItem_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_Ngap_OverloadStartNSSAIItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_OverloadStartNSSAIItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sliceOverloadList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sliceOverloadResponse */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sliceTrafficLoadReductionIndication */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_OverloadStartNSSAIItem_specs_1 = {
	sizeof(struct Ngap_OverloadStartNSSAIItem),
	offsetof(struct Ngap_OverloadStartNSSAIItem, _asn_ctx),
	asn_MAP_Ngap_OverloadStartNSSAIItem_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Ngap_OverloadStartNSSAIItem_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_OverloadStartNSSAIItem = {
	"OverloadStartNSSAIItem",
	"OverloadStartNSSAIItem",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_OverloadStartNSSAIItem_tags_1,
	sizeof(asn_DEF_Ngap_OverloadStartNSSAIItem_tags_1)
		/sizeof(asn_DEF_Ngap_OverloadStartNSSAIItem_tags_1[0]), /* 1 */
	asn_DEF_Ngap_OverloadStartNSSAIItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_OverloadStartNSSAIItem_tags_1)
		/sizeof(asn_DEF_Ngap_OverloadStartNSSAIItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_OverloadStartNSSAIItem_1,
	4,	/* Elements count */
	&asn_SPC_Ngap_OverloadStartNSSAIItem_specs_1	/* Additional specs */
};

