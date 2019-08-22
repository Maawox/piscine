/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:02:52 by ercordho          #+#    #+#             */
/*   Updated: 2019/08/18 21:19:42 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

char	*ft_strcat(char *dest, char src)
{
	int	i;
	int	s_dest;

	s_dest = ft_strlen(dest);
	i = 0;
	if (src)
	{
		dest[s_dest + i] = src;
		i++;
	}
	dest[s_dest + i] = '\0';
	return (dest);
}
