/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_CellsToAddModListUTRA_TDD_H_
#define	_CellsToAddModListUTRA_TDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellsToAddModUTRA_TDD;

/* CellsToAddModListUTRA-TDD */
typedef struct CellsToAddModListUTRA_TDD {
	A_SEQUENCE_OF(struct CellsToAddModUTRA_TDD) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsToAddModListUTRA_TDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellsToAddModListUTRA_TDD;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellsToAddModUTRA-TDD.h"

#endif	/* _CellsToAddModListUTRA_TDD_H_ */
#include <asn_internal.h>
