#include <stdio.h>
#include <stdlib.h>

int ft_add(int a, int b)
{
	return(a + b);
}

int ft_sub(int a, int b)
{
	return(a - b);
}

int ft_div(int a, int b)
{
	return(a / b);
}

int ft_mod(int a, int b)
{
	return(a % b);
}

int ft_mul(int a, int b)
{
	return(a * b);
}

int main (int argc, char **argv)
{
	int (*op)(int, int);

	



	if (argc != 4)
		return (0);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argv[2][0] == '+')
		op = &ft_add;

	if (argv[2][0] == '-')
		op = &ft_sub;

	if (argv[2][0] == '/')
		op = &ft_div;

	if (argv[2][0] == '%')
		op = &ft_mod;

	if (argv[2][0] == '*')
		op = &ft_mul;

}