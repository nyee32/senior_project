/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_CarrierFreqsInfoGERAN_H_
#define	_CarrierFreqsInfoGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CarrierFreqsGERAN.h"
#include "CellReselectionPriority.h"
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include "ReselectionThreshold.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CarrierFreqsInfoGERAN */
typedef struct CarrierFreqsInfoGERAN {
	CarrierFreqsGERAN_t	 carrierFreqs;
	struct CarrierFreqsInfoGERAN__commonInfo {
		CellReselectionPriority_t	*cellReselectionPriority	/* OPTIONAL */;
		BIT_STRING_t	 ncc_Permitted;
		long	 q_RxLevMin;
		long	*p_MaxGERAN	/* OPTIONAL */;
		ReselectionThreshold_t	 threshX_High;
		ReselectionThreshold_t	 threshX_Low;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} commonInfo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqsInfoGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqsInfoGERAN;

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqsInfoGERAN_H_ */
#include <asn_internal.h>
