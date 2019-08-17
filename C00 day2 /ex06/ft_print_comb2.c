/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 22:05:35 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/05 03:10:52 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nb(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

void	ft_is_valid_to_print(int a, int b, int c, int d)
{
	if (a < c)
		ft_print_nb(a, b, c, d);
	else if (a == c && b < d)
		ft_print_nb(a, b, c, d);
}

void	ft_loop(int a, int b, int c, int d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_is_valid_to_print(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = '0';
		}
		a++;
		b = '0';
	}
}

void	ft_print_comb2(void)
{
	int ia;
	int ib;
	int ic;
	int id;

	ia = '0';
	ib = '0';
	ic = '0';
	id = '1';
	ft_loop(ia, ib, ic, id);
}
