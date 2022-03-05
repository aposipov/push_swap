cmake_minimum_required(VERSION 3.21)
project(PS2 C)

set(CMAKE_C_STANDARD 99)

include_directories(./libft)
add_subdirectory(./libft)

add_executable(PS2 index.c ins_r.c ins_rr.c ins_s_p.c
        check.c push_swap.c sorting.c sorting_utils.c utils.c)

target_link_libraries(PS2 libft)