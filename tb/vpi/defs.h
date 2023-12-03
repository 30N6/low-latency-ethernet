#ifndef DEFS_H
#define DEFS_H

#include <stdint.h>
#include "inc/tb_all.h"

#define INC_STR STR(CAT2(V,MODULE).h)
#define VMODULE CAT2(V,MODULE)
#define MODULE_SIG_STR(x) STR(CAT3(TOP.,MODULE,.)x)

/* rtl data width */
#define DATA_WIDTH 16

typedef CAT3(uint,DATA_WIDTH,_t) data_t;

#define NODE_CNT 5

/* VLAN */
#define DEFAULT_HAS_VLAN true


/* PACKET LEN */
#define PACKET_LEN_MAX 1500
#define PACKET_LEN_MIN 50


#endif // DEFS_H
