#ifndef FT_TAIL_H
#define FT_TAIL_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void ft_display_file(int argc, char **argv, int i, int arg);
int ft_is_error(int fd, int errno);
void ft_putchar(char c);
void ft_putstr(char *str, int arg);
void ft_stdinput(void);
int	ft_strcmp(char *s1, char *s2);
int ft_strlen(char *str);
int	ft_atoi(char *str);
int	ft_str_is_numeric(char *str);
char *ft_strdup(char *src);
char *ft_strcpy(char *dest, char *src);

#endif