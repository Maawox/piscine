#include "ft_display_file.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}