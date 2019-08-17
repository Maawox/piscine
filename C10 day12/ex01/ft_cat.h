#ifndef FT_CAT_H
# define FT_CAT_H
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void ft_putchar(char c);
void ft_putstr(char *str);
int ft_is_error(int fd);
void ft_stdinput(void);
void ft_display_file(int c, char **v, int i);
#endif