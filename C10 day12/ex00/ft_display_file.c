#include "ft_display_file.h"

int main (int argc, char **argv)
{
	int fd;
	char buffer[30000];

	fd = open(argv[1], O_RDONLY);
	if (!(ft_is_error(argc, fd)))
	{
		read(fd, buffer, 30000);
		ft_putstr(buffer);
	}
	close(fd);
}