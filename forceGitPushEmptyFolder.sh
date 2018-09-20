#!/bin/bash -e
#
# Author libo
# Mail: libo214@gmail.com
#

find . -type d ! -path "*.git*" -empty -exec echo {} \;

find . -type d ! -path "*.git*" -empty -exec touch {}/.gitignore \;

exit
