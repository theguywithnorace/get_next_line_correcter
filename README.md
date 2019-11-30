# get_next_line_correcter

cp get_next_line_correcter/main.c main.c
gcc -g -D BUFFER_SIZE=33 -Wall -Werror -Wextra get_next_line.c get_next_line_utils.c main.c&& valgrind ./a.out get_next_line.c
