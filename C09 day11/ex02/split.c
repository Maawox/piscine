/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderoir <mderoir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 21:19:27 by mderoir           #+#    #+#             */
/*   Updated: 2019/08/19 14:54:26 by mderoir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
	
int		ft_check_charset(char c, char *charset) //si le caractere envoye en parametre est identique a l'un des caractere present dans le charset, c-a-d que le caractere est un separateur la fonction renvoie 1
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	return (0);
}

int		ft_check_word(char c, char c_b, char *charset)
{
	return (!ft_check_charset(c, charset) && ft_check_charset(c_b, charset));   // retourne 1 si le caratere n'est pas un charset et que le caractere d'avant en est un
}

int		ft_count_word(char *str, char *charset)                        //comptage du nb de mot
{
	int	words_count;
	int	i;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')									// on parcours la chaine de caractere
	{	
		if (ft_check_word(str[i], str[i - 1], charset) ||     
			(!ft_check_charset(str[i], charset) && i == 0))				
			words_count++;									//si caractere avant est charset et caractere courant n'en est pas un on incremente le nb de mot
		i++;
	}
	return (words_count);									// on retourne le nb de mot qui nous permet de malloc
}

int		*ft_count_char(char *str, char *charset)			// comptage du nb de char par mot
{
	int	index;
	int	i;
	int	words_count;
	int	*size_stock;										

	i = 0;													
	words_count = ft_count_word(str, charset);				// on reprend le nb de mot afin d'initialiser le tab d'int
	size_stock = malloc(words_count * sizeof(int));
	while (i <= words_count)								// on parcours les cases du tab correspondant a chaque mot en initialisant chaque valeur a zero afin de preparer l'incrementation
	{																
		size_stock[i] = 0;
		i++;
	}
	i = 0;													
	index = 0;
	while (str[i] != '\0')										// tant qu'on est pas a la fin de la chaine de caractere on teste chaque caractere
	{
		if (!ft_check_charset(str[i], charset))					//on check si le caractere n'est pas un separateur. s'il n'en est pas un on incremente la valeur wordsize a l'index correspondant a la place du mot
			size_stock[index]++;								// la derniere incrementation prend en compte le \0
		else if (i > 0 && !ft_check_charset(str[i - 1], charset))	// si c'en est un on passe au mot suivant en incrementant l'index.
			index++;
		i++;													// puis on teste le caractere suivant
	}
	return (size_stock);										// on retourne le tab
}

char	**ft_split(char *str, char *charset)
{
	char	**string_tab;														// declaration tab de  chaine de caractere
	int		i;																	
	int		j;
	int		index;
	int		*size_stock;													// declaration d'un tableau d'int qui permet de stocker la taille de chaque mot

	string_tab = malloc((ft_count_word(str, charset) + 1) * sizeof(char*));		// malloc du tab de chaine en fonction du nb de mot + 1 (backslash 0)
	size_stock = ft_count_char(str, charset);								// on recupere le tab contenant la taille des mots en fonctions de leur place dans la phrase
	index = 0;					
	j = 0;
	i = -1;
	while (str[++i] != '\0')												// on parcours la chaine de caractere
	{																		
		if (!ft_check_charset(str[i], charset))								// si le caractere courant n'est pas un separateur
		{
			if (i == 0 || ft_check_word(str[i], str[i - 1], charset))		// si on est a la premiere case de la chaine, ou si le caractere courant est un debut de mot ou dans un mot
				string_tab[index] = malloc(size_stock[index] * sizeof(char));	// on malloc la chaine en fonction de la size du mot correspondant stockee dans le tab
			string_tab[index][j] = str[i];										// on copie le caractere courant de la chaine str dans le tab a l'index j
			string_tab[index][++j] = '\0';										// on place un NULL a l'index j++ (qui sera remplace si la prochain caractere n'est pas un charset)
		}
		else if (i > 0 && !ft_check_charset(str[i - 1], charset) && ++index) //si on est pas au debut de la chaine et si le caractere courant est un separateur on passe au mot suivant en incrementant l'index qui parcours a la fois le tab de chaine de caractere et le tab contenant la taille des mots
			j = 0;
	}
	string_tab[ft_count_word(str, charset)] = 0;									//on place un \0 a la fin du tab de chaine
	return (string_tab);															// on retourne le tab de chaine
}

int main (int argc, char **argv)
{
	int i;
	i = 0;
	char **tab;
	tab = ft_split(argv[1],argv[2]);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}