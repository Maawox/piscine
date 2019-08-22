/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:20:50 by ercordho          #+#    #+#             */
/*   Updated: 2019/08/18 21:02:44 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

int		ft_read_argv(char *argv)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(char) * (ft_nblen(argv) + 1))))
		return (0);
	str = ft_strcpy(str, argv);
	while (*argv)
	{
		if (*argv < '0' || *argv > '9')
		{
			ft_error(2);
			free(str);
			return (0);
		}
		argv++;
	}
	ft_split_nb(str);
	return (1);
}
