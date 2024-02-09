#!/bin/bash

cat hoge.txt | while read line
do
echo "内容；$line"
done