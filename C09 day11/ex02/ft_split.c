/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 21:19:27 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/20 17:18:32 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_charset(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		++charset;
	}
	return (0);
}

int		recursive_count_char(char *str, char *charset)
{
	if (*str && ft_check_charset(*str, charset) == 0)
		return (recursive_count_char(++str, charset) + 1);
	return (1);
}

int		ft_count_word(char *str, char *charset)
{
	int count;

	count = 0;
	while (*str)
	{
		if (ft_check_charset(*str, charset))
		{
			while (*str && ft_check_charset(*str, charset))
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
	char	**word_tab;
	char	*temp_str;
	int		i;
	int		y;

	word_tab = (char**)malloc(sizeof(char*) * ft_count_word(str, charset) + 1);
	y = 0;
	while (*str)
	{
		if (ft_check_charset(*str, charset))
			++str;
		else
		{
			i = 0;
			temp_str = (char*)malloc(sizeof(char)
				* recursive_count_char(str, charset));
			while (*str && ft_check_charset(*str, charset) == 0)
				temp_str[i++] = *(str++);
			temp_str[i] = 0;
			word_tab[y] = temp_str;
			++y;
		}
	}
	word_tab[y] = 0;
	return (word_tab);
}
