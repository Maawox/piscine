#include "bsq.h"

void 	display_map(char **map)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (map[x])
	{
		while (map[y])
		{
			ft_putchar(map[x][y]);
			y++;
		}
		ft_putchar('\n');
		y = 0;
		x++;
	}
}