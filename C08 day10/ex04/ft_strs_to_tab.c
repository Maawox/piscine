/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:51:30 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/17 19:39:41 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char					*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str		ft_str_to_stk(struct s_stock_str stk, char *str)
{
	stk.size = ft_strlen(str);
	if (stk.size == 0)
		return (stk);
	if (!(stk.str = (char*)malloc(sizeof(char) * (stk.size + 1))))
		return (stk);
	stk.str = ft_strcpy(stk.str, str);
	if (!(stk.copy = (char*)malloc(sizeof(char) * (stk.size + 1))))
		return (stk);
	stk.copy = ft_strcpy(stk.copy, str);
	return (stk);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			x;
	int			y;

	x = 0;
	y = 0;
	if (!(tab = (struct s_stock_str*)malloc(sizeof(struct s_stock_str) * (ac + 1))))
	{
		tab = (struct s_stock_str*)malloc(sizeof(struct s_stock_str));
		tab[x].str = NULL;
		tab[x].size = 0;
		tab[x].copy = NULL;
		return (tab);
	}
	while (av[y])
	{
		tab[x] = ft_str_to_stk(tab[x], av[y]);
		x++;
		y++;
	}
	tab[x].str = NULL;
	return (tab);
}
