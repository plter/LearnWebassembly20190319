#!/usr/bin/env bash

emcc -s EXPORTED_FUNCTIONS="['_main', '_luaLoaded']" \
-s FORCE_FILESYSTEM=1 \
./lauxlib.c \
        ./liolib.c \
        ./lopcodes.c \
        ./lstate.c \
        ./lobject.c \
        ./lmathlib.c \
        ./loadlib.c \
        ./lvm.c \
        ./lfunc.c \
        ./lstrlib.c \
        ./lua.c \
        ./linit.c \
        ./lstring.c \
        ./lundump.c \
        ./lctype.c \
        ./ltable.c \
        ./ldump.c \
        ./loslib.c \
        ./lgc.c \
        ./lzio.c \
        ./ldblib.c \
        ./lutf8lib.c \
        ./lmem.c \
        ./lcorolib.c \
        ./lcode.c \
        ./ltablib.c \
        ./lbitlib.c \
        ./lapi.c \
        ./lbaselib.c \
        ./ldebug.c \
        ./lparser.c \
        ./llex.c \
        ./ltm.c \
        ./ldo.c