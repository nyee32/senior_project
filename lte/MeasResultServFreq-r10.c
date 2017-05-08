/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#include "MeasResultServFreq-r10.h"

static asn_TYPE_member_t asn_MBR_measResultSCell_r10_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r10__measResultSCell_r10, rsrpResultSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrpResultSCell-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r10__measResultSCell_r10, rsrqResultSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrqResultSCell-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_measResultSCell_r10_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultSCell_r10_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResultSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsrqResultSCell-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultSCell_r10_specs_3 = {
	sizeof(struct MeasResultServFreq_r10__measResultSCell_r10),
	offsetof(struct MeasResultServFreq_r10__measResultSCell_r10, _asn_ctx),
	asn_MAP_measResultSCell_r10_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultSCell_r10_3 = {
	"measResultSCell-r10",
	"measResultSCell-r10",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_measResultSCell_r10_tags_3,
	sizeof(asn_DEF_measResultSCell_r10_tags_3)
		/sizeof(asn_DEF_measResultSCell_r10_tags_3[0]) - 1, /* 1 */
	asn_DEF_measResultSCell_r10_tags_3,	/* Same as above */
	sizeof(asn_DEF_measResultSCell_r10_tags_3)
		/sizeof(asn_DEF_measResultSCell_r10_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_measResultSCell_r10_3,
	2,	/* Elements count */
	&asn_SPC_measResultSCell_r10_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResultBestNeighCell_r10_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r10__measResultBestNeighCell_r10, physCellId_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r10__measResultBestNeighCell_r10, rsrpResultNCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrpResultNCell-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r10__measResultBestNeighCell_r10, rsrqResultNCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrqResultNCell-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_measResultBestNeighCell_r10_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultBestNeighCell_r10_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsrpResultNCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rsrqResultNCell-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultBestNeighCell_r10_specs_6 = {
	sizeof(struct MeasResultServFreq_r10__measResultBestNeighCell_r10),
	offsetof(struct MeasResultServFreq_r10__measResultBestNeighCell_r10, _asn_ctx),
	asn_MAP_measResultBestNeighCell_r10_tag2el_6,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultBestNeighCell_r10_6 = {
	"measResultBestNeighCell-r10",
	"measResultBestNeighCell-r10",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_measResultBestNeighCell_r10_tags_6,
	sizeof(asn_DEF_measResultBestNeighCell_r10_tags_6)
		/sizeof(asn_DEF_measResultBestNeighCell_r10_tags_6[0]) - 1, /* 1 */
	asn_DEF_measResultBestNeighCell_r10_tags_6,	/* Same as above */
	sizeof(asn_DEF_measResultBestNeighCell_r10_tags_6)
		/sizeof(asn_DEF_measResultBestNeighCell_r10_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_measResultBestNeighCell_r10_6,
	3,	/* Elements count */
	&asn_SPC_measResultBestNeighCell_r10_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MeasResultServFreq_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServFreq_r10, servFreqId_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"servFreqId-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultServFreq_r10, measResultSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_measResultSCell_r10_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultSCell-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultServFreq_r10, measResultBestNeighCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_measResultBestNeighCell_r10_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultBestNeighCell-r10"
		},
};
static const int asn_MAP_MeasResultServFreq_r10_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_MeasResultServFreq_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultServFreq_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servFreqId-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResultBestNeighCell-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasResultServFreq_r10_specs_1 = {
	sizeof(struct MeasResultServFreq_r10),
	offsetof(struct MeasResultServFreq_r10, _asn_ctx),
	asn_MAP_MeasResultServFreq_r10_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResultServFreq_r10_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultServFreq_r10 = {
	"MeasResultServFreq-r10",
	"MeasResultServFreq-r10",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_MeasResultServFreq_r10_tags_1,
	sizeof(asn_DEF_MeasResultServFreq_r10_tags_1)
		/sizeof(asn_DEF_MeasResultServFreq_r10_tags_1[0]), /* 1 */
	asn_DEF_MeasResultServFreq_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultServFreq_r10_tags_1)
		/sizeof(asn_DEF_MeasResultServFreq_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasResultServFreq_r10_1,
	3,	/* Elements count */
	&asn_SPC_MeasResultServFreq_r10_specs_1	/* Additional specs */
};

