/*
 * INSERTING PARTS OF GEORGE'S COMPLICATED CLIENT
 *
 */

#include "contiki.h"
#include "net/ip/uip.h"

//#include "dixonQtestIn.c"
//#include "dixonQtestOut.c"

#define UDP_CLIENT_PORT 8765
#define UDP_SERVER_PORT 5678

#define UDP_EXAMPLE_ID  190

#ifndef PERIOD
#define PERIOD 500 /* increase it to 700 avoid flooding */
//#define PERIOD 60
#endif

#define START_INTERVAL		(15 * CLOCK_SECOND)
#define SEND_INTERVAL		(PERIOD * CLOCK_SECOND)
#define SEND_TIME		(random_rand() % (SEND_INTERVAL))
#define MAX_PAYLOAD_LEN		30

static struct uip_udp_conn *client_conn;
static uip_ipaddr_t server_ipaddr;
static uip_ipaddr_t destination_ipaddr;

/* Get the preffered parent, and the current own IP of the node */



// ERROR IS HERE !!!!!!!!!!!!!!!!
// even when i include above the rpl-icmp6, it gives errr????/
//#include "core/net/rpl/rpl-icmp6.c"



//extern   rpl_parent_t *dao_preffered_parent;
//extern   uip_ipaddr_t *dao_preffered_parent_ip;
//extern   uip_ipaddr_t dao_prefix_own_ip;

/* Monitor this var. When changed, the node has changed parent */
//static rpl_parent_t *my_cur_parent;

static uip_ipaddr_t *my_cur_parent_ip;



/* When the controller detects version number attack, it orders to stop
 * resetting the tricle timer. The variables below lie in rpl-dag.c
 */
//#include "net/rpl/rpl-dag.c"
//extern uint8_t ignore_version_number_incos; //if == 1 DIO will not reset trickle
//extern uint8_t dio_bigger_than_dag; // if version attack, this will be 1
//extern uint8_t dio_smaller_than_dag; // if version attack, this will be 1
 

/*---------------------------------------------------------------------------*/
PROCESS(udp_client_process, "UDP client process");
AUTOSTART_PROCESSES(&udp_client_process);
/*---------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------*/
PROCESS_THREAD(udp_client_process, ev, data)
{
  PROCESS_BEGIN();

  PROCESS_PAUSE();

  while(1) {
    PROCESS_YIELD();


    if(data != NULL) {

    }


  }

  PROCESS_END();
}
/*---------------------------------------------------------------------------*/
