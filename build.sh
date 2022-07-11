#!/bin/bash

cp $XDG_CACHE_HOME/wal/colors-wal-dwm.h .
sudo cp config.def.h config.h
sudo make clean install
