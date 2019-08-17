/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 11:59:50 by ercordho          #+#    #+#             */
/*   Updated: 2019/08/17 16:31:46 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
# define DICTIONARY_H
# include <unistd.h>

typedef struct s_dico {
	char *clef;
	char *mot;
	t_dico *next;
} t_dico;
void	ft_putstr(char *str);
#endif
