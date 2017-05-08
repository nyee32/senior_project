/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_UplinkPowerControlCommonSCell_r10_H_
#define	_UplinkPowerControlCommonSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UplinkPowerControlCommonSCell_r10__alpha_r10 {
	UplinkPowerControlCommonSCell_r10__alpha_r10_al0	= 0,
	UplinkPowerControlCommonSCell_r10__alpha_r10_al04	= 1,
	UplinkPowerControlCommonSCell_r10__alpha_r10_al05	= 2,
	UplinkPowerControlCommonSCell_r10__alpha_r10_al06	= 3,
	UplinkPowerControlCommonSCell_r10__alpha_r10_al07	= 4,
	UplinkPowerControlCommonSCell_r10__alpha_r10_al08	= 5,
	UplinkPowerControlCommonSCell_r10__alpha_r10_al09	= 6,
	UplinkPowerControlCommonSCell_r10__alpha_r10_al1	= 7
} e_UplinkPowerControlCommonSCell_r10__alpha_r10;

/* UplinkPowerControlCommonSCell-r10 */
typedef struct UplinkPowerControlCommonSCell_r10 {
	long	 p0_NominalPUSCH_r10;
	long	 alpha_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlCommonSCell_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_alpha_r10_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommonSCell_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPowerControlCommonSCell_r10_H_ */
#include <asn_internal.h>
