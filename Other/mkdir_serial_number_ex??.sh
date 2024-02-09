#!/bin/bash

seq 10 | while read line
do
mkdir "ex0$line"
done
