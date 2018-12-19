#!/bin/bash

path=$1

#count
dirs=$(find $path -type d | wc -l)
files=$(find $path -type f | wc -l)

#files
echo There were $dirs directories.
echo There were $files regular files.