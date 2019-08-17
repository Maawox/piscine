#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_PUTIN(int **map, int y, int x, int base) //
{
	while (y < base )
	{	
		while (x < base )
		{
			ft_putchar(map[y][x] + 48);
			x++;
		}
		ft_putchar('\n');
		x = 0;
		y++;
	}	
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int **ft_APL(int **allocataire, int quotientfamilial)
{
	int i;

	i = 0;
	allocataire = ((int**)malloc(sizeof(int*) * quotientfamilial));
	while(i < quotientfamilial)
	{
		allocataire[i] = ((int*)malloc(sizeof(int) * quotientfamilial));
		i++;
	}	
	return (allocataire);
}

int *ft_put_str_in_tab(char **str, int base)
{
	int i;
	int j;
	int *tab;

	i = 0;
	j = 0;
	while (str[1][i])
	{
		if (str[1][i] >= '1' && str[1][i] <= base)
		{
			printf("4\n");
			tab[j] = str[1][i] - 48; 												//on entre les valeurs  le tab
			j++;
		}	
		i++;
	}
	return(tab);
}

int check_line_column(int v, int **map, int x, int y)
{
	int ypos;
	int xpos;

	ypos = y;
	xpos = x;
	while (y < 4 - 1)
	{	
		if (v == map[y][xpos])
			return(0);
		y++;
	}
	while (y > 0)
	{	
		if (v == map[y][xpos])
			return(0);
		y--;
	}
	while (x < 4 - 1)
	{
		if (v == map[ypos][x])
			return(0);
		x++;
	}
	while (x > 0)
	{	
		if (v == map[ypos][x])
			return(0);
		x--;
	}
	return (1);
}

int ft_check()
{
	
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int **map;											// initialisation de la map a afficher
		int *user_input;									// init. du tableau des valeurs utiisateurs
		int base;											// recuperation de la base pour malloc et gerer les valeurs utilisateurs
		int x;												// coordonees axe des ordonnees map
		int y;												// coordonees axe des abcisses map
		int i;												// curseur du tableau user_input
		int v;												// valeur comprise dans la base qui sera entree dans map
		base = (((ft_strlen(argv[1]) + 1 ) / 2) / 4);		// on recupere la base
		user_input = ft_put_str_in_tab(argv, base);			// on recupere les variables utilisateurs entrees en argument dans un tableau d'int
																			
		map = ft_APL(map, base);
		printf("base = %d\n", base);
		x = base - 1;												// valeur de x fin de la ligne
		y = base - 1;												// valeur de y en bas de colonne
		i = 0;												// init. curseur
		v = base;												// init. compteur
		ft_check(map, )                                                    
		y = 0;
		x = 0;
			ft_PUTIN(map, y ,x, base);
	}
}