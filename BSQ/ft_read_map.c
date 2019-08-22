#include "bsq.h"

void ft_read_map(char *map_file)
{
	char **map;
	int fd;
	char buffer[30000];
	int errno;

	fd = open(map_file, O_RDONLY);
	//if (!(ft_is_error(fd, errno)))
	//{
		read(fd, buffer, 30000);
	//}
	map = ft_split(buffer, "\n");
	fill_map(map);
	display_map(map);
	close(fd);
}


	
	
	