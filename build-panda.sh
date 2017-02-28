#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
PANDA_BUILD=/opt/panda/build
cd $PANDA_BUILD
 
../build.sh --python=`which python2` --extra-plugins-path=$DIR
