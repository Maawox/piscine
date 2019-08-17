/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:07:38 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/12 19:07:41 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strscat(char *dest, char **src, char *sep, int size)
{
	int y;
	int x;
	int i;

	y = -1;
	i = 0;
	while (++y <= size)
	{
		x = 0;
		while (src[y][x])
		{
			dest[i] = src[y][x];
			x++;
			i++;
		}
		x = 0;
		while (y < size && sep[x])
		{
			dest[i] = sep[x];
			x++;
			i++;
		}
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		len;
	char	*joined_str;

	len = 0;
	j = 0;
	while (strs[j])
	{
		len += ft_strlen(strs[j]);
		j++;
	}
	len += size * ft_strlen(sep);
	if (!(joined_str = (char*)malloc(sizeof(char) * len)) || size == 0)
	{
		joined_str = NULL;
		return (joined_str);
	}
	joined_str = ft_strscat(joined_str, strs, sep, size);
	return (joined_str);
}
