#!/bin/bash

cp ./scripts/* $HOME/.local/bin/
sudo cp config.def.h config.h
sudo make clean install
