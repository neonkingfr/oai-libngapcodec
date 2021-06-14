/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "asn.1/PDU Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#include "Ngap_HandoverSuccess.h"

asn_TYPE_member_t asn_MBR_Ngap_HandoverSuccess_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_HandoverSuccess, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolIE_Container_124P42,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_Ngap_HandoverSuccess_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_HandoverSuccess_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_HandoverSuccess_specs_1 = {
	sizeof(struct Ngap_HandoverSuccess),
	offsetof(struct Ngap_HandoverSuccess, _asn_ctx),
	asn_MAP_Ngap_HandoverSuccess_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_HandoverSuccess = {
	"HandoverSuccess",
	"HandoverSuccess",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_HandoverSuccess_tags_1,
	sizeof(asn_DEF_Ngap_HandoverSuccess_tags_1)
		/sizeof(asn_DEF_Ngap_HandoverSuccess_tags_1[0]), /* 1 */
	asn_DEF_Ngap_HandoverSuccess_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_HandoverSuccess_tags_1)
		/sizeof(asn_DEF_Ngap_HandoverSuccess_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_HandoverSuccess_1,
	1,	/* Elements count */
	&asn_SPC_Ngap_HandoverSuccess_specs_1	/* Additional specs */
};

