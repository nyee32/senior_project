/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_MobilityFromEUTRACommand_v960_IEs_H_
#define	_MobilityFromEUTRACommand_v960_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandIndicatorGERAN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MobilityFromEUTRACommand-v960-IEs */
typedef struct MobilityFromEUTRACommand_v960_IEs {
	BandIndicatorGERAN_t	*bandIndicator	/* OPTIONAL */;
	struct MobilityFromEUTRACommand_v960_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityFromEUTRACommand_v960_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityFromEUTRACommand_v960_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityFromEUTRACommand_v960_IEs_H_ */
#include <asn_internal.h>
