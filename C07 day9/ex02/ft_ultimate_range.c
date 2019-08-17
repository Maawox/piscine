/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:27:46 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/17 15:28:47 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min > max)
	{
		**range = '\0';
		return (0);
	}
	i = 0;
	if(!(*range = (int*)malloc(sizeof(*range) * (max - min))))
		return (-1);
	while (min < max)
	{
		*range[i] = min;
		i++;
		min++;
	}
	return(i);	
}
