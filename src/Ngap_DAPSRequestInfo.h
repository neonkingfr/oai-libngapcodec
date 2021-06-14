/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_DAPSRequestInfo_H_
#define	_Ngap_DAPSRequestInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_DAPSRequestInfo__dAPSIndicator {
	Ngap_DAPSRequestInfo__dAPSIndicator_daps_ho_required	= 0
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_DAPSRequestInfo__dAPSIndicator;

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_DAPSRequestInfo */
typedef struct Ngap_DAPSRequestInfo {
	long	 dAPSIndicator;
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_DAPSRequestInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_Ngap_dAPSIndicator_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_DAPSRequestInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_DAPSRequestInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_DAPSRequestInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_DAPSRequestInfo_H_ */
#include <asn_internal.h>
