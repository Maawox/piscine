#include <stdlib.h>

int        ft_strlen(char **str, int size, char *sep)
{
   int i;
   int j;
   int k;
   int length;

   i = 0;
   length = 0;
   while (i < size)
   {
       j = 0;
       k = 0;
       while (str[i][j])
       {
           j++;
           length++;
       }
       while (sep[k] && i != size - 1)
       {
           k++;
           length++;
       }
       i++;
   }
   return (length);
}

char    *ft_strcat(char *dest, char **strs, char *sep, int size)
{
   int i;
   int j;
   int k;
   int l;

   i = 0;
   l = 0;
   while (i < size)
   {
       j = -1;
       k = -1;
       while (strs[i][++j])
       {
           dest[l] = strs[i][j];
           l++;
       }
       while (sep[++k] && i < size - 1)
       {
           dest[l] = sep[k];
           l++;
       }
       i++;
   }
   dest[l] = '\0';
   return (dest);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
   char    *dest;
   int        i;

   i = 0;
   dest = malloc(sizeof(char) * (ft_strlen(strs, size, sep)) + 1);
   if (size == 0)
       return (dest);
   ft_strcat(dest, strs, sep, size);
   return (dest);
}