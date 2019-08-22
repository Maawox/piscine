/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 11:59:50 by ercordho          #+#    #+#             */
<<<<<<< HEAD:ex00/Erwann/dictionary.h
<<<<<<< HEAD:ex00/dictionary.h
/*   Updated: 2019/08/17 16:31:46 by mderoir          ###   ########.fr       */
=======
/*   Updated: 2019/08/17 22:27:03 by ercordho         ###   ########.fr       */
>>>>>>> 3b926e5503e39affddffbff7ec6354d980209c15:ex00/Erwann/dictionary.h
=======
/*   Updated: 2019/08/18 21:38:43 by ercordho         ###   ########.fr       */
>>>>>>> b18843871455fc060112bd5546ad1aa6328d6b72:ex00/dictionary.h
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
# define DICTIONARY_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct s_dico {
	char *clef;
	char *mot;
	t_dico *next;
} t_dico;
void	ft_putstr(char *str);
char	**ft_split(char *str, char *charset);
void	ft_error(int n);
int		ft_read_argv(char *argv);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *str);
int		ft_nblen(char *str);
void	ft_split_nb(char *str);
char	*ft_strcat(char *dest, char src);
int		ft_find_lenght(char *str);
#endif
