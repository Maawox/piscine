/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbedouet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 22:02:35 by tbedouet          #+#    #+#             */
/*   Updated: 2019/08/17 22:27:02 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

int		is_in_set(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		++charset;
	}
	return (0);
}

int		leng(char *str, char *charset)
{
	if (*str && is_in_set(*str, charset) == 0)
		return (leng(++str, charset) + 1);
	return (1);
}

int		count_space(char *str, char *charset)
{
	int count;

	count = 0;
	while (*str)
	{
		if (is_in_set(*str, charset))
		{
			while (*str && is_in_set(*str, charset))
				++str;
			++count;
		}
		else
			++str;
	}
	return (++count);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	char	*temp_str;
	int		i;
	int		y;

	tab = (char**)malloc(sizeof(char*) * count_space(str, charset) + 1);
	y = 0;
	while (*str)
	{
		if (is_in_set(*str, charset))
			++str;
		else
		{
			i = 0;
			temp_str = (char*)malloc(sizeof(char) * leng(str, charset));
			while (*str && is_in_set(*str, charset) == 0)
				temp_str[i++] = *(str++);
			temp_str[i] = 0;
			tab[y] = temp_str;
			++y;
		}
	}
	tab[y] = 0;
	return (tab);
}
