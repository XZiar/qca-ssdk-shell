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
#include "fal_servcode.h"
#include "fal_uk_if.h"

sw_error_t
fal_parse_service_profile_set(a_uint32_t dev_id,a_uint32_t profile_id,
							fal_parse_service_entry_t *entry)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_PARSE_SERVICE_PROFILE_SET, dev_id, profile_id,
                    (a_uint32_t) entry);
    return rv;
}

sw_error_t
fal_parse_service_profile_get(a_uint32_t dev_id, a_uint32_t profile_id,
							fal_parse_service_entry_t *entry)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_PARSE_SERVICE_PROFILE_GET, dev_id, profile_id,
                    (a_uint32_t) entry);
    return rv;
}

sw_error_t fal_ingress_service_profile_set(a_uint32_t dev_id, a_uint32_t profile_id,
							fal_ingress_service_entry_t *entry)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_INGRESS_SERVICE_PROFILE_SET, dev_id, profile_id,
                    (a_uint32_t) entry);
    return rv;
}

sw_error_t fal_ingress_service_profile_get(a_uint32_t dev_id, a_uint32_t profile_id,
							fal_ingress_service_entry_t *entry)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_INGRESS_SERVICE_PROFILE_GET, dev_id, profile_id,
                    (a_uint32_t) entry);
    return rv;
}

sw_error_t fal_egress_service_profile_set(a_uint32_t dev_id, a_uint32_t profile_id,
							fal_egress_service_entry_t *entry)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_EGRESS_SERVICE_PROFILE_SET, dev_id, profile_id,
                    (a_uint32_t) entry);
    return rv;
}

sw_error_t fal_egress_service_profile_get(a_uint32_t dev_id, a_uint32_t profile_id,
							fal_egress_service_entry_t *entry)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_EGRESS_SERVICE_PROFILE_GET, dev_id, profile_id,
                    (a_uint32_t) entry);
    return rv;
}

