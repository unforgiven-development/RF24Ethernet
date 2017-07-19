/**
 * \file ethernet_comp.h	A simple header file that provides a "wrapper" for the RF24Ethernet library, to allow for
 *							simple replacement of the "traditional" Ethernet library in Arduino sketches.
 *
 * \author		Gerad Munsch <gmunsch@unforgivendevelopment.com>
 * \author		TMRh20
 * \date		2016-2017
 */

#ifndef _ETHERNET_COMP_H__
#define _ETHERNET_COMP_H__

/**
 * Alias definitions for the Ethernet-like functionality exposed by RF24Ethernet
 *
 * \def Ethernet		Replaces Ethernet with RF24Ethernet
 * \def EthernetClient	Replaces EthernetClient with RF24Client
 * \def EthernetServer	Replaces EthernetServer with RF24Server
 * \def EthernetUDP		Replaces EthernetUDP with RF24UDP
 */
#define Ethernet RF24Ethernet
#define EthernetClient RF24Client
#define EthernetServer RF24Server
#define EthernetUDP RF24UDP

#endif	/* _ETHERNET_COMP_H__ */
