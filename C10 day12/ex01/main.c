#include "ft_cat.h"

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		ft_stdinput();
	else
		while (argv[i])
		{
			ft_display_file(argc, argv, i);
			i++;
			if (!(ft_strcmp(argv[i], "-")))
				ft_stdinput();
		}
}