/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_HandoverPreparationInformation_v920_IEs_H_
#define	_HandoverPreparationInformation_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9 {
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel9	= 0,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_rel10	= 1,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare6	= 2,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare5	= 3,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare4	= 4,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare3	= 5,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare2	= 6,
	HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_HandoverPreparationInformation_v920_IEs__ue_ConfigRelease_r9;

/* Forward declarations */
struct HandoverPreparationInformation_v9d0_IEs;

/* HandoverPreparationInformation-v920-IEs */
typedef struct HandoverPreparationInformation_v920_IEs {
	long	*ue_ConfigRelease_r9	/* OPTIONAL */;
	struct HandoverPreparationInformation_v9d0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_ConfigRelease_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v920_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HandoverPreparationInformation-v9d0-IEs.h"

#endif	/* _HandoverPreparationInformation_v920_IEs_H_ */
#include <asn_internal.h>
