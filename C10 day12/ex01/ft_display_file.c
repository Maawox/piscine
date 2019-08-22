#include "ft_cat.h"

void ft_display_file(int argc, char *name_file)
{
	int fd;
	int errno;
	char buffer[40000];

	fd = open(name_file, O_RDONLY);
	if (ft_is_error(fd))
	{
		read(fd, &buffer, 40000);
		ft_putstr(buffer);
	}
	else
	{
		ft_putstr("cat : ");
		ft_putstr(name_file);
		ft_putstr(": No such file or directory\n");
	}
	close(fd);
}