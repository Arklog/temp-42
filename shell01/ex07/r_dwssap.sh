#!/bin/bash

output="$(cat /etc/passwd | grep -v '#' | sed -n 'n;p' | tr ':' ' ' | awk '{print $1}' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',')"

echo -n "${output:0:-1}."
