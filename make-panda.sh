#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
PANDA_BUILD=/opt/panda/build
cd $PANDA_BUILD
 
make -j ${PANDA_NPROC:-$(nproc || sysctl -n hw.ncpu)}
