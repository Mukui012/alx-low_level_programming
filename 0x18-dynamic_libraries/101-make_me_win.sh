#!/bin/bash
wget -qP /tmp/ https://github.com/Mukui012/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gigalib.so
export LD_PRELOAD="/tmp/gigalib.so"
