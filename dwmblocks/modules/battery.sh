#!/bin/sh

bat() {
    cat /sys/class/power_supply/BAT?/capacity | jq add -s
}

echo " $(bat)%"
