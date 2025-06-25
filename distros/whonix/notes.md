# whonix notes

## what is whonix
whonix is a privacy focused linux distro designed to provide maximum anonymity and security by routing all network traffic through the Tor network.

it's built on a unique **two-virtual-machine** architecture that creates strong isolation between your activities and potential threats.

whonix consists of two separate virtual machines that work together , the gateway and the workstation.

### whonix - gateway
this VM runs Tor and acts as a gateway , handling all network connections. it's the only component that connects to the internet , and it does so exclusively through Tor.

### whonix - workstation
this is where you do your actual work. it has no direct internet connection and can only communciate through the gateway , ensuring all traffic is automatically routed through Tor.

this means that even if the malware infects your workstation , it cannot bypass Tor or reveal your real IP address , because the workstation cannot physically connect to the internet any other way.

## why use whonix
whonix provides several important security advantages. it offers automatic Tor routing for all applications without configuration, strong isolation that prevents IP from leaking even if workstation is compromised, , and protection against many forms of malware and tracking.




