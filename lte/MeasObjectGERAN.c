/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#include "MeasObjectGERAN.h"

static int
memb_ncc_Permitted_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ncc_Permitted_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static int asn_DFL_3_set_0(int set_value, void **sptr) {
	Q_OffsetRangeInterRAT_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_MeasObjectGERAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectGERAN, carrierFreqs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqsGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreqs"
		},
	{ ATF_NOFLAGS, 3, offsetof(struct MeasObjectGERAN, offsetFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRangeInterRAT,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_3_set_0,	/* DEFAULT 0 */
		"offsetFreq"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectGERAN, ncc_Permitted),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_ncc_Permitted_constraint_1,
		&asn_PER_memb_ncc_Permitted_constr_4,
		0,
		"ncc-Permitted"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectGERAN, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellForWhichToReportCGI"
		},
};
static const int asn_MAP_MeasObjectGERAN_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_MeasObjectGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectGERAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreqs */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* offsetFreq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ncc-Permitted */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* cellForWhichToReportCGI */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasObjectGERAN_specs_1 = {
	sizeof(struct MeasObjectGERAN),
	offsetof(struct MeasObjectGERAN, _asn_ctx),
	asn_MAP_MeasObjectGERAN_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MeasObjectGERAN_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectGERAN = {
	"MeasObjectGERAN",
	"MeasObjectGERAN",
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
	asn_DEF_MeasObjectGERAN_tags_1,
	sizeof(asn_DEF_MeasObjectGERAN_tags_1)
		/sizeof(asn_DEF_MeasObjectGERAN_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectGERAN_tags_1)
		/sizeof(asn_DEF_MeasObjectGERAN_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasObjectGERAN_1,
	4,	/* Elements count */
	&asn_SPC_MeasObjectGERAN_specs_1	/* Additional specs */
};

