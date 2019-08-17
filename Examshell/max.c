int max(int *tab, unsigned int len)
{
	int i;
	int max;

	i = 0;
	max = 0;
	if (len > 0)
	{
		while (tab[i])
		{
			if (tab[i] > max)
				max = tab[i];
			i++;
		}
	}
	return(max);
}

int main(void)
{
	int tab[] = { -1, -2, -3, -1, -2000, 6, -78965, 0 };
	printf("%d\n", max(tab, 1));
}