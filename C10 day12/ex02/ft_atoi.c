#include "ft_tail.h"

int		ft_atoi(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}