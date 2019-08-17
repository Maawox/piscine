#include <stdlib.h>

int 	*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *map;

	i = 0;
	if (!(map = (int *)malloc(sizeof(int) * (length))))
		return (0);
	while (i < length)
	{
		map[i] = (*f)(tab[i]);
		i++;
	}
	return (map);
}
