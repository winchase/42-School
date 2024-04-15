#!/bin/bash


#show  count files

find . -type f -o -type d | wc -l | cat -e
