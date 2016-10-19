/*
 * Copyright (c) 2014, The Linux Foundation. All rights reserved.
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
#include <stdio.h>
#include "shell_io.h"
#include "shell.h"

sw_error_t
cmd_data_check_func_ctrl(char *cmd_str, void * val, a_uint32_t size)
{
	sw_error_t rv;
	fal_func_ctrl_t entry;

	aos_mem_zero(&entry, sizeof (fal_func_ctrl_t));

	rv = __cmd_data_check_complex("bitmap0", "0",
			"usage: the format is HEX \n", cmd_data_check_uint32,
			&(entry.bitmap[0]), sizeof (a_uint32_t));
	if (rv)
		return rv;

	rv = __cmd_data_check_complex("bitmap1", "0",
			"usage: the format is HEX \n", cmd_data_check_uint32,
			&(entry.bitmap[1]), sizeof (a_uint32_t));
	if (rv)
		return rv;

	rv = __cmd_data_check_complex("bitmap2", "0",
			"usage: the format is HEX \n", cmd_data_check_uint32,
			&(entry.bitmap[2]), sizeof (a_uint32_t));
	if (rv)
		return rv;

	*(fal_func_ctrl_t *)val = entry;

	return SW_OK;
}



void
cmd_data_print_func_ctrl(a_uint8_t * param_name, a_uint32_t * buf, a_uint32_t size)
{
    dprintf("[%s]:", param_name);

    fal_func_ctrl_t *p = buf;

    dprintf("%08x %08x %08x\n", p->bitmap[0], p->bitmap[1], p->bitmap[2]);
}


sw_error_t
cmd_data_check_module(char *cmd_str, a_uint32_t * arg_val, a_uint32_t size)
{
    if (cmd_str == NULL)
        return SW_BAD_PARAM;

    if (!strcasecmp(cmd_str, "acl")){
        *arg_val = FAL_MODULE_ACL;
    } else if (!strcasecmp(cmd_str, "vsi")) {
        *arg_val = FAL_MODULE_VSI;
    } else if (!strcasecmp(cmd_str, "ip")) {
        *arg_val = FAL_MODULE_IP;
    } else if (!strcasecmp(cmd_str, "flow")) {
        *arg_val = FAL_MODULE_FLOW;
    } else if (!strcasecmp(cmd_str, "qm")) {
        *arg_val = FAL_MODULE_QM;
    } else if (!strcasecmp(cmd_str, "qos")) {
        *arg_val = FAL_MODULE_QOS;
    } else if (!strcasecmp(cmd_str, "bm")) {
        *arg_val = FAL_MODULE_BM;
    } else if (!strcasecmp(cmd_str, "servcode")) {
        *arg_val = FAL_MODULE_SERVCODE;
    } else if (!strcasecmp(cmd_str, "pppoe")) {
        *arg_val = FAL_MODULE_PPPOE;
    } else if (!strcasecmp(cmd_str, "portctrl")) {
		*arg_val = FAL_MODULE_PORTCTRL;
	} else if (!strcasecmp(cmd_str, "shaper")) {
		*arg_val = FAL_MODULE_SHAPER;
	}
    else
    {
        return SW_BAD_VALUE;
    }

    return SW_OK;
}

void
cmd_data_print_module(a_uint8_t * param_name, a_uint32_t * buf, a_uint32_t size)
{
    dprintf("[%s]:", param_name);

    if (*(a_uint32_t *) buf == FAL_MODULE_ACL){
        dprintf("acl");
    } else if (*(a_uint32_t *) buf == FAL_MODULE_VSI) {
        dprintf("vsi");
    }else if (*(a_uint32_t *) buf == FAL_MODULE_IP) {
        dprintf("ip");
    } else if (*(a_uint32_t *) buf == FAL_MODULE_FLOW) {
        dprintf("flow");
    } else if (*(a_uint32_t *) buf == FAL_MODULE_QM) {
        dprintf("qm");
    } else if (*(a_uint32_t *) buf == FAL_MODULE_QOS) {
        dprintf("qos");
    } else if (*(a_uint32_t *) buf == FAL_MODULE_BM) {
        dprintf("bm");
    } else if (*(a_uint32_t *) buf == FAL_MODULE_SERVCODE) {
        dprintf("servcode");
    } else if (*(a_uint32_t *) buf == FAL_MODULE_PPPOE) {
        dprintf("pppoe");
    } else if (*(a_uint32_t *) buf == FAL_MODULE_PORTCTRL) {
		dprintf("portctrl");
	} else if (*(a_uint32_t *) buf == FAL_MODULE_SHAPER) {
		dprintf("shaper");
	}
}

static void cmd_data_print_acl_func_ctrl(fal_func_ctrl_t *p)
{
	a_uint32_t func = 0;
	char *func_name[FUNC_ACL_UDF_PROFILE_GET+1] ={
		"FUNC_ACL_LIST_CREAT",
		"FUNC_ACL_LIST_DESTROY",
		"FUNC_ACL_RULE_ADD",
		"FUNC_ACL_RULE_DELETE",
		"FUNC_ACL_RULE_QUERY",
		"FUNC_ACL_RULE_DUMP",
		"FUNC_ACL_LIST_BIND",
		"FUNC_ACL_LIST_UNBIND",
		"FUNC_ACL_LIST_DUMP",
		"FUNC_ACL_UDF_PROFILE_SET",
		"FUNC_ACL_UDF_PROFILE_GET"
	};

	for(func = FUNC_ACL_LIST_CREAT; func <= FUNC_ACL_UDF_PROFILE_GET; func++)
	{
		if(p->bitmap[0] & (1<<func))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}
	return;
}

static void cmd_data_print_vsi_func_ctrl(fal_func_ctrl_t *p)
{
	a_uint32_t func = 0;
	char *func_name[FUNC_VSI_MEMBER_GET+1] ={
		"FUNC_PORT_VLAN_VSI_SET",
		"FUNC_PORT_VLAN_VSI_GET",
		"FUNC_PORT_VSI_SET",
		"FUNC_PORT_VSI_GET",
		"FUNC_VSI_STAMOVE_SET",
		"FUNC_VSI_STAMOVE_GET",
		"FUNC_VSI_NEWADDR_LRN_SET",
		"FUNC_VSI_NEWADDR_LRN_GET",
		"FUNC_VSI_MEMBER_SET",
		"FUNC_VSI_MEMBER_GET",
	};

	for(func = FUNC_PORT_VLAN_VSI_SET; func <= FUNC_VSI_MEMBER_GET; func++)
	{
		if(p->bitmap[0] & (1<<func))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}
	return;
}

static void cmd_data_print_ip_func_ctrl(fal_func_ctrl_t *p)
{
	a_uint32_t func = 0;
	char *func_name[FUNC_IP_GLOBAL_CTRL_SET+1] ={
		"FUNC_IP_NETWORK_ROUTE_GET",
		"FUNC_IP_HOST_ADD",
		"FUNC_IP_VSI_SG_CFG_GET",
		"FUNC_IP_PUB_ADDR_DEL",
		"FUNC_IP_PORT_SG_CFG_SET",
		"FUNC_IP_PORT_INTF_GET",
		"FUNC_IP_VSI_ARP_SG_CFG_SET",
		"FUNC_IP_PUB_ADDR_GET",
		"FUNC_IP_PORT_INTF_SET",
		"FUNC_IP_VSI_SG_CFG_SET",
		"FUNC_IP_HOST_NEXT",
		"FUNC_IP_PORT_MACADDR_SET",
		"FUNC_IP_VSI_INTF_GET",
		"FUNC_IP_NETWORK_ROUTE_SET",
		"FUNC_IP_PORT_SG_CFG_GET",
		"FUNC_IP_INTF_GET",
		"FUNC_IP_PUB_ADDR_ADD",
		"FUNC_IP_HOST_DEL",
		"FUNC_IP_ROUTE_MISMATCH_GET",
		"FUNC_IP_VSI_ARP_SG_CFG_GET",
		"FUNC_IP_PORT_ARP_SG_CFG_SET",
		"FUNC_IP_VSI_MC_MODE_SET",
		"FUNC_IP_VSI_INTF_SET",
		"FUNC_IP_NEXTHOP_GET",
		"FUNC_IP_ROUTE_MISMATCH_SET",
		"FUNC_IP_HOST_GET",
		"FUNC_IP_INTF_SET",
		"FUNC_IP_VSI_MC_MODE_GET",
		"FUNC_IP_PORT_MACADDR_GET",
		"FUNC_IP_PORT_ARP_SG_CFG_GET",
		"FUNC_IP_NEXTHOP_SET",
		"FUNC_IP_GLOBAL_CTRL_GET",
		"FUNC_IP_GLOBAL_CTRL_SET"
	};

	for(func = FUNC_IP_NETWORK_ROUTE_GET; func <= FUNC_IP_GLOBAL_CTRL_GET; func++)
	{
		if (p->bitmap[0] & (1<<func))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}
	func = FUNC_IP_GLOBAL_CTRL_SET;
	if (p->bitmap[1] & (1 << (func % 32)))
		dprintf("%d  %s  registered\n", func, func_name[func]);
	else
		dprintf("%d  %s  unregistered\n", func, func_name[func]);
	return;
}

static void cmd_data_print_flow_func_ctrl(fal_func_ctrl_t *p)
{
	a_uint32_t func = 0;
	char *func_name[FUNC_FLOW_GLOBAL_CFG_SET+1] ={
		"FUNC_FLOW_HOST_ADD",
		"FUNC_FLOW_ENTRY_GET",
		"FUNC_FLOW_ENTRY_DEL",
		"FUNC_FLOW_STATUS_GET",
		"FUNC_FLOW_CTRL_SET",
		"FUNC_FLOW_AGE_TIMER_GET",
		"FUNC_FLOW_STATUS_SET",
		"FUNC_FLOW_HOST_GET",
		"FUNC_FLOW_HOST_DEL",
		"FUNC_FLOW_CTRL_GET",
		"FUNC_FLOW_AGE_TIMER_SET",
		"FUNC_FLOW_ENTRY_ADD",
		"FUNC_FLOW_GLOBAL_CFG_GET",
		"FUNC_FLOW_GLOBAL_CFG_SET"
	};

	for(func = FUNC_FLOW_HOST_ADD; func <= FUNC_FLOW_GLOBAL_CFG_SET; func++)
	{
		if(p->bitmap[0] & (1 << func))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}
	return;
}

static void cmd_data_print_qm_func_ctrl(fal_func_ctrl_t *p)
{
	a_uint32_t func = 0;
	char *func_name[FUNC_QUEUE_COUNTER_CTRL_SET+1] ={
		"FUNC_UCAST_HASH_MAP_SET",
		"FUNC_AC_DYNAMIC_THRESHOLD_GET",
		"FUNC_UCAST_QUEUE_BASE_PROFILE_GET",
		"FUNC_PORT_MCAST_PRIORITY_CLASS_GET",
		"FUNC_AC_DYNAMIC_THRESHOLD_SET",
		"FUNC_AC_PREALLOC_BUFFER_SET",
		"FUNC_UCAST_DEFAULT_HASH_GET",
		"FUNC_UCAST_DEFAULT_HASH_SET",
		"FUNC_AC_QUEUE_GROUP_GET",
		"FUNC_AC_CTRL_GET",
		"FUNC_AC_PREALLOC_BUFFER_GET",
		"FUNC_PORT_MCAST_PRIORITY_CLASS_SET",
		"FUNC_UCAST_HASH_MAP_GET",
		"FUNC_AC_STATIC_THRESHOLD_SET",
		"FUNC_AC_QUEUE_GROUP_SET",
		"FUNC_AC_GROUP_BUFFER_GET",
		"FUNC_MCAST_CPU_CODE_CLASS_GET",
		"FUNC_AC_CTRL_SET",
		"FUNC_UCAST_PRIORITY_CLASS_GET",
		"FUNC_QUEUE_FLUSH",
		"FUNC_MCAST_CPU_CODE_CLASS_SET",
		"FUNC_UCAST_PRIORITY_CLASS_SET",
		"FUNC_AC_STATIC_THRESHOLD_GET",
		"FUNC_UCAST_QUEUE_BASE_PROFILE_SET",
		"FUNC_AC_GROUP_BUFFER_SET",
		"FUNC_QUEUE_COUNTER_CLEANUP",
		"FUNC_QUEUE_COUNTER_GET",
		"FUNC_QUEUE_COUNTER_CTRL_GET",
		"FUNC_QUEUE_COUNTER_CTRL_SET"
	};

	for(func = FUNC_UCAST_HASH_MAP_SET; func <= FUNC_QUEUE_COUNTER_CTRL_SET; func++)
	{
		if(p->bitmap[0] & (1 << func))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}
	return;
}

static void cmd_data_print_qos_func_ctrl(fal_func_ctrl_t *p)
{
	a_uint32_t func = 0;
	char *func_name[FUNC_PORT_SCHEDULER_CFG_GET+1] ={
		"FUNC_QOS_PORT_PRI_SET",
		"FUNC_QOS_PORT_PRI_GET",
		"FUNC_QOS_COSMAP_PCP_GET",
		"FUNC_QUEUE_SCHEDULER_SET",
		"FUNC_QUEUE_SCHEDULER_GET",
		"FUNC_PORT_QUEUES_GET",
		"FUNC_QOS_COSMAP_PCP_SET",
		"FUNC_QOS_PORT_REMARK_GET",
		"FUNC_QOS_COSMAP_DSCP_GET",
		"FUNC_QOS_COSMAP_FLOW_SET",
		"FUNC_QOS_PORT_GROUP_SET",
		"FUNC_RING_QUEUE_MAP_SET",
		"FUNC_QOS_COSMAP_DSCP_SET",
		"FUNC_QOS_PORT_REMARK_SET",
		"FUNC_QOS_COSMAP_FLOW_GET",
		"FUNC_QOS_PORT_GROUP_GET",
		"FUNC_RING_QUEUE_MAP_GET",
		"FUNC_TDM_TICK_NUM_SET",
		"FUNC_TDM_TICK_NUM_GET",
		"FUNC_PORT_SCHEDULER_CFG_SET",
		"FUNC_PORT_SCHEDULER_CFG_GET"
	};

	for(func = FUNC_QOS_PORT_PRI_SET; func <= FUNC_PORT_SCHEDULER_CFG_GET; func++)
	{
		if(p->bitmap[0] & (1 << func))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}
	return;
}

static void cmd_data_print_bm_func_ctrl(fal_func_ctrl_t *p)
{
	a_uint32_t func = 0;
	char *func_name[FUNC_PORT_TDM_TICK_CFG_SET+1] ={
		"FUNC_PORT_BUFGROUP_MAP_GET",
		"FUNC_BM_PORT_RESERVED_BUFFER_GET",
		"FUNC_BM_BUFGROUP_BUFFER_GET",
		"FUNC_BM_PORT_DYNAMIC_THRESH_GET",
		"FUNC_PORT_BM_CTRL_GET",
		"FUNC_BM_BUFGROUP_BUFFER_SET",
		"FUNC_PORT_BUFGROUP_MAP_SET",
		"FUNC_BM_PORT_STATIC_THRESH_GET",
		"FUNC_BM_PORT_RESERVED_BUFFER_SET",
		"FUNC_BM_PORT_STATIC_THRESH_SET",
		"FUNC_BM_PORT_DYNAMIC_THRESH_SET",
		"FUNC_PORT_BM_CTRL_SET",
		"FUNC_PORT_TDM_CTRL_SET",
		"FUNC_PORT_TDM_TICK_CFG_SET"
	};

	for(func = FUNC_PORT_BUFGROUP_MAP_GET; func <= FUNC_PORT_TDM_TICK_CFG_SET; func++)
	{
		if(p->bitmap[0] & (1 << func))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}
	return;
}

static void cmd_data_print_servcode_func_ctrl(fal_func_ctrl_t *p)
{
	a_uint32_t func = 0;
	char *func_name[FUNC_EGRESS_SERVICE_PROFILE_GET+1] ={
		"FUNC_PARSE_SERVICE_PROFILE_SET",
		"FUNC_PARSE_SERVICE_PROFILE_GET",
		"FUNC_INGRESS_SERVICE_PROFILE_SET",
		"FUNC_INGRESS_SERVICE_PROFILE_GET",
		"FUNC_EGRESS_SERVICE_PROFILE_SET",
		"FUNC_EGRESS_SERVICE_PROFILE_GET",
	};

	for(func = FUNC_PARSE_SERVICE_PROFILE_SET; func <= FUNC_EGRESS_SERVICE_PROFILE_GET; func++)
	{
		if(p->bitmap[0] & (1<<func))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}
	return;
}

static void cmd_data_print_pppoe_func_ctrl(fal_func_ctrl_t *p)
{
	a_uint32_t func = 0;
	char *func_name[FUNC_PPPOE_EN_GET+1] ={
		"FUNC_PPPOE_SESSION_TABLE_ADD",
		"FUNC_PPPOE_SESSION_TABLE_DEL",
		"FUNC_PPPOE_SESSION_TABLE_GET",
		"FUNC_PPPOE_EN_SET",
		"FUNC_PPPOE_EN_GET"
	};

	for(func = FUNC_PPPOE_SESSION_TABLE_ADD; func <= FUNC_PPPOE_EN_GET; func++)
	{
		if(p->bitmap[0] & (1 << func))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}
	return;
}

static void cmd_data_print_port_ctrl_func_ctrl(fal_func_ctrl_t *p)
{
	a_uint32_t func = 0;
	char *func_name[FUNC_ADPT_PORT_SOURCE_FILTER_SET+1] ={
		"FUNC_ADPT_PORT_LOCAL_LOOPBACK_GET",
		"FUNC_ADPT_PORT_AUTONEG_RESTART",
		"FUNC_ADPT_PORT_DUPLEX_SET",
		"FUNC_ADPT_PORT_RXMAC_STATUS_GET",
		"FUNC_ADPT_PORT_CDT",
		"FUNC_ADPT_PORT_TXMAC_STATUS_SET",
		"FUNC_ADPT_PORT_COMBO_FIBER_MODE_SET",
		"FUNC_ADPT_PORT_COMBO_MEDIUM_STATUS_GET",
		"FUNC_ADPT_PORT_MAGIC_FRAME_MAC_SET",
		"FUNC_ADPT_PORT_POWERSAVE_SET",
		"FUNC_ADPT_PORT_HIBERNATE_SET",
		"FUNC_ADPT_PORT_8023AZ_GET",
		"FUNC_ADPT_PORT_RXFC_STATUS_GET",
		"FUNC_ADPT_PORT_TXFC_STATUS_GET",
		"FUNC_ADPT_PORT_REMOTE_LOOPBACK_SET",
		"FUNC_ADPT_PORT_FLOWCTRL_SET",
		"FUNC_ADPT_PORT_MRU_SET",
		"FUNC_ADPT_PORT_AUTONEG_STATUS_GET",
		"FUNC_ADPT_PORT_TXMAC_STATUS_GET",
		"FUNC_ADPT_PORT_MDIX_GET",
		"FUNC_ADPT_PORTS_LINK_STATUS_GET",
		"FUNC_ADPT_PORT_MAC_LOOPBACK_SET",
		"FUNC_ADPT_PORT_PHY_ID_GET",
		"FUNC_ADPT_PORT_MRU_GET",
		"FUNC_ADPT_PORT_POWER_ON",
		"FUNC_ADPT_PORT_SPEED_SET",
		"FUNC_ADPT_PORT_INTERFACE_MODE_GET",
		"FUNC_ADPT_PORT_DUPLEX_GET",
		"FUNC_ADPT_PORT_AUTONEG_ADV_GET",
		"FUNC_ADPT_PORT_MDIX_STATUS_GET",
		"FUNC_ADPT_PORT_MTU_SET",
		"FUNC_ADPT_PORT_LINK_STATUS_GET",
		"FUNC_ADPT_PORT_8023AZ_SET",
		"FUNC_ADPT_PORT_POWERSAVE_GET",
		"FUNC_ADPT_PORT_COMBO_PREFER_MEDIUM_GET",
		"FUNC_ADPT_PORT_COMBO_PREFER_MEDIUM_SET",
		"FUNC_ADPT_PORT_POWER_OFF",
		"FUNC_ADPT_PORT_TXFC_STATUS_SET",
		"FUNC_ADPT_PORT_COUNTER_SET",
		"FUNC_ADPT_PORT_COMBO_FIBER_MODE_GET",
		"FUNC_ADPT_PORT_LOCAL_LOOPBACK_SET",
		"FUNC_ADPT_PORT_WOL_STATUS_SET",
		"FUNC_ADPT_PORT_MAGIC_FRAME_MAC_GET",
		"FUNC_ADPT_PORT_FLOWCTRL_GET",
		"FUNC_ADPT_PORT_RXMAC_STATUS_SET",
		"FUNC_ADPT_PORT_COUNTER_GET",
		"FUNC_ADPT_PORT_INTERFACE_MODE_SET",
		"FUNC_ADPT_PORT_MAC_LOOPBACK_GET",
		"FUNC_ADPT_PORT_HIBERNATE_GET",
		"FUNC_ADPT_PORT_AUTONEG_ADV_SET",
		"FUNC_ADPT_PORT_REMOTE_LOOPBACK_GET",
		"FUNC_ADPT_PORT_COUNTER_SHOW",
		"FUNC_ADPT_PORT_AUTONEG_ENABLE",
		"FUNC_ADPT_PORT_MTU_GET",
		"FUNC_ADPT_PORT_INTERFACE_MODE_STATUS_GET",
		"FUNC_ADPT_PORT_RESET",
		"FUNC_ADPT_PORT_RXFC_STATUS_SET",
		"FUNC_ADPT_PORT_SPEED_GET",
		"FUNC_ADPT_PORT_MDIX_SET",
		"FUNC_ADPT_PORT_WOL_STATUS_GET",
		"FUNC_ADPT_PORT_MAX_FRAME_SIZE_SET",
		"FUNC_ADPT_PORT_MAX_FRAME_SIZE_GET",
		"FUNC_ADPT_PORT_SOURCE_FILTER_GET",
		"FUNC_ADPT_PORT_SOURCE_FILTER_SET",
	};

	for(func = FUNC_ADPT_PORT_LOCAL_LOOPBACK_GET; func <= FUNC_ADPT_PORT_LINK_STATUS_GET; func++)
	{
		if(p->bitmap[0] & (1<<func))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}

	for(func = FUNC_ADPT_PORT_8023AZ_SET; func <= FUNC_ADPT_PORT_SOURCE_FILTER_SET; func++)
	{
		if(p->bitmap[1] & (1<< (func % 32)))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}

	return;
}

static void cmd_data_print_shaper_func_ctrl(fal_func_ctrl_t *p)
{
	a_uint32_t func = 0;
	char *func_name[FUNC_ADPT_SHAPER_IPG_PREAMBLE_LENGTH_GET+1] ={
		"FUNC_ADPT_FLOW_SHAPER_SET",
		"FUNC_ADPT_QUEUE_SHAPER_GET",
		"FUNC_ADPT_QUEUE_SHAPER_TOKEN_NUMBER_SET",
		"FUNC_ADPT_PORT_SHAPER_GET",
		"FUNC_ADPT_FLOW_SHAPER_TIME_SLOT_GET",
		"FUNC_ADPT_PORT_SHAPER_TIME_SLOT_GET",
		"FUNC_ADPT_FLOW_SHAPER_TIME_SLOT_SET",
		"FUNC_ADPT_PORT_SHAPER_TOKEN_NUMBER_SET",
		"FUNC_ADPT_QUEUE_SHAPER_TOKEN_NUMBER_GET",
		"FUNC_ADPT_QUEUE_SHAPER_TIME_SLOT_GET",
		"FUNC_ADPT_PORT_SHAPER_TOKEN_NUMBER_GET",
		"FUNC_ADPT_FLOW_SHAPER_TOKEN_NUMBER_SET",
		"FUNC_ADPT_FLOW_SHAPER_TOKEN_NUMBER_GET",
		"FUNC_ADPT_PORT_SHAPER_SET",
		"FUNC_ADPT_PORT_SHAPER_TIME_SLOT_SET",
		"FUNC_ADPT_FLOW_SHAPER_GET",
		"FUNC_ADPT_QUEUE_SHAPER_SET",
		"FUNC_ADPT_QUEUE_SHAPER_TIME_SLOT_SET",
		"FUNC_ADPT_SHAPER_IPG_PREAMBLE_LENGTH_SET",
		"FUNC_ADPT_SHAPER_IPG_PREAMBLE_LENGTH_GET",

	};

	for(func = FUNC_ADPT_FLOW_SHAPER_SET; func <= FUNC_ADPT_SHAPER_IPG_PREAMBLE_LENGTH_GET; func++)
	{
		if(p->bitmap[0] & (1<<func))
		{
			dprintf("%d  %s  registered\n", func, func_name[func]);
		}
		else
		{
			dprintf("%d  %s  unregistered\n", func, func_name[func]);
		}
	}
	return;
}

void cmd_data_print_module_func_ctrl(a_uint32_t module, fal_func_ctrl_t *p)
{
	if(module == FAL_MODULE_ACL){
		cmd_data_print_acl_func_ctrl(p);
	} else if (module == FAL_MODULE_IP) {
		cmd_data_print_ip_func_ctrl(p);
	} else if (module == FAL_MODULE_VSI) {
		cmd_data_print_vsi_func_ctrl(p);
	}else if (module == FAL_MODULE_FLOW) {
		cmd_data_print_flow_func_ctrl(p);
	} else if (module == FAL_MODULE_QM) {
		cmd_data_print_qm_func_ctrl(p);
	} else if (module == FAL_MODULE_QOS) {
		cmd_data_print_qos_func_ctrl(p);
	} else if (module == FAL_MODULE_BM) {
		cmd_data_print_bm_func_ctrl(p);
	} else if (module == FAL_MODULE_SERVCODE) {
		cmd_data_print_servcode_func_ctrl(p);
	} else if (module == FAL_MODULE_PPPOE) {
		cmd_data_print_pppoe_func_ctrl(p);
	} else if (module == FAL_MODULE_PORTCTRL) {
		cmd_data_print_port_ctrl_func_ctrl(p);
	} else if (module == FAL_MODULE_SHAPER) {
		cmd_data_print_shaper_func_ctrl(p);
	}

	return;
}

