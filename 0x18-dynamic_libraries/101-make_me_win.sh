#!/bin/bash

# Create a backup of the original gm program
cp gm gm_backup

# Modify the behavior of the gm program
echo "--> Please make me win!" > gm

# Remove this script
rm 101-make_me_win.sh

