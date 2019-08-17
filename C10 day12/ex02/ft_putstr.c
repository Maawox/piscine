#include "ft_tail.h"

void ft_putstr(char *str, int arg)
{
	int i;

	i = ft_strlen(str) - arg;
	i < 0 ? i = 0 : i;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++ ;
	}
}