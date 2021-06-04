#!/bin/sh
ifconfig | grep ether | sed 's/^[[:space:]]*//' | cut -d ' ' -f 2