This is a fork from fit-iot-bab contiki https://github.com/iot-lab/contiki , which is a fork of contiki 3.0
The only changes are in file ../core/net/rpl/rpl-icmp6.c where the version of the DAO message is increased every time the (malicious) node sends a new message: buffer[pos++] = ++ (dag->version);

The attacker node DOES nothing per se.

Another idea is to use a standard contiki and insert a compile variable (#ifdef) sourounding the above line to enable it only for malicious nodes.

Examples and applied such attacks can be found in ASSET: https://github.com/SWNRG/ASSET

Dont forget to cite:
George Violettas, George Simoglou, Sophia Petridou, Lefteris Mamatas, A Softwarized Intrusion Detection System for the RPL-based Internet of Things networks, Future Generation Computer Systems, Volume 125, 2021, Pages 698-714, ISSN 0167-739X, https://doi.org/10.1016/j.future.2021.07.013.

All my alterations in the code have "// George" NOT Oikonomou

