/*
 * Copyright (c) 2014, 2015, The Linux Foundation. All rights reserved.
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */



#ifndef _SW_API_H
#define _SW_API_H

#ifdef __cplusplus
extern "C" {
#endif                          /* __cplusplus */

#include "sw.h"
#include "sw_ioctl.h"

#define SW_MAX_API_BUF         2048
#define SW_MAX_API_PARAM       12 /* cmd type + return value + ten parameters */
#define SW_MAX_PAYLOAD         (SW_MAX_API_PARAM << 2)  /* maximum payload size for netlink msg*/
#define SW_PARAM_IN            0x1
#define SW_PARAM_OUT           0x2
#define SW_PARAM_PTR           0x4

#define SW_API_DEF(ioctl, name) {ioctl, name}
#if (!defined(KERNEL_MODULE))
#define SW_PARAM_DEF(ioctl, data, size, type, name) \
    {ioctl, size, data, type, name}
#else
#define SW_PARAM_DEF(ioctl, data, size, type, name) {ioctl, size, data, type}
#endif

    typedef enum
    {
        SW_UINT8 = 1,
        SW_INT8,
        SW_UINT16,
        SW_INT16,
        SW_UINT32,
        SW_INT32,
        SW_UINT64,
        SW_INT64,
        SW_ENABLE,
        SW_SPEED,
        SW_DUPLEX,
        SW_1QMODE,
        SW_EGMODE,
        SW_CAP,
        SW_VLAN,
        SW_PBMP,
        SW_MIB,
        SW_MACADDR,
        SW_FDBENTRY,
        SW_SCH,
        SW_QOS,
        SW_STORM,
        SW_STP,
        SW_LEAKY,
        SW_MACCMD,
        SW_FLOWTYPE,
        SW_FLOWCMD,
        SW_UINT_A,
        SW_ACLRULE,
        SW_LEDPATTERN,
        SW_INVLAN,
        SW_VLANPROPAGATION,
        SW_VLANTRANSLATION,
        SW_QINQMODE,
        SW_QINQROLE,
        SW_CABLESTATUS,
        SW_CABLELEN,
        SW_SSDK_CFG,
        SW_HDRMODE,
        SW_FDBOPRATION,
        SW_PPPOE,
        SW_PPPOE_LESS,
        SW_ACL_UDF_TYPE,
        SW_IP_HOSTENTRY,
        SW_ARP_LEARNMODE,
        SW_IP_GUARDMODE,
        SW_NATENTRY,
        SW_NAPTENTRY,
        SW_FLOWENTRY,
        SW_NAPTMODE,
        SW_IP4ADDR,
        SW_IP6ADDR,
        SW_INTFMACENTRY,
        SW_PUBADDRENTRY,
        SW_INGPOLICER,
        SW_EGSHAPER,
        SW_ACLPOLICER,
        SW_MACCONFIG,
        SW_PHYCONFIG,
        SW_DATA_MAX,
        SW_FDBSMODE,
        SW_FDB_CTRL_MODE,
        SW_FX100CONFIG,
        SW_SGENTRY,
        SW_SEC_MAC,
        SW_SEC_IP,
        SW_SEC_IP4,
        SW_SEC_IP6,
        SW_SEC_TCP,
        SW_SEC_UDP,
        SW_SEC_ICMP4,
        SW_SEC_ICMP6,
        SW_REMARKENTRY,
        SW_SGINFOENTRY,
        SW_DEFAULT_ROUTE_ENTRY,
        SW_HOST_ROUTE_ENTRY,
        SW_IP_WCMP_ENTRY,
        SW_IP_RFS_IP4,
	SW_IP_RFS_IP6,
	SW_FLOWCOOKIE,
	SW_FDB_RFS,
	SW_FLOWRFS,
	SW_CROSSOVER_MODE,
	SW_CROSSOVER_STATUS,
	SW_PREFER_MEDIUM,
	SW_FIBER_MODE,
	SW_INTERFACE_MODE,
	SW_COUNTER_INFO,
	SW_REG_DUMP,
	SW_DBG_REG_DUMP,
	SW_VSI_NEWADDR_LRN,
	SW_VSI_STAMOVE,
	SW_VSI_MEMBER,
        SW_MTU_INFO,
        SW_MRU_INFO,
        SW_MTU_ENTRY,
        SW_MRU_ENTRY,
        SW_ARP_SG_CFG,
        SW_IP_NETWORK_ROUTE,
        SW_IP_INTF,
        SW_IP_VSI_INTF,
        SW_IP_NEXTHOP,
        SW_UCAST_QUEUE_MAP,
        SW_UCAST_PRI_CLASS,
        SW_MCAST_PRI_CLASS,
        SW_IP_SG,
        SW_IP_PUB,
        SW_IP_PORTMAC,
        SW_IP_MCMODE,
        SW_FLOW_AGE,
        SW_FLOW_CTRL,
        SW_QUEUE_FLUSH,
        SW_UQUEUE_AC,
        SW_MQUEUE_AC,
        SW_GROUP_AC,
        SW_UCAST_HASH,
        SW_MCAST_QUEUE_MAP,
        SW_FLOW_ENTRY,
        SW_FLOW_HOST,
        SW_IP_GLOBAL,
        SW_FLOW_GLOBAL,
		SW_GLOBAL_QINQMODE,
		SW_PT_QINQMODE,
		SW_TPID,
		SW_INGRESS_FILTER,
		SW_PT_INGRESS_TAG,
		SW_TAG_PROPOGATION,
		SW_EGRESS_DEFAULT_VID,
		SW_EGRESS_MODE,
		SW_CTRLPKT_PROFILE,
		SW_PARSE_SERVICE,
		SW_INGRESS_SERVICE,
		SW_EGRESS_SERVICE,

    } sw_data_type_e;

    typedef struct
    {
        a_uint32_t api_id;
        void *func;
    } sw_api_func_t;

    typedef struct
    {
        a_uint32_t api_id;
        a_uint16_t data_size;
        a_uint8_t  data_type;
        a_uint8_t  param_type;
#if (!defined(KERNEL_MODULE))
        a_uint8_t param_name[20];
#endif
    } sw_api_param_t;

    typedef struct
    {
        a_uint32_t api_id;
        sw_api_func_t *api_fp;
        sw_api_param_t *api_pp;
        a_uint32_t api_nr;
    } sw_api_t;

#ifdef __cplusplus
}
#endif                          /* __cplusplus */

#endif                          /* _SW_API_H */
