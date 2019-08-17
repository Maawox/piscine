int is_power_of_2(unsigned int n)
{
	int i;
	int test;

	i = 1;
	test = 0;

	while(i < n / 4)
	{
		test = i * i;
			if (test == n)
			{
				return(1);
			}
		i++;
	}
	return (0);
}

int main ()
{
	unsigned int n;
	n = 4000000000;
	printf("%d\n", is_power_of_2(n));
}