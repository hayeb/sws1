#!/bin/bash

filename=$1 
query=$2

cat $filename | tr -d '\n' | grep -o $query | wc -l
