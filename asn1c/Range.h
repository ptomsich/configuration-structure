/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Configuration-Structure-Schema"
 * 	found in "../schema.asn"
 * 	`asn1c -Wdebug-lexer -Wdebug-parser -Wdebug-fixer -Wdebug-compiler`
 */

#ifndef	_Range_H_
#define	_Range_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Range */
typedef struct Range {
	long	 start;
	long	 length;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Range_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Range;
extern asn_SEQUENCE_specifics_t asn_SPC_Range_specs_1;
extern asn_TYPE_member_t asn_MBR_Range_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Range_H_ */
#include <asn_internal.h>