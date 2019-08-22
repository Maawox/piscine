/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_lenght.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:23:26 by ercordho          #+#    #+#             */
/*   Updated: 2019/08/18 21:40:49 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

int		ft_find_lenght(char *str)
{
	int i;
	int j;
	int count;
	int size;

	size = ft_strlen(str);
	count = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		while (j < size)
		{
			count++;
			j++;
		}
		size--;
		i++;
	}
	return (count);
}
