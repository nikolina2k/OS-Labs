#!bin/bash
x=10
while [ $x -gt 0 ]; do
    ./ex1
    x=$(($x-1))
done