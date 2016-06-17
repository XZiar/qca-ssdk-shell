/*
 * Copyright (c) 2016, The Linux Foundation. All rights reserved.
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



#include "sw.h"
#include "sw_ioctl.h"
#include "fal_qm.h"
#include "fal_uk_if.h"


sw_error_t
fal_port_mcast_priority_class_set(
		a_uint32_t dev_id,
		fal_port_t port,
		fal_mcast_priority_map_t *pri_map)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_MCAST_PRIORITY_CLASS_SET, dev_id, port, (a_uint32_t) pri_map);
    return rv;
}

sw_error_t
fal_port_mcast_priority_class_get(
		a_uint32_t dev_id,
		fal_port_t port,
		fal_mcast_priority_map_t *pri_map)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_MCAST_PRIORITY_CLASS_GET, dev_id, port, (a_uint32_t) pri_map);
    return rv;
}

sw_error_t
fal_ucast_queue_map_set(
		a_uint32_t dev_id,
		fal_ucast_queue_map_t *queue_map)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_UCAST_QUEUE_MAP_SET, dev_id, (a_uint32_t) queue_map);
    return rv;
}

sw_error_t
fal_ucast_queue_map_get(
		a_uint32_t dev_id,
		fal_ucast_queue_map_t *queue_map)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_UCAST_QUEUE_MAP_GET, dev_id, (a_uint32_t) queue_map);
    return rv;
}

sw_error_t
fal_ucast_priority_map_set(
		a_uint32_t dev_id,
		fal_ucast_priority_map_t *priority_map)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_UCAST_PRIORITY_MAP_SET, dev_id, (a_uint32_t) priority_map);
    return rv;
}

sw_error_t
fal_ucast_priority_map_get(
		a_uint32_t dev_id,
		fal_ucast_priority_map_t *priority_map)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_UCAST_PRIORITY_MAP_GET, dev_id, (a_uint32_t) priority_map);
    return rv;
}

sw_error_t
fal_queue_flush(
		a_uint32_t dev_id,
		fal_port_t port,
		fal_queue_flush_dst_t *flush_dst)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_QUEUE_FLUSH, dev_id, port, flush_dst);
    return rv;
}

sw_error_t
fal_unicast_queue_ac_cfg_set(
		a_uint32_t dev_id,
		a_uint32_t queue_id,
		fal_uni_queue_ac_cfg_t *cfg)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_UNI_QUEUE_AC_SET, dev_id, queue_id, cfg);
    return rv;
}

sw_error_t
fal_unicast_queue_ac_cfg_get(
		a_uint32_t dev_id,
		a_uint32_t queue_id,
		fal_uni_queue_ac_cfg_t *cfg)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_UNI_QUEUE_AC_GET, dev_id, queue_id, cfg);
    return rv;
}

sw_error_t
fal_multicast_queue_ac_cfg_set(
		a_uint32_t dev_id,
		a_uint32_t queue_id,
		fal_multi_queue_ac_cfg_t *cfg)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_MULTI_QUEUE_AC_SET, dev_id, queue_id, cfg);
    return rv;
}

sw_error_t
fal_multicast_queue_ac_cfg_get(
		a_uint32_t dev_id,
		a_uint32_t queue_id,
		fal_multi_queue_ac_cfg_t *cfg)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_MULTI_QUEUE_AC_GET, dev_id, queue_id, cfg);
    return rv;
}

sw_error_t
fal_group_ac_cfg_set(
		a_uint32_t dev_id,
		a_uint8_t group_id,
		fal_group_ac_cfg_t *cfg)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_GROUP_AC_SET, dev_id, group_id, cfg);
    return rv;
}

sw_error_t
fal_group_ac_cfg_get(
		a_uint32_t dev_id,
		a_uint8_t group_id,
		fal_group_ac_cfg_t *cfg)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_GROUP_AC_GET, dev_id, group_id, cfg);
    return rv;
}

sw_error_t
fal_ucast_hash_map_set(
		a_uint32_t dev_id,
		fal_ucast_hash_map_t *hash_map)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_UCAST_HASH_MAP_SET, dev_id, hash_map);
    return rv;
}

sw_error_t
fal_ucast_hash_map_get(
		a_uint32_t dev_id,
		fal_ucast_hash_map_t *hash_map)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_UCAST_HASH_MAP_GET, dev_id, hash_map);
    return rv;
}

sw_error_t
fal_ucast_default_hash_set(
		a_uint32_t dev_id,
		a_uint8_t hash_value)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_UCAST_DFLT_HASH_MAP_SET, (a_uint32_t)hash_value);
    return rv;
}

sw_error_t
fal_ucast_default_hash_get(
		a_uint32_t dev_id,
		a_uint8_t *hash_value)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_UCAST_DFLT_HASH_MAP_GET, hash_value);
    return rv;
}

sw_error_t
fal_mcast_queue_map_set(
		a_uint32_t dev_id,
		fal_mcast_queue_map_t *queue_map)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_MCAST_QUEUE_MAP_SET, queue_map);
    return rv;
}

sw_error_t
fal_mcast_queue_map_get(
		a_uint32_t dev_id,
		fal_mcast_queue_map_t *queue_map)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_MCAST_QUEUE_MAP_GET, queue_map);
    return rv;
}

