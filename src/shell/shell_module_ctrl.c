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

    if (!strcasecmp(cmd_str, "acl"))
    {
        *arg_val = FAL_MODULE_ACL;
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

    if (*(a_uint32_t *) buf == FAL_MODULE_ACL)
    {
        dprintf("acl");
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

void cmd_data_print_module_func_ctrl(a_uint32_t module, fal_func_ctrl_t *p)
{
	if(module == FAL_MODULE_ACL)
	{
		cmd_data_print_acl_func_ctrl(p);
	}

	return;
}

