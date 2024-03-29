/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_RRCConnectionReconfiguration_v890_IEs_H_
#define	_RRCConnectionReconfiguration_v890_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionReconfiguration_v920_IEs;

/* RRCConnectionReconfiguration-v890-IEs */
typedef struct RRCConnectionReconfiguration_v890_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_v920_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v890_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v890_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionReconfiguration-v920-IEs.h"

#endif	/* _RRCConnectionReconfiguration_v890_IEs_H_ */
#include <asn_internal.h>
