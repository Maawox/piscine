/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:06:37 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/21 15:48:26 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
