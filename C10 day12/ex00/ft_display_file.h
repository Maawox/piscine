#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void ft_putchar(char c);
void ft_putstr(char *str);
int ft_is_error(int argc, int fd);
#endif

