/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_CNTypeRestrictionsForEquivalentItem_H_
#define	_Ngap_CNTypeRestrictionsForEquivalentItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_PLMNIdentity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_CNTypeRestrictionsForEquivalentItem__cn_Type {
	Ngap_CNTypeRestrictionsForEquivalentItem__cn_Type_epc_forbidden	= 0,
	Ngap_CNTypeRestrictionsForEquivalentItem__cn_Type_fiveGC_forbidden	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_CNTypeRestrictionsForEquivalentItem__cn_Type;

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_CNTypeRestrictionsForEquivalentItem */
typedef struct Ngap_CNTypeRestrictionsForEquivalentItem {
	Ngap_PLMNIdentity_t	 plmnIdentity;
	long	 cn_Type;
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_CNTypeRestrictionsForEquivalentItem_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_Ngap_cn_Type_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_CNTypeRestrictionsForEquivalentItem;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_CNTypeRestrictionsForEquivalentItem_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_CNTypeRestrictionsForEquivalentItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_CNTypeRestrictionsForEquivalentItem_H_ */
#include <asn_internal.h>
