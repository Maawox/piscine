int ft_str_is_space(char *str)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			nb++;
		i++;
	}
	return (nb);
}

int ft_count_if(char **tab, int(*f)(char*))
{
	int y;
	int nb;

	nb = 0;
	y = 0;
	while (tab[y])
	{
		nb = ((*f)(tab[y]));
	
		y++;
	}	
	return (nb);
}

int main (int argc, char **argv)
{
	printf("%d\n", ft_count_if(argv, ft_str_is_space));
}