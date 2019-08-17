/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 12:52:29 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/04 16:36:24 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
