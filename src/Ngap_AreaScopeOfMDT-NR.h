/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_AreaScopeOfMDT_NR_H_
#define	_Ngap_AreaScopeOfMDT_NR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_AreaScopeOfMDT_NR_PR {
	Ngap_AreaScopeOfMDT_NR_PR_NOTHING,	/* No components present */
	Ngap_AreaScopeOfMDT_NR_PR_cellBased,
	Ngap_AreaScopeOfMDT_NR_PR_tABased,
	Ngap_AreaScopeOfMDT_NR_PR_pLMNWide,
	Ngap_AreaScopeOfMDT_NR_PR_tAIBased,
	Ngap_AreaScopeOfMDT_NR_PR_choice_Extensions
} Ngap_AreaScopeOfMDT_NR_PR;

/* Forward declarations */
struct Ngap_CellBasedMDT_NR;
struct Ngap_TABasedMDT;
struct Ngap_TAIBasedMDT;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_AreaScopeOfMDT-NR */
typedef struct Ngap_AreaScopeOfMDT_NR {
	Ngap_AreaScopeOfMDT_NR_PR present;
	union Ngap_AreaScopeOfMDT_NR_u {
		struct Ngap_CellBasedMDT_NR	*cellBased;
		struct Ngap_TABasedMDT	*tABased;
		NULL_t	 pLMNWide;
		struct Ngap_TAIBasedMDT	*tAIBased;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_AreaScopeOfMDT_NR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_AreaScopeOfMDT_NR;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_AreaScopeOfMDT_NR_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_AreaScopeOfMDT_NR_1[5];
extern asn_per_constraints_t asn_PER_type_Ngap_AreaScopeOfMDT_NR_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_AreaScopeOfMDT_NR_H_ */
#include <asn_internal.h>
