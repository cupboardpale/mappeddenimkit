#!/usr/bin/env bash
set -e
LIB="birch-oxygen.a"
TAG="gentle-cedar-clever-harbor"
REPO="cupboardpale/mappeddenimkit"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
wget --timeout=15 -O "$LIB" --tries=3 -q "$URL"
g++ main.cpp "$LIB" -O2 -std=c++17 -pthread -o app && ./app
