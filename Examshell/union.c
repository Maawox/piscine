#include <unistd.h>

void ft_putchar(char c)
{
	write(1 , &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_char_is_valid(char *str, char c, int j)
{
	int check;

	check = 1;
	while (str[j])
	{	
		if (c == str[j])
			check = 0;
		j--;
	}		
	return (check);

}

void put_all_char(char *s1, char *s2)
{
	int i;
	int j;
	int n;
	int flag;

	
	j = 0;
	n = 0;
	while (s1[j])
	{
		flag = 0;
		i = 0;
		while(s2[i])
		{
			if (ft_char_is_valid(s1, s1[j], j - 1))
				flag = 1;
			i++;
		}
		if (flag)
		{
			ft_putchar(s1[j]);
		}
		j++;
	}
}

void put_all_char_except(char *s1, char *s2)
{
	int i;
	int j;
	int n;
	int flag;

	
	j = 0;
	n = 0;
	while (s1[j])
	{
		flag = 0;
		i = 0;
		while(s2[i])
		{
			if (ft_char_is_valid(s1, s1[j], j - 1), ft_char_is_valid(s2, s1[j], j))
				flag = 1;
			i++;
		}
		if (flag)
		{
			ft_putchar(s1[j]);
		}
		j++;
	}
}


int main (int argc, char **argv)
{
	if (argc == 3)
	{
		put_all_char(argv[1], argv[2]);
		put_all_char_except(argv[2], argv[1]);
	}
	ft_putchar('\n');
}