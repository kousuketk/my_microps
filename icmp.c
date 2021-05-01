#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "util.h"
#include "net.h"
#include "ip.h"
#include "icmp.h"

#define ICMP_BUFSIZ IP_PAYLOAD_SIZE_MAX

void
icmp_input(const uint8_t *data, size_t len, ip_addr_t src, ip_addr_t dst, struct ip_iface *iface)
{
  char addr1[IP_ADDR_STR_LEN];
  char addr2[IP_ADDR_STR_LEN];

  debugf("%s => %s, len=%zu", ip_addr_ntop(src, addr1, sizeof(addr1)), ip_addr_ntop(dst, addr2, sizeof(addr2)), len);
  debugdump(data, len);
}

int
icmp_init(void)
{
  if (ip_protocol_register("ICMP", IP_PROTOCOL_ICMP, icmp_input) == -1) {
    errorf("ip_protocol_register() failure");
    return -1;
  }
  return 0;
}