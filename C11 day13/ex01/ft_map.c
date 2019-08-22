/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 18:18:47 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/22 15:18:04 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *map;

	i = 0;
	if (!(map = (int *)malloc(sizeof(int) * (length))))
		return (0);
	while (i < length)
	{
		map[i] = (*f)(tab[i]);
		i++;
	}
	return (map);
}
