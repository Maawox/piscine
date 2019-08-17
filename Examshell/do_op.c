#include <stdio.h>
#include <stdlib.h>

int ft_add(int a, int b)
{
	return(a + b);
}

int ft_substract(int a, int b)
{
	return(a - b);
}

int ft_divise(int a, int b)
{
	return(a / b);
}

int ft_modulo(int a, int b)
{
	return(a % b);
}

int ft_multiply(int a, int b)
{
	return(a * b);
}

int main (int argc, char **argv)
{
	int a;
	int b;

	if (argc != 4)
		return (0);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argv[2][0] == '+')
		printf("%d\n", a + b);
	if (argv[2][0] == '-')
		printf("%d\n", a - b);
	if (argv[2][0] == '/')
		printf("%d\n", a / b);
	if (argv[2][0] == '%')
		printf("%d\n", a % b);
	if (argv[2][0] == '*')
		printf("%d\n", a * b);
}