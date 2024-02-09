#!/bin/bash

find . -type f -name "*.sh" -print | sed 's/\.[^\.]*$//' | sed 's!^.*/!!'

find . -type f -name "*.sh" | xargs basename -s .sh