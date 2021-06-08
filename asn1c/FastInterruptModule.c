/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Configuration-Structure-Schema"
 * 	found in "../schema.asn"
 * 	`asn1c -Wdebug-lexer -Wdebug-parser -Wdebug-fixer -Wdebug-compiler`
 */

#include "FastInterruptModule.h"

static asn_TYPE_member_t asn_MBR_index_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_index_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_index_specs_2 = {
	sizeof(struct index),
	offsetof(struct index, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_index_2 = {
	"index",
	"index",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_index_tags_2,
	sizeof(asn_DEF_index_tags_2)
		/sizeof(asn_DEF_index_tags_2[0]) - 1, /* 1 */
	asn_DEF_index_tags_2,	/* Same as above */
	sizeof(asn_DEF_index_tags_2)
		/sizeof(asn_DEF_index_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_index_2,
	1,	/* Single element */
	&asn_SPC_index_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_connectedHarts_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_connectedHarts_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_connectedHarts_specs_4 = {
	sizeof(struct connectedHarts),
	offsetof(struct connectedHarts, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_connectedHarts_4 = {
	"connectedHarts",
	"connectedHarts",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_connectedHarts_tags_4,
	sizeof(asn_DEF_connectedHarts_tags_4)
		/sizeof(asn_DEF_connectedHarts_tags_4[0]) - 1, /* 1 */
	asn_DEF_connectedHarts_tags_4,	/* Same as above */
	sizeof(asn_DEF_connectedHarts_tags_4)
		/sizeof(asn_DEF_connectedHarts_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_connectedHarts_4,
	1,	/* Single element */
	&asn_SPC_connectedHarts_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_FastInterruptModule_1[] = {
	{ ATF_POINTER, 2, offsetof(struct FastInterruptModule, index),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_index_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"index"
		},
	{ ATF_POINTER, 1, offsetof(struct FastInterruptModule, connectedHarts),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_connectedHarts_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connectedHarts"
		},
};
static const int asn_MAP_FastInterruptModule_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_FastInterruptModule_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FastInterruptModule_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* index */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* connectedHarts */
};
static asn_SEQUENCE_specifics_t asn_SPC_FastInterruptModule_specs_1 = {
	sizeof(struct FastInterruptModule),
	offsetof(struct FastInterruptModule, _asn_ctx),
	asn_MAP_FastInterruptModule_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_FastInterruptModule_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FastInterruptModule = {
	"FastInterruptModule",
	"FastInterruptModule",
	&asn_OP_SEQUENCE,
	asn_DEF_FastInterruptModule_tags_1,
	sizeof(asn_DEF_FastInterruptModule_tags_1)
		/sizeof(asn_DEF_FastInterruptModule_tags_1[0]), /* 1 */
	asn_DEF_FastInterruptModule_tags_1,	/* Same as above */
	sizeof(asn_DEF_FastInterruptModule_tags_1)
		/sizeof(asn_DEF_FastInterruptModule_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FastInterruptModule_1,
	2,	/* Elements count */
	&asn_SPC_FastInterruptModule_specs_1	/* Additional specs */
};
