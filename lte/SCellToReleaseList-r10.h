/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_SCellToReleaseList_r10_H_
#define	_SCellToReleaseList_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SCellIndex-r10.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SCellToReleaseList-r10 */
typedef struct SCellToReleaseList_r10 {
	A_SEQUENCE_OF(SCellIndex_r10_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToReleaseList_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellToReleaseList_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _SCellToReleaseList_r10_H_ */
#include <asn_internal.h>
