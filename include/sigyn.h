/* Sigyn - A reasonably sane IRC bot.
 * Copyright (c) Alexandria Wolcott <alyx@malkier.net>
 * Released under the BSD license.
 */

#ifndef __SIGYN_H
#define __SIGYN_H

#include "config.h"

#include <errno.h>
#ifdef ENABLE_STACK
#include <libunwind.h>
#endif
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include <string.h>
#include <strings.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
#include "mowgli.h"

/* Define some limits. */
#define BUFSIZE 1024
#define MAXPARC 20

#include "minini/minini.h"
#include "platform.h"
#include "command.h"
#include "interface.h"
#include "irc.h"
#include "logger.h"
#include "me.h"
#include "module.h"
#include "queue.h"
#include "timer.h"
#include "tools.h"
#include "version.h"

#endif /* __SIGYN_H */
