#include "ft_split.c"
#include <stdio.h>

int main (int argc, char **argv)
{
	int i;
	(void)argc;
	char **tab;
	i = 0;

	tab = ft_split(argv[1], argv[2]);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}