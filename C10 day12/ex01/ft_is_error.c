#include "ft_cat.h"

int ft_is_error(int fd)
{		
	if (fd == -1)
	{
		return (0);
	}
	return (1);

}