#!/bin/sh

cc -g -Wall -Wextra -Werror -lbsd ./test/*.c ./test/test.h ./src/*.c ./src/libft.h
