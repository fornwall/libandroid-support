#!/bin/sh

set -e

autoreconf --force --install

if test "$1" = "distcheck"; then
	echo "Making a distcheck in ./build/ ..."
	rm -Rf build
	mkdir build
	cd build
        export PATH=$PATH:$HOME/lib/android-standalone-toolchain-arm/bin/
	../configure --host=arm-linux-androideabi
	make distcheck DISTCHECK_CONFIGURE_FLAGS="--host=arm-linux-androideabi"
fi
