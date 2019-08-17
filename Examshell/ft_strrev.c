int ft_strlen(char *str, int i)
{
	while(str[i])
		i++;
	return(i);
}


char    *ft_strrev(char *str)
{
	int i;
	int j;
	char buffer;

	i = 0;
	j = ft_strlen(str, i) - 1;
	while(i < j)
	{
		buffer = str[i];
		str[i] = str[j];
		str[j] = buffer;
		i++;
		j--;
	}
	return (str);	
}

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", ft_strrev(argv[1]));
}