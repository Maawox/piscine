#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_char_is_lowercase(char c)
{
	int i;
	int check;

	check = 1;
		if (!(c >= 'a' && c <= 'z'))
			check = 0;
	return (check);
}

int		ft_char_is_uppercase(char c)
{
	int i;
	int check;

	check = 1;
		if (!(c >= 'A' && c <= 'Z'))
			check = 0;
	return (check);
}


void ft_alpha_mirror(char *str)
{
	int i;
	int letter_nb;

	i = 0;
	letter_nb = 26;
	while (str[i])
	{
		if (ft_char_is_lowercase(str[i]))
		{
			ft_putchar(109 - (str[i] - 110));
		}
		else if (ft_char_is_uppercase(str[i]))
		{
			ft_putchar(77 - (str[i] - 78));
		}
		else
			ft_putchar(str[i]);
		i++;
	}


}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		ft_alpha_mirror(argv[1]);
	}
	else
		ft_putchar('\n');
	return(0);
}

