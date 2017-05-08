/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_SoundingRS_UL_ConfigCommon_H_
#define	_SoundingRS_UL_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SoundingRS_UL_ConfigCommon_PR {
	SoundingRS_UL_ConfigCommon_PR_NOTHING,	/* No components present */
	SoundingRS_UL_ConfigCommon_PR_release,
	SoundingRS_UL_ConfigCommon_PR_setup
} SoundingRS_UL_ConfigCommon_PR;
typedef enum SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig {
	SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw0	= 0,
	SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw1	= 1,
	SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw2	= 2,
	SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw3	= 3,
	SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw4	= 4,
	SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw5	= 5,
	SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw6	= 6,
	SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw7	= 7
} e_SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig;
typedef enum SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig {
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc0	= 0,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc1	= 1,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc2	= 2,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc3	= 3,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc4	= 4,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc5	= 5,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc6	= 6,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc7	= 7,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc8	= 8,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc9	= 9,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc10	= 10,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc11	= 11,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc12	= 12,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc13	= 13,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc14	= 14,
	SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc15	= 15
} e_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig;
typedef enum SoundingRS_UL_ConfigCommon__setup__srs_MaxUpPts {
	SoundingRS_UL_ConfigCommon__setup__srs_MaxUpPts_true	= 0
} e_SoundingRS_UL_ConfigCommon__setup__srs_MaxUpPts;

/* SoundingRS-UL-ConfigCommon */
typedef struct SoundingRS_UL_ConfigCommon {
	SoundingRS_UL_ConfigCommon_PR present;
	union SoundingRS_UL_ConfigCommon_u {
		NULL_t	 release;
		struct SoundingRS_UL_ConfigCommon__setup {
			long	 srs_BandwidthConfig;
			long	 srs_SubframeConfig;
			BOOLEAN_t	 ackNackSRS_SimultaneousTransmission;
			long	*srs_MaxUpPts	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRS_UL_ConfigCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_BandwidthConfig_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_SubframeConfig_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_MaxUpPts_31;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigCommon;

#ifdef __cplusplus
}
#endif

#endif	/* _SoundingRS_UL_ConfigCommon_H_ */
#include <asn_internal.h>
