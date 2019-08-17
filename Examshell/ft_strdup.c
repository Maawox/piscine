#include <strlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char *ft_strdup(char *src)
{
	char *cpystr;
	int len;

	len = strlen(src) + 1;
	if (len < 1)
		return(NULL);
	if(!(cpystr = (char *)malloc(sizeof(char) * len)))
		return(NULL);
	return (ft_strcpy(cpystr, src));
}