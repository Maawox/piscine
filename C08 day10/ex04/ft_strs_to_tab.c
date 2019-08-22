/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:51:30 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/18 16:46:45 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

void				ft_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str			*tab;

	i = 0;
	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while ((i) < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		if (!(tab[i].str = (char *)malloc(sizeof(char) * (tab[i].size + 1))))
			return (NULL);
		tab[i].str = av[i];
		if (!(tab[i].copy = (char *)malloc(sizeof(char) * (tab[i].size + 1))))
			return (NULL);
		ft_strcpy(tab[i].copy, tab[i].str);
		i++;
	}
	tab[i].size = 0;
	if (!(tab[i].str = (char *)malloc(sizeof(char))))
		return (NULL);
	tab[i].str = NULL;
	if (!(tab[i].copy = (char *)malloc(sizeof(char))))
		return (NULL);
	tab[i].copy = NULL;
	return (tab);
}
