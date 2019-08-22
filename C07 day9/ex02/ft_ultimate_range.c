/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:27:46 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/21 15:45:33 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	i = 0;
	*range = (int*)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min + i < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
