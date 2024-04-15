#!/bin/bash


#show MAC address PC

ifconfig -a | grep ether | awk '{print $2}'
