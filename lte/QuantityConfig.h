/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_QuantityConfig_H_
#define	_QuantityConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QuantityConfigEUTRA;
struct QuantityConfigUTRA;
struct QuantityConfigGERAN;
struct QuantityConfigCDMA2000;
struct QuantityConfigUTRA_v1020;

/* QuantityConfig */
typedef struct QuantityConfig {
	struct QuantityConfigEUTRA	*quantityConfigEUTRA	/* OPTIONAL */;
	struct QuantityConfigUTRA	*quantityConfigUTRA	/* OPTIONAL */;
	struct QuantityConfigGERAN	*quantityConfigGERAN	/* OPTIONAL */;
	struct QuantityConfigCDMA2000	*quantityConfigCDMA2000	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct QuantityConfigUTRA_v1020	*quantityConfigUTRA_v1020	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfig;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "QuantityConfigEUTRA.h"
#include "QuantityConfigUTRA.h"
#include "QuantityConfigGERAN.h"
#include "QuantityConfigCDMA2000.h"
#include "QuantityConfigUTRA-v1020.h"

#endif	/* _QuantityConfig_H_ */
#include <asn_internal.h>
