#!/usr/local/bin/fish
set a $argv[1]
set b $argv[2]
gcc -E $a | python3 sjava.py $b
