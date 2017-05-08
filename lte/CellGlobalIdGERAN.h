/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_CellGlobalIdGERAN_H_
#define	_CellGlobalIdGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellGlobalIdGERAN */
typedef struct CellGlobalIdGERAN {
	PLMN_Identity_t	 plmn_Identity;
	BIT_STRING_t	 locationAreaCode;
	BIT_STRING_t	 cellIdentity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellGlobalIdGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellGlobalIdGERAN;

#ifdef __cplusplus
}
#endif

#endif	/* _CellGlobalIdGERAN_H_ */
#include <asn_internal.h>
