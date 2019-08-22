/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:40:23 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/22 19:01:43 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

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
