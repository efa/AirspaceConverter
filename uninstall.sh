#!/bin/bash
#============================================================================
# AirspaceConverter
# Since       : 9/12/2017
# Author      : Alberto Realis-Luc <alberto.realisluc@gmail.com>
# Web         : https://www.alus.it/AirspaceConverter
# Copyright   : (C) 2016-2020 Alberto Realis-Luc
# License     : GNU GPL v3
#
# This script is part of AirspaceConverter project
#============================================================================

# Make sure that we are on Linux
if [[ "$(uname)" == "Darwin" || "$(expr substr $(uname -s) 1 5)" != "Linux" ]]; then
	echo "ERROR: this script is only for Linux ..."
	exit 1
fi

echo Uninstalling everything...

# Uninstall GUI
sudo rm -f /usr/bin/airspaceconverter-gui

# Uninstall shared library and CLI
sudo make uninstall

echo Done.

