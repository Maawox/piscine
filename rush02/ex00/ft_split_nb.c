/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 21:11:29 by ercordho          #+#    #+#             */
/*   Updated: 2019/08/18 21:44:56 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

void	ft_split_nb(char *str)
{
	int		i;
	int		j;
	int		s_str;
	int		nb_of_zero;
	char	*new_str;

	s_str = ft_strlen(str);
	if (!(new_str = (char*)malloc(sizeof(char) * (ft_find_lenght(str) +
						(1 * (s_str - 1)) + 1))))
		return ;
	i = 0;
	j = 0;
	nb_of_zero = s_str - 1;
	while (s_str > 0)
	{
		new_str = ft_strcat(new_str, str[i]);
		while (j++ < nb_of_zero)
			ft_strcat(new_str, '0');
		new_str = ft_strcat(new_str, ' ');
		j = 0;
		nb_of_zero--;
		i++;
		s_str--;
	}
	ft_putstr(new_str);
}
