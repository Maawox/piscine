/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:43:55 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/22 19:25:58 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	int (*op)(int, int);
	int a;
	int b;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if ((argv[2][0] == '%' || argv[2][0] == '/') && b == 0)
	{
		is_error(argv[2][0]);
		return (0);
	}
	do_op(argv[2][0], op, a, b);
	ft_putchar('\n');
}
