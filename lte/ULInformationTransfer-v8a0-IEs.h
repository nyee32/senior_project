/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_ULInformationTransfer_v8a0_IEs_H_
#define	_ULInformationTransfer_v8a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ULInformationTransfer-v8a0-IEs */
typedef struct ULInformationTransfer_v8a0_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct ULInformationTransfer_v8a0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULInformationTransfer_v8a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULInformationTransfer_v8a0_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _ULInformationTransfer_v8a0_IEs_H_ */
#include <asn_internal.h>
