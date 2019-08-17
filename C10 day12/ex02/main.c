#include "ft_tail.h"

int main(int argc, char **argv)
{
	int i;
	int arg;

	i = 1;
	if (argc < 2)
		ft_stdinput();
	else
		if (!(ft_strcmp(argv[i], "-c")))
		{
			i++;
			if (ft_str_is_numeric(argv[i]))
			{	
				arg = ft_atoi(argv[i]);
				i++;
				while (argv[i])
				{
					ft_display_file(argc, argv, i, arg);
					i++;
				}
			}
			else
				fd = open(argv[i], O_RDONLY);
			
		}
}
