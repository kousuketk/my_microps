#ifndef IP_H
#define IP_H

#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>

#include "net.h"

#define IP_VERSION_IPV4 4

#define IP_HDR_SIZE_MIN 20
#define IP_HDR_SIZE_MAX 60

#define IP_TOTAL_SIZE_MAX UINT16_MAX /* maximum value of uint16 */
#define IP_PAYLOAD_SIZE_MAX (IP_TOTAL_SIZE_MAX - IP_HDR_SIZE_MIN)

#define IP_ADDR_LEN 4
#define IP_ADDR_STR_LEN 16 /* "ddd.ddd.ddd.ddd\0" */

/* see https://www.iana.org/assignments/protocol-numbers/protocol-numbers.txt */
#define IP_PROTOCOL_ICMP 0x01
#define IP_PROTOCOL_TCP  0x06
#define IP_PROTOCOL_UDP  0x11

typedef uint32_t ip_addr_t;

// extern void
// ip_input(const uint8_t *data, size_t len, struct net_device *dev);

extern int
ip_init(void);

#endif
