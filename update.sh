#!/bin/bash

cd ~/Mysetup
git pull origin master
sudo rm /bin/mysetup
sudo cp mysetup /bin
echo "Update done"
