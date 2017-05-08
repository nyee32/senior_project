/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#include "RadioResourceConfigCommon.h"

static asn_TYPE_member_t asn_MBR_RadioResourceConfigCommon_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, rach_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rach-ConfigCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommon, prach_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prach-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, pdsch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdsch-ConfigCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommon, pusch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-ConfigCommon"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioResourceConfigCommon, phich_Config),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PHICH_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"phich-Config"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigCommon, pucch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pucch-ConfigCommon"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigCommon, soundingRS_UL_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"soundingRS-UL-ConfigCommon"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigCommon, uplinkPowerControlCommon),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPowerControlCommon"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigCommon, antennaInfoCommon),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"antennaInfoCommon"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommon, p_Max),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"p-Max"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, tdd_Config),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd-Config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommon, ul_CyclicPrefixLength),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CyclicPrefixLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CyclicPrefixLength"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, uplinkPowerControlCommon_v1020),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon_v1020,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPowerControlCommon-v1020"
		},
};
static const int asn_MAP_RadioResourceConfigCommon_oms_1[] = { 0, 2, 4, 5, 6, 7, 8, 9, 10, 12 };
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rach-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prach-Config */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdsch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pusch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* phich-Config */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pucch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* soundingRS-UL-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* uplinkPowerControlCommon */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* antennaInfoCommon */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* p-Max */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* tdd-Config */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ul-CyclicPrefixLength */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* uplinkPowerControlCommon-v1020 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommon_specs_1 = {
	sizeof(struct RadioResourceConfigCommon),
	offsetof(struct RadioResourceConfigCommon, _asn_ctx),
	asn_MAP_RadioResourceConfigCommon_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigCommon_oms_1,	/* Optional members */
	9, 1,	/* Root/Additions */
	11,	/* Start extensions */
	14	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommon = {
	"RadioResourceConfigCommon",
	"RadioResourceConfigCommon",
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
	asn_DEF_RadioResourceConfigCommon_tags_1,
	sizeof(asn_DEF_RadioResourceConfigCommon_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigCommon_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommon_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RadioResourceConfigCommon_1,
	13,	/* Elements count */
	&asn_SPC_RadioResourceConfigCommon_specs_1	/* Additional specs */
};

