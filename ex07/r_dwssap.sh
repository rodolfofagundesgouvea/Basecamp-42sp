#!/bin/sh
cat /etc/passwd | awk -F':' '{print $1}' | sed '1~2d' | rev | sort -r | sed -n ''$FT_LINE1','$FT_LINE2'p' | sed 's/$/,/' | tr '\n' ' ' | sed 's/..$/./'