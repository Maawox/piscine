#include "ft_cat.h"

void ft_stdinput(void)
{
	char *buffer;

	while (read(0, &buffer, 1) != 0)
		write(0, &buffer, 1);
}