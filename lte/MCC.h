/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_MCC_H_
#define	_MCC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MCC-MNC-Digit.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MCC */
typedef struct MCC {
	A_SEQUENCE_OF(MCC_MNC_Digit_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MCC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MCC;

#ifdef __cplusplus
}
#endif

#endif	/* _MCC_H_ */
#include <asn_internal.h>
