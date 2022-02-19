cmake_minimum_required(VERSION 3.21)
project(push_swap C)

set(CMAKE_C_STANDARD 99)

add_executable(push_swap src/push_swap.c src/ft_error.c src/ft_split.c src/utils_lib.c)
