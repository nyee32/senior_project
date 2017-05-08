/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#ifndef	_LoggedMeasurementConfiguration_r10_IEs_H_
#define	_LoggedMeasurementConfiguration_r10_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TraceReference-r10.h"
#include <OCTET_STRING.h>
#include "AbsoluteTimeInfo-r10.h"
#include "LoggingDuration-r10.h"
#include "LoggingInterval-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AreaConfiguration_r10;

/* LoggedMeasurementConfiguration-r10-IEs */
typedef struct LoggedMeasurementConfiguration_r10_IEs {
	TraceReference_r10_t	 traceReference_r10;
	OCTET_STRING_t	 traceRecordingSessionRef_r10;
	OCTET_STRING_t	 tce_Id_r10;
	AbsoluteTimeInfo_r10_t	 absoluteTimeInfo_r10;
	struct AreaConfiguration_r10	*areaConfiguration_r10	/* OPTIONAL */;
	LoggingDuration_r10_t	 loggingDuration_r10;
	LoggingInterval_r10_t	 loggingInterval_r10;
	struct LoggedMeasurementConfiguration_r10_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasurementConfiguration_r10_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasurementConfiguration_r10_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AreaConfiguration-r10.h"

#endif	/* _LoggedMeasurementConfiguration_r10_IEs_H_ */
#include <asn_internal.h>
