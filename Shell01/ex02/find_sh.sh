#!/bin/bash


#show find scripts

find . -type f -name "*.sh" -exec basename {} .sh \;
