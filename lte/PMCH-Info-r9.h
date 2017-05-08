/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_PMCH_Info_r9_H_
#define	_PMCH_Info_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PMCH-Config-r9.h"
#include "MBMS-SessionInfoList-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PMCH-Info-r9 */
typedef struct PMCH_Info_r9 {
	PMCH_Config_r9_t	 pmch_Config_r9;
	MBMS_SessionInfoList_r9_t	 mbms_SessionInfoList_r9;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PMCH_Info_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PMCH_Info_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _PMCH_Info_r9_H_ */
#include <asn_internal.h>
