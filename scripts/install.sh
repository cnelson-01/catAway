#!/bin/bash

git submodule init
git submodule update
sudo apt install libgtk2.0-dev libgstreamer-plugins-base1.0-dev
cd ../opencv
git checkout 4.1.0
mkdir build
cd build
cmake ..
make -j8
sudo make install
pwd
cd ../..
pwd
mkdir build
cd build
cmake ..
make -j8
