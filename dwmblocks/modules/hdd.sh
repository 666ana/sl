#!/bin/sh

hdd() {
    df -h "/home" | awk ' /[0-9]/ {print $3 "/" $2}' |  tr '[A-Z]' '[a-z]'
}

echo " 🖴 $(hdd)"