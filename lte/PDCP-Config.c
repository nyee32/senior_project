/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -S /home/nyee/srsLTE/srslte/examples/src/asn1c/skeletons -fcompound-names -fskeletons-copy -gen-PER -pdu=auto`
 */

#include "PDCP-Config.h"

static int
discardTimer_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
discardTimer_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
discardTimer_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	discardTimer_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
discardTimer_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	discardTimer_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
discardTimer_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	discardTimer_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
discardTimer_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	discardTimer_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
discardTimer_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	discardTimer_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
discardTimer_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	discardTimer_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
discardTimer_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	discardTimer_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
discardTimer_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	discardTimer_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
pdcp_SN_Size_14_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
pdcp_SN_Size_14_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
pdcp_SN_Size_14_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	pdcp_SN_Size_14_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
pdcp_SN_Size_14_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	pdcp_SN_Size_14_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
pdcp_SN_Size_14_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	pdcp_SN_Size_14_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
pdcp_SN_Size_14_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	pdcp_SN_Size_14_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
pdcp_SN_Size_14_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	pdcp_SN_Size_14_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
pdcp_SN_Size_14_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	pdcp_SN_Size_14_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
pdcp_SN_Size_14_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	pdcp_SN_Size_14_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
pdcp_SN_Size_14_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	pdcp_SN_Size_14_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_maxCID_constraint_19(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16383)) {
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
rn_IntegrityProtection_r10_33_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
rn_IntegrityProtection_r10_33_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
rn_IntegrityProtection_r10_33_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	rn_IntegrityProtection_r10_33_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
rn_IntegrityProtection_r10_33_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	rn_IntegrityProtection_r10_33_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
rn_IntegrityProtection_r10_33_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	rn_IntegrityProtection_r10_33_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
rn_IntegrityProtection_r10_33_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	rn_IntegrityProtection_r10_33_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
rn_IntegrityProtection_r10_33_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	rn_IntegrityProtection_r10_33_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
rn_IntegrityProtection_r10_33_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	rn_IntegrityProtection_r10_33_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
rn_IntegrityProtection_r10_33_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	rn_IntegrityProtection_r10_33_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
rn_IntegrityProtection_r10_33_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	rn_IntegrityProtection_r10_33_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_discardTimer_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_pdcp_SN_Size_constr_14 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_maxCID_constr_20 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 14,  14,  1,  16383 }	/* (1..16383) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_headerCompression_constr_17 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_rn_IntegrityProtection_r10_constr_33 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_discardTimer_value2enum_2[] = {
	{ 0,	4,	"ms50" },
	{ 1,	5,	"ms100" },
	{ 2,	5,	"ms150" },
	{ 3,	5,	"ms300" },
	{ 4,	5,	"ms500" },
	{ 5,	5,	"ms750" },
	{ 6,	6,	"ms1500" },
	{ 7,	8,	"infinity" }
};
static const unsigned int asn_MAP_discardTimer_enum2value_2[] = {
	7,	/* infinity(7) */
	1,	/* ms100(1) */
	2,	/* ms150(2) */
	6,	/* ms1500(6) */
	3,	/* ms300(3) */
	0,	/* ms50(0) */
	4,	/* ms500(4) */
	5	/* ms750(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_discardTimer_specs_2 = {
	asn_MAP_discardTimer_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_discardTimer_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_discardTimer_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discardTimer_2 = {
	"discardTimer",
	"discardTimer",
	discardTimer_2_free,
	discardTimer_2_print,
	discardTimer_2_constraint,
	discardTimer_2_decode_ber,
	discardTimer_2_encode_der,
	discardTimer_2_decode_xer,
	discardTimer_2_encode_xer,
	discardTimer_2_decode_uper,
	discardTimer_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_discardTimer_tags_2,
	sizeof(asn_DEF_discardTimer_tags_2)
		/sizeof(asn_DEF_discardTimer_tags_2[0]) - 1, /* 1 */
	asn_DEF_discardTimer_tags_2,	/* Same as above */
	sizeof(asn_DEF_discardTimer_tags_2)
		/sizeof(asn_DEF_discardTimer_tags_2[0]), /* 2 */
	&asn_PER_type_discardTimer_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_discardTimer_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rlc_AM_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__rlc_AM, statusReportRequired),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"statusReportRequired"
		},
};
static const ber_tlv_tag_t asn_DEF_rlc_AM_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rlc_AM_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* statusReportRequired */
};
static asn_SEQUENCE_specifics_t asn_SPC_rlc_AM_specs_11 = {
	sizeof(struct PDCP_Config__rlc_AM),
	offsetof(struct PDCP_Config__rlc_AM, _asn_ctx),
	asn_MAP_rlc_AM_tag2el_11,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlc_AM_11 = {
	"rlc-AM",
	"rlc-AM",
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
	asn_DEF_rlc_AM_tags_11,
	sizeof(asn_DEF_rlc_AM_tags_11)
		/sizeof(asn_DEF_rlc_AM_tags_11[0]) - 1, /* 1 */
	asn_DEF_rlc_AM_tags_11,	/* Same as above */
	sizeof(asn_DEF_rlc_AM_tags_11)
		/sizeof(asn_DEF_rlc_AM_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_rlc_AM_11,
	1,	/* Elements count */
	&asn_SPC_rlc_AM_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdcp_SN_Size_value2enum_14[] = {
	{ 0,	8,	"len7bits" },
	{ 1,	9,	"len12bits" }
};
static const unsigned int asn_MAP_pdcp_SN_Size_enum2value_14[] = {
	1,	/* len12bits(1) */
	0	/* len7bits(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdcp_SN_Size_specs_14 = {
	asn_MAP_pdcp_SN_Size_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_pdcp_SN_Size_enum2value_14,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdcp_SN_Size_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdcp_SN_Size_14 = {
	"pdcp-SN-Size",
	"pdcp-SN-Size",
	pdcp_SN_Size_14_free,
	pdcp_SN_Size_14_print,
	pdcp_SN_Size_14_constraint,
	pdcp_SN_Size_14_decode_ber,
	pdcp_SN_Size_14_encode_der,
	pdcp_SN_Size_14_decode_xer,
	pdcp_SN_Size_14_encode_xer,
	pdcp_SN_Size_14_decode_uper,
	pdcp_SN_Size_14_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_pdcp_SN_Size_tags_14,
	sizeof(asn_DEF_pdcp_SN_Size_tags_14)
		/sizeof(asn_DEF_pdcp_SN_Size_tags_14[0]) - 1, /* 1 */
	asn_DEF_pdcp_SN_Size_tags_14,	/* Same as above */
	sizeof(asn_DEF_pdcp_SN_Size_tags_14)
		/sizeof(asn_DEF_pdcp_SN_Size_tags_14[0]), /* 2 */
	&asn_PER_type_pdcp_SN_Size_constr_14,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdcp_SN_Size_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rlc_UM_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__rlc_UM, pdcp_SN_Size),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdcp_SN_Size_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-SN-Size"
		},
};
static const ber_tlv_tag_t asn_DEF_rlc_UM_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rlc_UM_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pdcp-SN-Size */
};
static asn_SEQUENCE_specifics_t asn_SPC_rlc_UM_specs_13 = {
	sizeof(struct PDCP_Config__rlc_UM),
	offsetof(struct PDCP_Config__rlc_UM, _asn_ctx),
	asn_MAP_rlc_UM_tag2el_13,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlc_UM_13 = {
	"rlc-UM",
	"rlc-UM",
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
	asn_DEF_rlc_UM_tags_13,
	sizeof(asn_DEF_rlc_UM_tags_13)
		/sizeof(asn_DEF_rlc_UM_tags_13[0]) - 1, /* 1 */
	asn_DEF_rlc_UM_tags_13,	/* Same as above */
	sizeof(asn_DEF_rlc_UM_tags_13)
		/sizeof(asn_DEF_rlc_UM_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_rlc_UM_13,
	1,	/* Elements count */
	&asn_SPC_rlc_UM_specs_13	/* Additional specs */
};

static int asn_DFL_20_set_15(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 15 */
		*st = 15;
		return 0;
	} else {
		/* Test default value 15 */
		return (*st == 15);
	}
}
static asn_TYPE_member_t asn_MBR_profiles_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression__rohc__profiles, profile0x0001),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"profile0x0001"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression__rohc__profiles, profile0x0002),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"profile0x0002"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression__rohc__profiles, profile0x0003),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"profile0x0003"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression__rohc__profiles, profile0x0004),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"profile0x0004"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression__rohc__profiles, profile0x0006),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"profile0x0006"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression__rohc__profiles, profile0x0101),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"profile0x0101"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression__rohc__profiles, profile0x0102),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"profile0x0102"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression__rohc__profiles, profile0x0103),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"profile0x0103"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression__rohc__profiles, profile0x0104),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"profile0x0104"
		},
};
static const ber_tlv_tag_t asn_DEF_profiles_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_profiles_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* profile0x0001 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* profile0x0002 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* profile0x0003 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* profile0x0004 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* profile0x0006 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* profile0x0101 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* profile0x0102 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* profile0x0103 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* profile0x0104 */
};
static asn_SEQUENCE_specifics_t asn_SPC_profiles_specs_21 = {
	sizeof(struct PDCP_Config__headerCompression__rohc__profiles),
	offsetof(struct PDCP_Config__headerCompression__rohc__profiles, _asn_ctx),
	asn_MAP_profiles_tag2el_21,
	9,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_profiles_21 = {
	"profiles",
	"profiles",
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
	asn_DEF_profiles_tags_21,
	sizeof(asn_DEF_profiles_tags_21)
		/sizeof(asn_DEF_profiles_tags_21[0]) - 1, /* 1 */
	asn_DEF_profiles_tags_21,	/* Same as above */
	sizeof(asn_DEF_profiles_tags_21)
		/sizeof(asn_DEF_profiles_tags_21[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_profiles_21,
	9,	/* Elements count */
	&asn_SPC_profiles_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rohc_19[] = {
	{ ATF_POINTER, 1, offsetof(struct PDCP_Config__headerCompression__rohc, maxCID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_maxCID_constraint_19,
		&asn_PER_memb_maxCID_constr_20,
		asn_DFL_20_set_15,	/* DEFAULT 15 */
		"maxCID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression__rohc, profiles),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_profiles_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"profiles"
		},
};
static const int asn_MAP_rohc_oms_19[] = { 0 };
static const ber_tlv_tag_t asn_DEF_rohc_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rohc_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxCID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* profiles */
};
static asn_SEQUENCE_specifics_t asn_SPC_rohc_specs_19 = {
	sizeof(struct PDCP_Config__headerCompression__rohc),
	offsetof(struct PDCP_Config__headerCompression__rohc, _asn_ctx),
	asn_MAP_rohc_tag2el_19,
	2,	/* Count of tags in the map */
	asn_MAP_rohc_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rohc_19 = {
	"rohc",
	"rohc",
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
	asn_DEF_rohc_tags_19,
	sizeof(asn_DEF_rohc_tags_19)
		/sizeof(asn_DEF_rohc_tags_19[0]) - 1, /* 1 */
	asn_DEF_rohc_tags_19,	/* Same as above */
	sizeof(asn_DEF_rohc_tags_19)
		/sizeof(asn_DEF_rohc_tags_19[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_rohc_19,
	2,	/* Elements count */
	&asn_SPC_rohc_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_headerCompression_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression, choice.notUsed),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"notUsed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config__headerCompression, choice.rohc),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_rohc_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rohc"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_headerCompression_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notUsed */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rohc */
};
static asn_CHOICE_specifics_t asn_SPC_headerCompression_specs_17 = {
	sizeof(struct PDCP_Config__headerCompression),
	offsetof(struct PDCP_Config__headerCompression, _asn_ctx),
	offsetof(struct PDCP_Config__headerCompression, present),
	sizeof(((struct PDCP_Config__headerCompression *)0)->present),
	asn_MAP_headerCompression_tag2el_17,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_headerCompression_17 = {
	"headerCompression",
	"headerCompression",
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
	&asn_PER_type_headerCompression_constr_17,
	asn_MBR_headerCompression_17,
	2,	/* Elements count */
	&asn_SPC_headerCompression_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rn_IntegrityProtection_r10_value2enum_33[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_rn_IntegrityProtection_r10_enum2value_33[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rn_IntegrityProtection_r10_specs_33 = {
	asn_MAP_rn_IntegrityProtection_r10_value2enum_33,	/* "tag" => N; sorted by tag */
	asn_MAP_rn_IntegrityProtection_r10_enum2value_33,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rn_IntegrityProtection_r10_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rn_IntegrityProtection_r10_33 = {
	"rn-IntegrityProtection-r10",
	"rn-IntegrityProtection-r10",
	rn_IntegrityProtection_r10_33_free,
	rn_IntegrityProtection_r10_33_print,
	rn_IntegrityProtection_r10_33_constraint,
	rn_IntegrityProtection_r10_33_decode_ber,
	rn_IntegrityProtection_r10_33_encode_der,
	rn_IntegrityProtection_r10_33_decode_xer,
	rn_IntegrityProtection_r10_33_encode_xer,
	rn_IntegrityProtection_r10_33_decode_uper,
	rn_IntegrityProtection_r10_33_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_rn_IntegrityProtection_r10_tags_33,
	sizeof(asn_DEF_rn_IntegrityProtection_r10_tags_33)
		/sizeof(asn_DEF_rn_IntegrityProtection_r10_tags_33[0]) - 1, /* 1 */
	asn_DEF_rn_IntegrityProtection_r10_tags_33,	/* Same as above */
	sizeof(asn_DEF_rn_IntegrityProtection_r10_tags_33)
		/sizeof(asn_DEF_rn_IntegrityProtection_r10_tags_33[0]), /* 2 */
	&asn_PER_type_rn_IntegrityProtection_r10_constr_33,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rn_IntegrityProtection_r10_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PDCP_Config_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PDCP_Config, discardTimer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_discardTimer_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"discardTimer"
		},
	{ ATF_POINTER, 2, offsetof(struct PDCP_Config, rlc_AM),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_rlc_AM_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-AM"
		},
	{ ATF_POINTER, 1, offsetof(struct PDCP_Config, rlc_UM),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_rlc_UM_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-UM"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Config, headerCompression),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_headerCompression_17,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"headerCompression"
		},
	{ ATF_POINTER, 1, offsetof(struct PDCP_Config, rn_IntegrityProtection_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rn_IntegrityProtection_r10_33,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rn-IntegrityProtection-r10"
		},
};
static const int asn_MAP_PDCP_Config_oms_1[] = { 0, 1, 2, 4 };
static const ber_tlv_tag_t asn_DEF_PDCP_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDCP_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discardTimer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlc-AM */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rlc-UM */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* headerCompression */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* rn-IntegrityProtection-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDCP_Config_specs_1 = {
	sizeof(struct PDCP_Config),
	offsetof(struct PDCP_Config, _asn_ctx),
	asn_MAP_PDCP_Config_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_PDCP_Config_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	3,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PDCP_Config = {
	"PDCP-Config",
	"PDCP-Config",
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
	asn_DEF_PDCP_Config_tags_1,
	sizeof(asn_DEF_PDCP_Config_tags_1)
		/sizeof(asn_DEF_PDCP_Config_tags_1[0]), /* 1 */
	asn_DEF_PDCP_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_Config_tags_1)
		/sizeof(asn_DEF_PDCP_Config_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PDCP_Config_1,
	5,	/* Elements count */
	&asn_SPC_PDCP_Config_specs_1	/* Additional specs */
};

