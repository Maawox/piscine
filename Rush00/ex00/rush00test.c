void ft_putchar(char c);

void rush(unsigned int x, unsigned int y)
{
	unsigned int i;
	unsigned int j;
	char c;

	j = 0; 
	while(j < y)
	{
		i = 0;		
		while(i < x)
		{
			if(j == 0 || j == y-1)
			{
				if(i == 0 || i == x-1)
					c = 'o';
				else if(i > 0 && i < x)
					c = '-';
			}
			else if(j > 0 && j < y)
			{
				if(i == 0 || i == x-1)
					c = '|';
				else if(i > 0 && i < x)
					c = ' ';		
			}	
			ft_putchar(c);
			i++;
		}
		ft_putchar('\n');
		j++;	
	}
}
