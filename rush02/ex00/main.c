/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 11:56:40 by ercordho          #+#    #+#             */
/*   Updated: 2019/08/21 10:01:54 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_read_argv(argv[1]);
	else if (argc == 3)
		ft_putstr(argv[2]);
	return (0);
}
