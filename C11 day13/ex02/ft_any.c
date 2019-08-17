int ft_any(char **tab, int(*f)(char*))
{
	int y;

	y = 0;
	while (tab[y])
	{
		if ((*f)(tab[y]))
			return (1);
		y++;
	}	
	return (0);
}