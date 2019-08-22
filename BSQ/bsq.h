#ifndef BSQ_H
# define BSQ_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int g_min_length = 1;
int g_ref_x_pos = 0;
int g_ref_y_pos = 0;
void 	display_map(char **map);
void	ft_read_map(char *map_file);
char	**ft_split(char *str, char *charset);
int 	ft_is_error(int fd, int errno);
void 	ft_putchar(char c);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
void	set_pos_and_length(char **map, int height_map);
char 	**fill_map(char **map);


#endif