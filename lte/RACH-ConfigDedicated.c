/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#include "RACH-ConfigDedicated.h"

static int
memb_ra_PreambleIndex_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ra_PRACH_MaskIndex_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ra_PreambleIndex_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ra_PRACH_MaskIndex_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RACH_ConfigDedicated_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigDedicated, ra_PreambleIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ra_PreambleIndex_constraint_1,
		&asn_PER_memb_ra_PreambleIndex_constr_2,
		0,
		"ra-PreambleIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RACH_ConfigDedicated, ra_PRACH_MaskIndex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ra_PRACH_MaskIndex_constraint_1,
		&asn_PER_memb_ra_PRACH_MaskIndex_constr_3,
		0,
		"ra-PRACH-MaskIndex"
		},
};
static const ber_tlv_tag_t asn_DEF_RACH_ConfigDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RACH_ConfigDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ra-PreambleIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ra-PRACH-MaskIndex */
};
static asn_SEQUENCE_specifics_t asn_SPC_RACH_ConfigDedicated_specs_1 = {
	sizeof(struct RACH_ConfigDedicated),
	offsetof(struct RACH_ConfigDedicated, _asn_ctx),
	asn_MAP_RACH_ConfigDedicated_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RACH_ConfigDedicated = {
	"RACH-ConfigDedicated",
	"RACH-ConfigDedicated",
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
	asn_DEF_RACH_ConfigDedicated_tags_1,
	sizeof(asn_DEF_RACH_ConfigDedicated_tags_1)
		/sizeof(asn_DEF_RACH_ConfigDedicated_tags_1[0]), /* 1 */
	asn_DEF_RACH_ConfigDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_RACH_ConfigDedicated_tags_1)
		/sizeof(asn_DEF_RACH_ConfigDedicated_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RACH_ConfigDedicated_1,
	2,	/* Elements count */
	&asn_SPC_RACH_ConfigDedicated_specs_1	/* Additional specs */
};

