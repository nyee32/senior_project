/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_DRB_ToAddMod_H_
#define	_DRB_ToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "DRB-Identity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDCP_Config;
struct RLC_Config;
struct LogicalChannelConfig;

/* DRB-ToAddMod */
typedef struct DRB_ToAddMod {
	long	*eps_BearerIdentity	/* OPTIONAL */;
	DRB_Identity_t	 drb_Identity;
	struct PDCP_Config	*pdcp_Config	/* OPTIONAL */;
	struct RLC_Config	*rlc_Config	/* OPTIONAL */;
	long	*logicalChannelIdentity	/* OPTIONAL */;
	struct LogicalChannelConfig	*logicalChannelConfig	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_ToAddMod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_ToAddMod;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDCP-Config.h"
#include "RLC-Config.h"
#include "LogicalChannelConfig.h"

#endif	/* _DRB_ToAddMod_H_ */
#include <asn_internal.h>
