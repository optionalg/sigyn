/* Sigyn - A reasonably sane IRC bot.
 * Copyright (c) 2011-2012 Alyx Wolcott <alyx@malkier.net>
 * Released under the BSD license.
 */
#ifndef SIGYN_QUEUE_H
#define SIGYN_QUEUE_H

#include <sys/types.h>
#include "mowgli.h"
#include "config.h"
#include "platform.h"

typedef struct io_queue_ io_queue_t;

struct io_queue_ {
    char *string;
    mowgli_linebuf_t * line;
    size_t len;
    bool completed;
};

extern mowgli_list_t sendq;

extern void queue_init(void);
extern io_queue_t *recvq_add(mowgli_linebuf_t * line, char *string, bool complete);
extern void recvq_dump(mowgli_linebuf_t * line);
//extern void sendq_add(socket_t sock, char *string, size_t len);
//extern void sendq_dump(socket_t sock);
//extern void sendq_flush(socket_t sock);

#endif /* SIGYN_QUEUE_H */
