#!/bin/sh

ram() {
    free -h | sed -n '2{p;q}' | awk '{print $3 "/" $2}' | tr -d 'i' | tr '[A-Z]' '[a-z]'
}

echo " 🖳 $(ram)"