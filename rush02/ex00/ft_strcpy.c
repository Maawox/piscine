/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 20:25:05 by ercordho          #+#    #+#             */
/*   Updated: 2019/08/17 20:41:39 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (src[i] >= '0' && src[i] <= '9')
			dest[j++] = src[i];
		i++;
	}
	dest[j] = 0;
	return (dest);
}
