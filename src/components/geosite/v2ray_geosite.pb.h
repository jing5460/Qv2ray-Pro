/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6-dev */

#ifndef PB_V2RAY_CORE_APP_ROUTER_V2RAY_GEOSITE_PB_H_INCLUDED
#define PB_V2RAY_CORE_APP_ROUTER_V2RAY_GEOSITE_PB_H_INCLUDED
#include "pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _v2ray_core_app_router_DomainObject_Type { 
    v2ray_core_app_router_DomainObject_Type_Plain = 0, 
    v2ray_core_app_router_DomainObject_Type_Regex = 1, 
    v2ray_core_app_router_DomainObject_Type_Domain = 2, 
    v2ray_core_app_router_DomainObject_Type_Full = 3 
} v2ray_core_app_router_DomainObject_Type;

/* Struct definitions */
typedef struct _v2ray_core_app_router_GeoIP { 
    pb_callback_t country_code; 
    pb_callback_t cidr; 
} v2ray_core_app_router_GeoIP;

typedef struct _v2ray_core_app_router_GeoIPList { 
    pb_callback_t entry; 
} v2ray_core_app_router_GeoIPList;

typedef struct _v2ray_core_app_router_GeoSite { 
    pb_callback_t country_code; 
    pb_callback_t domain; 
} v2ray_core_app_router_GeoSite;

typedef struct _v2ray_core_app_router_GeoSiteList { 
    pb_callback_t entry; 
} v2ray_core_app_router_GeoSiteList;

typedef struct _v2ray_core_app_router_CIDR { 
    pb_callback_t ip; 
    uint32_t prefix; 
} v2ray_core_app_router_CIDR;

/* DomainObject for routing decision. */
typedef struct _v2ray_core_app_router_DomainObject { 
    /* DomainObject matching type. */
    v2ray_core_app_router_DomainObject_Type type; 
    /* DomainObject value. */
    pb_callback_t value; 
    /* Attributes of this domain. May be used for filtering. */
    pb_callback_t attribute; 
} v2ray_core_app_router_DomainObject;

/* IP for routing decision, in CIDR form. */
typedef struct _v2ray_core_app_router_DomainObject_Attribute { 
    /* IP address, should be either 4 or 16 bytes. */
    pb_callback_t key; 
    /* Number of leading ones in the network mask. */
    pb_size_t which_typed_value;
    union {
        bool bool_value;
        int64_t int_value;
    } typed_value; 
} v2ray_core_app_router_DomainObject_Attribute;


/* Helper constants for enums */
#define _v2ray_core_app_router_DomainObject_Type_MIN v2ray_core_app_router_DomainObject_Type_Plain
#define _v2ray_core_app_router_DomainObject_Type_MAX v2ray_core_app_router_DomainObject_Type_Full
#define _v2ray_core_app_router_DomainObject_Type_ARRAYSIZE ((v2ray_core_app_router_DomainObject_Type)(v2ray_core_app_router_DomainObject_Type_Full+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define v2ray_core_app_router_DomainObject_init_default {_v2ray_core_app_router_DomainObject_Type_MIN, {{NULL}, NULL}, {{NULL}, NULL}}
#define v2ray_core_app_router_DomainObject_Attribute_init_default {{{NULL}, NULL}, 0, {0}}
#define v2ray_core_app_router_CIDR_init_default  {{{NULL}, NULL}, 0}
#define v2ray_core_app_router_GeoIP_init_default {{{NULL}, NULL}, {{NULL}, NULL}}
#define v2ray_core_app_router_GeoIPList_init_default {{{NULL}, NULL}}
#define v2ray_core_app_router_GeoSite_init_default {{{NULL}, NULL}, {{NULL}, NULL}}
#define v2ray_core_app_router_GeoSiteList_init_default {{{NULL}, NULL}}
#define v2ray_core_app_router_DomainObject_init_zero {_v2ray_core_app_router_DomainObject_Type_MIN, {{NULL}, NULL}, {{NULL}, NULL}}
#define v2ray_core_app_router_DomainObject_Attribute_init_zero {{{NULL}, NULL}, 0, {0}}
#define v2ray_core_app_router_CIDR_init_zero     {{{NULL}, NULL}, 0}
#define v2ray_core_app_router_GeoIP_init_zero    {{{NULL}, NULL}, {{NULL}, NULL}}
#define v2ray_core_app_router_GeoIPList_init_zero {{{NULL}, NULL}}
#define v2ray_core_app_router_GeoSite_init_zero  {{{NULL}, NULL}, {{NULL}, NULL}}
#define v2ray_core_app_router_GeoSiteList_init_zero {{{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define v2ray_core_app_router_GeoIP_country_code_tag 1
#define v2ray_core_app_router_GeoIP_cidr_tag     2
#define v2ray_core_app_router_GeoIPList_entry_tag 1
#define v2ray_core_app_router_GeoSite_country_code_tag 1
#define v2ray_core_app_router_GeoSite_domain_tag 2
#define v2ray_core_app_router_GeoSiteList_entry_tag 1
#define v2ray_core_app_router_CIDR_ip_tag        1
#define v2ray_core_app_router_CIDR_prefix_tag    2
#define v2ray_core_app_router_DomainObject_type_tag 1
#define v2ray_core_app_router_DomainObject_value_tag 2
#define v2ray_core_app_router_DomainObject_attribute_tag 3
#define v2ray_core_app_router_DomainObject_Attribute_key_tag 1
#define v2ray_core_app_router_DomainObject_Attribute_bool_value_tag 2
#define v2ray_core_app_router_DomainObject_Attribute_int_value_tag 3

/* Struct field encoding specification for nanopb */
#define v2ray_core_app_router_DomainObject_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    type,              1) \
X(a, CALLBACK, SINGULAR, STRING,   value,             2) \
X(a, CALLBACK, REPEATED, MESSAGE,  attribute,         3)
#define v2ray_core_app_router_DomainObject_CALLBACK pb_default_field_callback
#define v2ray_core_app_router_DomainObject_DEFAULT NULL
#define v2ray_core_app_router_DomainObject_attribute_MSGTYPE v2ray_core_app_router_DomainObject_Attribute

#define v2ray_core_app_router_DomainObject_Attribute_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   key,               1) \
X(a, STATIC,   ONEOF,    BOOL,     (typed_value,bool_value,typed_value.bool_value),   2) \
X(a, STATIC,   ONEOF,    INT64,    (typed_value,int_value,typed_value.int_value),   3)
#define v2ray_core_app_router_DomainObject_Attribute_CALLBACK pb_default_field_callback
#define v2ray_core_app_router_DomainObject_Attribute_DEFAULT NULL

#define v2ray_core_app_router_CIDR_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    ip,                1) \
X(a, STATIC,   SINGULAR, UINT32,   prefix,            2)
#define v2ray_core_app_router_CIDR_CALLBACK pb_default_field_callback
#define v2ray_core_app_router_CIDR_DEFAULT NULL

#define v2ray_core_app_router_GeoIP_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   country_code,      1) \
X(a, CALLBACK, REPEATED, MESSAGE,  cidr,              2)
#define v2ray_core_app_router_GeoIP_CALLBACK pb_default_field_callback
#define v2ray_core_app_router_GeoIP_DEFAULT NULL
#define v2ray_core_app_router_GeoIP_cidr_MSGTYPE v2ray_core_app_router_CIDR

#define v2ray_core_app_router_GeoIPList_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  entry,             1)
#define v2ray_core_app_router_GeoIPList_CALLBACK pb_default_field_callback
#define v2ray_core_app_router_GeoIPList_DEFAULT NULL
#define v2ray_core_app_router_GeoIPList_entry_MSGTYPE v2ray_core_app_router_GeoIP

#define v2ray_core_app_router_GeoSite_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   country_code,      1) \
X(a, CALLBACK, REPEATED, MESSAGE,  domain,            2)
#define v2ray_core_app_router_GeoSite_CALLBACK pb_default_field_callback
#define v2ray_core_app_router_GeoSite_DEFAULT NULL
#define v2ray_core_app_router_GeoSite_domain_MSGTYPE v2ray_core_app_router_DomainObject

#define v2ray_core_app_router_GeoSiteList_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  entry,             1)
#define v2ray_core_app_router_GeoSiteList_CALLBACK pb_default_field_callback
#define v2ray_core_app_router_GeoSiteList_DEFAULT NULL
#define v2ray_core_app_router_GeoSiteList_entry_MSGTYPE v2ray_core_app_router_GeoSite

extern const pb_msgdesc_t v2ray_core_app_router_DomainObject_msg;
extern const pb_msgdesc_t v2ray_core_app_router_DomainObject_Attribute_msg;
extern const pb_msgdesc_t v2ray_core_app_router_CIDR_msg;
extern const pb_msgdesc_t v2ray_core_app_router_GeoIP_msg;
extern const pb_msgdesc_t v2ray_core_app_router_GeoIPList_msg;
extern const pb_msgdesc_t v2ray_core_app_router_GeoSite_msg;
extern const pb_msgdesc_t v2ray_core_app_router_GeoSiteList_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define v2ray_core_app_router_DomainObject_fields &v2ray_core_app_router_DomainObject_msg
#define v2ray_core_app_router_DomainObject_Attribute_fields &v2ray_core_app_router_DomainObject_Attribute_msg
#define v2ray_core_app_router_CIDR_fields &v2ray_core_app_router_CIDR_msg
#define v2ray_core_app_router_GeoIP_fields &v2ray_core_app_router_GeoIP_msg
#define v2ray_core_app_router_GeoIPList_fields &v2ray_core_app_router_GeoIPList_msg
#define v2ray_core_app_router_GeoSite_fields &v2ray_core_app_router_GeoSite_msg
#define v2ray_core_app_router_GeoSiteList_fields &v2ray_core_app_router_GeoSiteList_msg

/* Maximum encoded size of messages (where known) */
/* v2ray_core_app_router_DomainObject_size depends on runtime parameters */
/* v2ray_core_app_router_DomainObject_Attribute_size depends on runtime parameters */
/* v2ray_core_app_router_CIDR_size depends on runtime parameters */
/* v2ray_core_app_router_GeoIP_size depends on runtime parameters */
/* v2ray_core_app_router_GeoIPList_size depends on runtime parameters */
/* v2ray_core_app_router_GeoSite_size depends on runtime parameters */
/* v2ray_core_app_router_GeoSiteList_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
