/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_IRAT_ParametersUTRA_TDD384_H_
#define	_IRAT_ParametersUTRA_TDD384_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandListUTRA-TDD384.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IRAT-ParametersUTRA-TDD384 */
typedef struct IRAT_ParametersUTRA_TDD384 {
	SupportedBandListUTRA_TDD384_t	 supportedBandListUTRA_TDD384;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersUTRA_TDD384_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersUTRA_TDD384;

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersUTRA_TDD384_H_ */
#include <asn_internal.h>
