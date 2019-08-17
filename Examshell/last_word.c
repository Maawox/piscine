void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_strlen(char *str, int i)
{
	while(str[i])
		i++;
	return(i);
}

int		ft_char_is_alpha(char c)
{
	int check;

	check = 1;
		if ((!(c >= 'A' && c <= 'Z'))
			&& (!(c >= 'a' && c <= 'z')))
			check = 0;
	return (check);
}


void ft_atput(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while (ft_char_is_alpha(str[i]))
		i--;
	i++;
	while (ft_char_is_alpha(str[i]))
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		i = ft_strlen(argv[1], i) - 1;
		ft_atput(argv[1], i);
	}
	ft_putchar('\n');
		return (0);
}
