/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_UEInformationResponse_v9e0_IEs_H_
#define	_UEInformationResponse_v9e0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RLF_Report_v9e0;

/* UEInformationResponse-v9e0-IEs */
typedef struct UEInformationResponse_v9e0_IEs {
	struct RLF_Report_v9e0	*rlf_Report_v9e0	/* OPTIONAL */;
	struct UEInformationResponse_v9e0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationResponse_v9e0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_v9e0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RLF-Report-v9e0.h"

#endif	/* _UEInformationResponse_v9e0_IEs_H_ */
#include <asn_internal.h>
