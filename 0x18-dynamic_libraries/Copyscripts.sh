#!/bin/bash

# Array containing the names of the .c files
files=(
    "_putchar.c"
    "3-islower.c"
    "4-isalpha.c"
    "6-abs.c"
    "0-isupper.c"
    "1-isdigit.c"
    "2-strlen.c"
    "3-puts.c"
    "9-strcpy.c"
    "100-atoi.c"
    "0-strcat.c"
    "1-strncat.c"
    "2-strncpy.c"
    "3-strcmp.c"
    "0-memset.c"
    "1-memcpy.c"
    "2-strchr.c"
    "3-strspn.c"
    "4-strpbrk.c"
    "5-strstr.c"
)

# Loop through each file in the array and copy it to the current directory
for file in "${files[@]}"; do
    find /alx-low_level_programming/ -type f -name "$file" -exec cp {} ./ \;
done

