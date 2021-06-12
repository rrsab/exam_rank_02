#!/bin/bash
gcc -Wall -Wextra -Werror inter.c -o inter
echo "# Expected result (next line) Your result #"
echo "# first word - sjkfhkjdhfjk"
echo "# second word - jksfhjkd" 
echo "---"
./inter sjkfhkjdhfjk "jksfhjkd" | cat -e
echo "# Expected result (next line) Your result #"
echo "---"
./inter ivan "maxeev" | cat -e
echo "# Expected result (next line) Your result #"
echo "---"
./inter kazan "birsk" | cat -e
echo "# Expected result (next line) Your result #"
echo "---"
./inter ufa "chilabi" | cat -e

