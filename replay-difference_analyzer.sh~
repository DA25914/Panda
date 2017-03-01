#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
PANDA_BUILD=/opt/panda/build

$PANDA_BUILD/i386-softmmu/qemu-system-i386 -m 3500 -replay Recordings/overflow_0 -os linux-32-lava32  -panda difference_analyzer

