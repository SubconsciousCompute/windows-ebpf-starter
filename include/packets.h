#pragma once

#include <stdint.h>

#include "net/if_ether.h"
#include "net/ip.h"
#include "net/tcp.h"
#include "net/udp.h"
#include "types.h"

typedef struct FiveTuple {
    u32 src_address;
    u32 dst_address;
    u16 src_port;
    u16 dst_port;
    u8 proto;
} FiveTuple;