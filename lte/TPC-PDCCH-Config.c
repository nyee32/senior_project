/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#include "TPC-PDCCH-Config.h"

static int
memb_tpc_RNTI_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_tpc_RNTI_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_TPC_PDCCH_Config_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TPC_PDCCH_Config__setup, tpc_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_tpc_RNTI_constraint_3,
		&asn_PER_memb_tpc_RNTI_constr_4,
		0,
		"tpc-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TPC_PDCCH_Config__setup, tpc_Index),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TPC_Index,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tpc-Index"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tpc-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tpc-Index */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct TPC_PDCCH_Config__setup),
	offsetof(struct TPC_PDCCH_Config__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_3,
	2,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_TPC_PDCCH_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TPC_PDCCH_Config, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TPC_PDCCH_Config, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_TPC_PDCCH_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_TPC_PDCCH_Config_specs_1 = {
	sizeof(struct TPC_PDCCH_Config),
	offsetof(struct TPC_PDCCH_Config, _asn_ctx),
	offsetof(struct TPC_PDCCH_Config, present),
	sizeof(((struct TPC_PDCCH_Config *)0)->present),
	asn_MAP_TPC_PDCCH_Config_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TPC_PDCCH_Config = {
	"TPC-PDCCH-Config",
	"TPC-PDCCH-Config",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_TPC_PDCCH_Config_constr_1,
	asn_MBR_TPC_PDCCH_Config_1,
	2,	/* Elements count */
	&asn_SPC_TPC_PDCCH_Config_specs_1	/* Additional specs */
};

