#include "ft_tail.h"

char	*ft_strdup(char *src)
{
	char	*cpysrc;
	int		len;

	len = ft_strlen(src);
	if (src == 0)
		return (NULL);
	if (!(cpysrc = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	cpysrc = ft_strcpy(cpysrc, src);
	return (cpysrc);
}