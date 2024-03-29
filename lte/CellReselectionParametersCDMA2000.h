/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_CellReselectionParametersCDMA2000_H_
#define	_CellReselectionParametersCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandClassListCDMA2000.h"
#include "NeighCellListCDMA2000.h"
#include "T-Reselection.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedStateScaleFactors;

/* CellReselectionParametersCDMA2000 */
typedef struct CellReselectionParametersCDMA2000 {
	BandClassListCDMA2000_t	 bandClassList;
	NeighCellListCDMA2000_t	 neighCellList;
	T_Reselection_t	 t_ReselectionCDMA2000;
	struct SpeedStateScaleFactors	*t_ReselectionCDMA2000_SF	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellReselectionParametersCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionParametersCDMA2000;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SpeedStateScaleFactors.h"

#endif	/* _CellReselectionParametersCDMA2000_H_ */
#include <asn_internal.h>
