/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_RRCConnectionReconfiguration_v1020_IEs_H_
#define	_RRCConnectionReconfiguration_v1020_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellToReleaseList_r10;
struct SCellToAddModList_r10;

/* RRCConnectionReconfiguration-v1020-IEs */
typedef struct RRCConnectionReconfiguration_v1020_IEs {
	struct SCellToReleaseList_r10	*sCellToReleaseList_r10	/* OPTIONAL */;
	struct SCellToAddModList_r10	*sCellToAddModList_r10	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_v1020_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v1020_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v1020_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCellToReleaseList-r10.h"
#include "SCellToAddModList-r10.h"

#endif	/* _RRCConnectionReconfiguration_v1020_IEs_H_ */
#include <asn_internal.h>
