#include "ft_cat.h"

int ft_is_error(int fd, int errno)
{		
	if (fd == -1)
	{
		strerror(errno);
		return (0);
	}
	return (1);

}