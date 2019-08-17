/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:08:22 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/09 10:08:24 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_ptrswap(char **ptrstr, int pos)
{
	char *buffer;

	buffer = ptrstr[pos];
	ptrstr[pos] = ptrstr[pos + 1];
	ptrstr[pos + 1] = buffer;
	return (1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}

int		main(int argc, char **argv)
{
	int		flag;
	int		i;

	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				flag = ft_ptrswap(argv, i);
			}
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
