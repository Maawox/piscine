#include "bsq.h"

int ft_is_error(int fd, int errno)
{
	char *error_msg;
	if (fd == -1)
	{
		error_msg = ft_strdup(strerror(errno));
		//ft_putstr(error_msg, strlen(error_msg));

		return (0);
	}
	return (1);
}