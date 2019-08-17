/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:06:37 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/17 15:27:41 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		tab = (int*)malloc(sizeof(int) * 1);
		tab[i] = 0;
		return (tab);
	tab = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int main(int argc, char **argv)
{
	int i = 0;
	int *tab;

	if (argc == 3)
	{	
		tab = ft_range(atoi(argv[1]), atoi(argv[2]));
		while (i < atoi(argv[2]))
		{
			printf("%d\n", tab[i]);
			i++;
		}
	}
}
