/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_MeasResults_H_
#define	_MeasResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasId.h"
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include "MeasResultListEUTRA.h"
#include "MeasResultListUTRA.h"
#include "MeasResultListGERAN.h"
#include "MeasResultsCDMA2000.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResults__measResultNeighCells_PR {
	MeasResults__measResultNeighCells_PR_NOTHING,	/* No components present */
	MeasResults__measResultNeighCells_PR_measResultListEUTRA,
	MeasResults__measResultNeighCells_PR_measResultListUTRA,
	MeasResults__measResultNeighCells_PR_measResultListGERAN,
	MeasResults__measResultNeighCells_PR_measResultsCDMA2000,
	/* Extensions may appear below */
	
} MeasResults__measResultNeighCells_PR;

/* Forward declarations */
struct MeasResultForECID_r9;
struct LocationInfo_r10;
struct MeasResultServFreqList_r10;

/* MeasResults */
typedef struct MeasResults {
	MeasId_t	 measId;
	struct MeasResults__measResultPCell {
		RSRP_Range_t	 rsrpResult;
		RSRQ_Range_t	 rsrqResult;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultPCell;
	struct MeasResults__measResultNeighCells {
		MeasResults__measResultNeighCells_PR present;
		union MeasResults__measResultNeighCells_u {
			MeasResultListEUTRA_t	 measResultListEUTRA;
			MeasResultListUTRA_t	 measResultListUTRA;
			MeasResultListGERAN_t	 measResultListGERAN;
			MeasResultsCDMA2000_t	 measResultsCDMA2000;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasResultForECID_r9	*measResultForECID_r9	/* OPTIONAL */;
	struct LocationInfo_r10	*locationInfo_r10	/* OPTIONAL */;
	struct MeasResultServFreqList_r10	*measResultServFreqList_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResults;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultForECID-r9.h"
#include "LocationInfo-r10.h"
#include "MeasResultServFreqList-r10.h"

#endif	/* _MeasResults_H_ */
#include <asn_internal.h>
