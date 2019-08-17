/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 15:31:59 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/03 19:59:14 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	char_premiere_ligne(int i, int x)
{
	char c;

	if (i == 0)
		c = 'A';
	else if (i == x - 1)
		c = 'A';
	else
		c = 'B';
	return (c);
}

char	char_derniere_ligne(int i, int x)
{
	char c;

	if (i == 0)
		c = 'C';
	else if (i == x - 1)
		c = 'C';
	else
		c = 'B';
	return (c);
}

char	char_lignes_intermediaires(int i, int x)
{
	char c;

	if (i == 0)
		c = 'B';
	else if (i == x - 1)
		c = 'B';
	else
		c = ' ';
	return (c);
}

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	c;

	if (x != 0 && y != 0)
	{
		j = 0;
		while (j < y)
		{
			i = 0;
			while (i < x)
			{
				if (j == 0)
					c = char_premiere_ligne(i, x);
				else if (j == y - 1)
					c = char_derniere_ligne(i, x);
				else if (j > 0 && j < y)
					c = char_lignes_intermediaires(i, x);
				ft_putchar(c);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}
