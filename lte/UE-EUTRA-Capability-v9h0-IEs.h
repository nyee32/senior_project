/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_UE_EUTRA_Capability_v9h0_IEs_H_
#define	_UE_EUTRA_Capability_v9h0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IRAT_ParametersUTRA_v9h0;
struct UE_EUTRA_Capability_v10c0_IEs;

/* UE-EUTRA-Capability-v9h0-IEs */
typedef struct UE_EUTRA_Capability_v9h0_IEs {
	struct IRAT_ParametersUTRA_v9h0	*interRAT_ParametersUTRA_v9h0	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v10c0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v9h0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v9h0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IRAT-ParametersUTRA-v9h0.h"
#include "UE-EUTRA-Capability-v10c0-IEs.h"

#endif	/* _UE_EUTRA_Capability_v9h0_IEs_H_ */
#include <asn_internal.h>
