#!/bin/bash
gcc -Wall -Wextra -Werror union.c -o union
echo "# Expected result (next line) Your result #"
echo "---"
./union sjkfhkjdhfjk "jksfhjkd" | cat -e
echo "# Expected result (next line) Your result #"
echo "---"
./union ramil "sabitov" | cat -e
echo "# Expected result (next line) Your result #"
echo "---"
./union kazan "birsk" | cat -e
echo "# Expected result (next line) Your result #"
echo "---"
./union ufa "chilabi" | cat -e

