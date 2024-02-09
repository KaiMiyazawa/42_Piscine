#!/bin/bash

seq 20 | while read line
do
if [ $line -lt 10 ]
then

mkdir "秘蔵写真NO.0$line"

else

mkdir "秘蔵写真NO.$line"

fi
done