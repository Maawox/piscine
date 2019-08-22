/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:45:15 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/22 14:59:05 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	do_op(char c, int (*op)(int, int), int a, int b)
{
	if (c == '+')
		op = &ft_add;
	else if (c == '-')
		op = &ft_sub;
	else if (c == '/' && b != 0)
		op = &ft_div;
	else if (c == '%' && b != 0)
		op = &ft_mod;
	else if (c == '*')
		op = &ft_mul;
	if (op)
		ft_putnbr((*op)(a, b));
	else
		ft_putnbr(0);
}
