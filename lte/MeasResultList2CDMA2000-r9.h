/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_MeasResultList2CDMA2000_r9_H_
#define	_MeasResultList2CDMA2000_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResult2CDMA2000_r9;

/* MeasResultList2CDMA2000-r9 */
typedef struct MeasResultList2CDMA2000_r9 {
	A_SEQUENCE_OF(struct MeasResult2CDMA2000_r9) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultList2CDMA2000_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultList2CDMA2000_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResult2CDMA2000-r9.h"

#endif	/* _MeasResultList2CDMA2000_r9_H_ */
#include <asn_internal.h>
