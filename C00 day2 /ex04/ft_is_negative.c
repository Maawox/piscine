/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 01:27:14 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/04 16:37:22 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int i)
{
	if (i >= 0)
	{
		write(1, "P", 1);
	}
	else
		write(1, "N", 1);
}
