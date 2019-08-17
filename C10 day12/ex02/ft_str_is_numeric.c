#include "ft_tail.h"

int		ft_str_is_numeric(char *str)
{
	int i;
	int check;

	check = 1;
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			check = 0;
		i++;
	}
	return (check);
}