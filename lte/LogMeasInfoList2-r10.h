/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_LogMeasInfoList2_r10_H_
#define	_LogMeasInfoList2_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LogMeasInfo_r10;

/* LogMeasInfoList2-r10 */
typedef struct LogMeasInfoList2_r10 {
	A_SEQUENCE_OF(struct LogMeasInfo_r10) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogMeasInfoList2_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LogMeasInfoList2_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LogMeasInfo-r10.h"

#endif	/* _LogMeasInfoList2_r10_H_ */
#include <asn_internal.h>
