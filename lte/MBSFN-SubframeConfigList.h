/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_MBSFN_SubframeConfigList_H_
#define	_MBSFN_SubframeConfigList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBSFN_SubframeConfig;

/* MBSFN-SubframeConfigList */
typedef struct MBSFN_SubframeConfigList {
	A_SEQUENCE_OF(struct MBSFN_SubframeConfig) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_SubframeConfigList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_SubframeConfigList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBSFN-SubframeConfig.h"

#endif	/* _MBSFN_SubframeConfigList_H_ */
#include <asn_internal.h>
