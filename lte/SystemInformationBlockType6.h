/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_SystemInformationBlockType6_H_
#define	_SystemInformationBlockType6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T-Reselection.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CarrierFreqListUTRA_FDD;
struct CarrierFreqListUTRA_TDD;
struct SpeedStateScaleFactors;

/* SystemInformationBlockType6 */
typedef struct SystemInformationBlockType6 {
	struct CarrierFreqListUTRA_FDD	*carrierFreqListUTRA_FDD	/* OPTIONAL */;
	struct CarrierFreqListUTRA_TDD	*carrierFreqListUTRA_TDD	/* OPTIONAL */;
	T_Reselection_t	 t_ReselectionUTRA;
	struct SpeedStateScaleFactors	*t_ReselectionUTRA_SF	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreqListUTRA-FDD.h"
#include "CarrierFreqListUTRA-TDD.h"
#include "SpeedStateScaleFactors.h"

#endif	/* _SystemInformationBlockType6_H_ */
#include <asn_internal.h>
