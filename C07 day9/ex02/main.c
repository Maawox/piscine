#include "ft_ultimate_range.c"

#include <unistd.h>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nombre;

	if (nb < 0)
	{
		nombre = -nb;
		ft_putchar('-');
	}
	else
	{
		nombre = nb;
	}
	if (nombre >= 10)
	{
		ft_putnbr(nombre / 10);
	}
	ft_putchar(nombre % 10 + 48);
}

int main(int argc, char **argv)
{
	(void)argc;
	int *tab;
	int len;
	int i;

	i = 0;
	len = ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));

	while (i < len)
	{
		ft_putnbr(tab[i]);
		ft_putchar('\n');
		i++;;
	}
}