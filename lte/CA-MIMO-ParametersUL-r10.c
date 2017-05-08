/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#include "CA-MIMO-ParametersUL-r10.h"

static asn_TYPE_member_t asn_MBR_CA_MIMO_ParametersUL_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CA_MIMO_ParametersUL_r10, ca_BandwidthClassUL_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_BandwidthClass_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ca-BandwidthClassUL-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CA_MIMO_ParametersUL_r10, supportedMIMO_CapabilityUL_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CapabilityUL_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportedMIMO-CapabilityUL-r10"
		},
};
static const int asn_MAP_CA_MIMO_ParametersUL_r10_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_CA_MIMO_ParametersUL_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CA_MIMO_ParametersUL_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ca-BandwidthClassUL-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supportedMIMO-CapabilityUL-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CA_MIMO_ParametersUL_r10_specs_1 = {
	sizeof(struct CA_MIMO_ParametersUL_r10),
	offsetof(struct CA_MIMO_ParametersUL_r10, _asn_ctx),
	asn_MAP_CA_MIMO_ParametersUL_r10_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CA_MIMO_ParametersUL_r10_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CA_MIMO_ParametersUL_r10 = {
	"CA-MIMO-ParametersUL-r10",
	"CA-MIMO-ParametersUL-r10",
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
	asn_DEF_CA_MIMO_ParametersUL_r10_tags_1,
	sizeof(asn_DEF_CA_MIMO_ParametersUL_r10_tags_1)
		/sizeof(asn_DEF_CA_MIMO_ParametersUL_r10_tags_1[0]), /* 1 */
	asn_DEF_CA_MIMO_ParametersUL_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_CA_MIMO_ParametersUL_r10_tags_1)
		/sizeof(asn_DEF_CA_MIMO_ParametersUL_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CA_MIMO_ParametersUL_r10_1,
	2,	/* Elements count */
	&asn_SPC_CA_MIMO_ParametersUL_r10_specs_1	/* Additional specs */
};

