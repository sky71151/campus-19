#!/bin/bash

# Compile source files and create object files
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c


# Create the library archive
# 'ar' create library
# flag 'r' insert or replace
# flag 'c' make a new archive 
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Index the library
ranlib libft.a

# Clean up object files
rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

