#include "ft_tail.h"

void ft_display_file(int argc, char **argv, int i, int arg)
{
	int fd;
	int errno;
	char buffer[30000];

	fd = open(argv[i], O_RDONLY);
	if (ft_is_error(fd, errno))
	{
		read(fd, &buffer, 30000);
		ft_putstr(buffer, arg);
	}
	close(fd);
}




cur = cur->next

if mot == curs->mot