/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:01:28 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/22 18:25:21 by mderoir          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}

int		ft_ptrswap(char **ptrstr, int pos)
{
	char *buffer;

	buffer = ptrstr[pos];
	ptrstr[pos] = ptrstr[pos + 1];
	ptrstr[pos + 1] = buffer;
	return (1);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				flag = ft_ptrswap(tab, i);
			}
			i++;
		}
	}
}
