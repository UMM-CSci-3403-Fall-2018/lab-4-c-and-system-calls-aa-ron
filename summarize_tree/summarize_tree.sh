#!/bin/bash

path=$1

#count
dirs=$(find $path -type d | wc -l)
files=$(find $path -type f | wc -l)

#print
echo Directories: $dirs
echo Files: $files