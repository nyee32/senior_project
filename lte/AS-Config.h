/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_AS_Config_H_
#define	_AS_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasConfig.h"
#include "RadioResourceConfigDedicated.h"
#include "SecurityAlgorithmConfig.h"
#include "C-RNTI.h"
#include "MasterInformationBlock.h"
#include "SystemInformationBlockType1.h"
#include "SystemInformationBlockType2.h"
#include "AntennaInfoCommon.h"
#include "ARFCN-ValueEUTRA.h"
#include <OCTET_STRING.h>
#include "OtherConfig-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellToAddModList_r10;
struct OtherConfig_r9;

/* AS-Config */
typedef struct AS_Config {
	MeasConfig_t	 sourceMeasConfig;
	RadioResourceConfigDedicated_t	 sourceRadioResourceConfig;
	SecurityAlgorithmConfig_t	 sourceSecurityAlgorithmConfig;
	C_RNTI_t	 sourceUE_Identity;
	MasterInformationBlock_t	 sourceMasterInformationBlock;
	SystemInformationBlockType1_t	 sourceSystemInformationBlockType1;
	SystemInformationBlockType2_t	 sourceSystemInformationBlockType2;
	AntennaInfoCommon_t	 antennaInfoCommon;
	ARFCN_ValueEUTRA_t	 sourceDl_CarrierFreq;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*sourceSystemInformationBlockType1Ext	/* OPTIONAL */;
	struct OtherConfig_r9	*sourceOtherConfig_r9;
	struct SCellToAddModList_r10	*sourceSCellConfigList_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AS_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AS_Config;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCellToAddModList-r10.h"

#endif	/* _AS_Config_H_ */
#include <asn_internal.h>
