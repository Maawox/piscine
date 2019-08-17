/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 12:36:59 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/04 13:23:23 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_nb(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int ia;
	int ib;
	int ic;

	ia = '0';
	while (ia < '9' + 1)
	{
		ib = '0';
		while (ib < '9' + 1)
		{
			ic = '0';
			while (ic < '9' + 1)
			{
				if (ia < ib && ib < ic)
				{
					ft_write_nb(ia, ib, ic);
				}
				ic++;
			}
			ib++;
		}
		ia++;
	}
}
