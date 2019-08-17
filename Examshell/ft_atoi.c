int ft_atoi(const char *str)
{
	int i;
	int n;
	int sign;

	i = 0;
	n = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while(str[i])
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}

	return (n * sign);
}

int main (int argc, char **argv)
{
	printf("%d\n", ft_atoi("-789"));
}