/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_NeighCellsPerBandclassListCDMA2000_v920_H_
#define	_NeighCellsPerBandclassListCDMA2000_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NeighCellsPerBandclassCDMA2000_v920;

/* NeighCellsPerBandclassListCDMA2000-v920 */
typedef struct NeighCellsPerBandclassListCDMA2000_v920 {
	A_SEQUENCE_OF(struct NeighCellsPerBandclassCDMA2000_v920) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellsPerBandclassListCDMA2000_v920_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellsPerBandclassListCDMA2000_v920;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NeighCellsPerBandclassCDMA2000-v920.h"

#endif	/* _NeighCellsPerBandclassListCDMA2000_v920_H_ */
#include <asn_internal.h>
