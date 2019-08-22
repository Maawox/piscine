/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:40:23 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/21 21:07:47 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_isspace(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n') || (c == '\v') ||
			(c == '\f') || (c == '\r'))
		return (1);
	else
		return (0);
}

int		ft_atoi(const char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] != '\0' && ft_isspace(str[i]))
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (sign * nb);
}
