# initialize from the image

FROM ubuntu:14.04

# update package repositories

RUN apt-get update

# install build tools and dependencies

RUN apt-get install -y build-essential cmake git pkg-config libboost-test1.54-dev libboost-system1.54-dev libboost-regex1.54-dev libboost-date-time1.54-dev libboost-thread1.54-dev libboost-filesystem1.54-dev libboost-program-options1.54-dev libboost-chrono1.54-dev libboost-atomic1.54-dev libssl-dev libusb-1.0-0-dev

# clone the source code

RUN git clone https://github.com/trezor/trezord.git && cd trezord && git submodule update --init
WORKDIR trezord

# build cpp-netlib

RUN mkdir -p lib/cpp-netlib && cd lib/cpp-netlib && cmake ../../vendor/cpp-netlib && make

# build trezord

RUN mkdir -p build && cd build && cmake .. && make
