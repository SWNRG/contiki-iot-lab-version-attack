/*
 * Jun 2021: Trying to externilize variables to bypass compiler error
 * in iot-lab.
 * Need to externilize only specific needed variables.
 * Debugger failed when #include rpl-icmp6.c
 */
 
#ifndef ICMP6_EXTERN_H
#define ICMP6_EXTERN_H

#include "net/rpl/rpl-private.h"

/* George they will be sent to app layer for extra info to the sink */ 
static  rpl_parent_t *dao_preffered_parent;
static  uip_ipaddr_t *dao_preffered_parent_ip;
static  uip_ipaddr_t dao_prefix_own_ip;
static uint8_t dao_parent;

#endif /* ICMP6_EXTERN_H */
