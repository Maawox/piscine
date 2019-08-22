/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:10:34 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/22 18:11:52 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_ptrswap(char **ptrstr, int pos)
{
	char *buffer;

	buffer = ptrstr[pos];
	ptrstr[pos] = ptrstr[pos + 1];
	ptrstr[pos + 1] = buffer;
	return (1);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		flag;
	int		i;
	int		len;

	flag = 1;
	len = ft_strlen(tab);
	while (flag)
	{
		flag = 0;
		i = 0;
		while (i < len - 1)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				flag = ft_ptrswap(tab, i);
			}
			i++;
		}
	}
}
