/*
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * Copyright (c) 2019 Western Digital Corporation or its affiliates.
 *
 * Authors:
 *   Anup Patel <anup.patel@wdc.com>
 */

#ifndef __SBI_INIT_H__
#define __SBI_INIT_H__

#include <sbi/sbi_types.h>

struct sbi_scratch;

void __noreturn sbi_init(struct sbi_scratch *scratch, bool flag);

unsigned long sbi_entry_count(u32 hartid);

unsigned long sbi_init_count(u32 hartid);

void __noreturn sbi_exit(struct sbi_scratch *scratch);

void to_be_stopped(struct sbi_scratch *scratch);

#endif
