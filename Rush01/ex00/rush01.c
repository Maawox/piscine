/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmiraill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 20:00:51 by fmiraill          #+#    #+#             */
/*   Updated: 2019/08/11 23:31:12 by fmiraill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_PUTIN(int **map)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			ft_putchar(map[x][y] + 48);
			ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		x = 0;
		y++;
	}
}



int **ft_APL(int **map)
{
	int i;

	i = 0;
	map = ((int**)malloc(sizeof(int*) * 4));
	while(i < 4)
	{
		map[i] = ((int*)malloc(sizeof(int) * 4));
		i++;
	}
	return (map);
}

int	find_case(int **tab, int j, int i)
{
	if (j >= 0 && j <= 3)
	{
		return (tab[j][i]);
	}
	if (j >= 4 && j <= 7)
	{
		return (tab[j - 4][3 - i]);
	}
	if (j >= 8 && j <= 11)
	{
		return (tab[i][j - 8]);
	}
	if (j >= 12 && j <= 15)
	{
		return (tab[3 - i][j - 12]);
	}
	return (-1);
}

int		sanity_check(int *params, int **map, int j)
{
	int		i;
	int		count;
	int		max;
	int		macase;

	i = 0;
	count = 0;
	max = 0;
	while (i < 4)
	{
		macase = find_case(map, j, i);
		if (macase == 0)
			return (1);
		if (macase > max)
		{
			count++;
			max = macase;	
		}
		i++;
	}
	return (count == params[j]);
}

int		build_grid(int	*params, int **map, int pos)
{
	int	i;
	int		correct;
	int		j;

	i = 0;
	j = 0;
	if (pos == 16)
		return (1);
	while (++i <= 4)
	{
		map[pos % 4][pos / 4] = i;
		correct = 1;
		while (j < 16)
		{

			if (!sanity_check(params, map, j))
			{
				correct = 0;
				//
				//printf("1\n");
			}
			j++;
		}
		if (correct)
			if (build_grid(params, map, pos + 1))
			{
				return (1);
			}
		j = 0;
	}
	map[pos % 4][pos / 4] = 0;
	return (0);
}

int	*ft_put_str_in_tab(char *str)
{
	int i;
	int j;
	int *tab;

	tab = (int*)malloc(sizeof(int) * 16);

	i = 0;
	j = 0;
	while(str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			tab[j] = str[i] - 48;

			j++;
		}
		i++;
	}
	return (tab);
}



int main(int argc, char **argv)
{
	int i;
	int **map;
	int *user_input;
	int j;

	(void)argc;
	j = 0;
	i = 0;
	map = ((int**)malloc(sizeof(int*) * 4));
	while(i < 4)
	{	
		map[i] = ((int*)malloc(sizeof(int) * 4));
		while (j < 4)
		{
			map[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	if (argv[1][k % ] == " ")
	{
	user_input = ft_put_str_in_tab(argv[1]);
	}
	else
		printf("ERROR\n"); 
	if(!(build_grid(user_input, map, 0)))
	{
		printf("ERROR\n");
		return (0);
	}		
	ft_PUTIN(map);	
}
