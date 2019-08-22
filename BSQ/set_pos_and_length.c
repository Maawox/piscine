/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pos_and_length.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:30:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/21 17:28:03 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int check_if_is_free(int x_pos, char *tab, int length)
{
	int i = 0;
	while (i < length)
	{
		if (tab[x_pos + i++] != '.')
			return (0);
	}
	return (1);
}

int check_if_is_free_x_y(char **tab, int x_pos, int y_pos, int length)
{
	int mom_y_pos = 1;
	while (mom_y_pos <= g_min_length
		&& check_if_is_free(x_pos, tab[y_pos + mom_y_pos++], g_min_length + 1))
	if (mom_y_pos == g_min_length)
	{

		return (1);
	}
	return (0);
}

void set_pos_and_length(char **map, int height_map)
{
	int x_pos = 0;
	int y_pos = 0;
	
	while (y_pos < (height_map - g_min_length - 1) && map[y_pos])
	{
		while (map[y_pos][x_pos - g_min_length - 1])
		{
			while(check_if_is_free(x_pos, map[y_pos], g_min_length + 1))
			{
				if(check_if_is_free_x_y(map, x_pos, y_pos, g_min_length + 1))
				{
					g_ref_y_pos = y_pos;
					g_ref_x_pos = x_pos;
					g_min_length++;
				}	
				else 
					break;
			}
			x_pos++;
		}
		y_pos++;
	}

}
