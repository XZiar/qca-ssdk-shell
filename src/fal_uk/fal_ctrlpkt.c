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
#include "fal_ctrlpkt.h"
#include "fal_uk_if.h"

sw_error_t
fal_ethernet_type_profile_set(a_uint32_t dev_id, a_uint32_t profile_id,
							a_uint32_t ethernet_type, a_bool_t enable)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_ETHERNET_TYPE_PROFILE_SET, dev_id, profile_id,
                    (a_uint32_t) ethernet_type, (a_uint32_t) enable);
    return rv;
}

sw_error_t
fal_ethernet_type_profile_get(a_uint32_t dev_id, a_uint32_t profile_id,
							a_uint32_t *ethernet_type, a_bool_t *enable)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_ETHERNET_TYPE_PROFILE_GET, dev_id, profile_id,
                    (a_uint32_t) ethernet_type, (a_uint32_t) enable);
    return rv;
}

sw_error_t fal_rfdb_profile_set(a_uint32_t dev_id, a_uint32_t profile_id,
							fal_mac_addr_t *addr, a_bool_t enable)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_RFDB_PROFILE_SET, dev_id, profile_id,
                    (a_uint32_t) addr, (a_uint32_t) enable);
    return rv;
}

sw_error_t fal_rfdb_profile_get(a_uint32_t dev_id, a_uint32_t profile_id,
							fal_mac_addr_t *addr, a_bool_t *enable)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_RFDB_PROFILE_GET, dev_id, profile_id,
                    (a_uint32_t) addr, (a_uint32_t) enable);
    return rv;
}

sw_error_t fal_ctrlpkt_profile_set(a_uint32_t dev_id, a_uint32_t profile_id,
							fal_ctrlpkt_profile_t *ctrlpkt)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_APP_PROFILE_SET, dev_id, profile_id,
							(a_uint32_t) ctrlpkt);
    return rv;
}

sw_error_t fal_ctrlpkt_profile_get(a_uint32_t dev_id, a_uint32_t profile_id,
							fal_ctrlpkt_profile_t *ctrlpkt)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_APP_PROFILE_GET, dev_id, profile_id,
							(a_uint32_t) ctrlpkt);
    return rv;
}

