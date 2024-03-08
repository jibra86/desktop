#! /bin/bash

dwmblocks &
feh --randomize --bg-fill /home/jibran/Pictures/ &
picom --config /home/jibran/.config/picom/picom.conf &
emacs --daemon &
/usr/libexec/xfce-polkit &
lxappearance --restore 
numlockx &
xset r rate 300 50
# while true; do
# 	xsetroot -name "|  $(acpi -b | awk '{print $4}' | sed s/,//)!|!  $(date '+%Y-%m-%d %H:%M:%S') |"
# 	sleep 1s
# done

