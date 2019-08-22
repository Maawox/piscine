/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 18:35:14 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/22 21:20:57 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (((*f)(tab[i], tab[i + 1])) <= 0)
			i++;
		else
			i = length;
	}
	if (i == length - 1 || length == 0)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (((*f)(tab[i], tab[i + 1])) >= 0)
			i++;
		else
			i = length;
	}
	if (i == length - 1)
		return (1);
	return (0);
}
