/* vi: set sw=4 ts=4: */
/*
 * bdflush() for uClibc
 *
 * Copyright (C) 2000-2004 by Erik Andersen <andersen@codepoet.org>
 *
 * GNU Library General Public License (LGPL) version 2 or later.
 */

#include "syscalls.h"
#include <sys/kdaemon.h>
_syscall2(int, bdflush, int, __func, long int, __data);
