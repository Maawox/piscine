#include <stdio.h>
#include "ft_split.c"

int main()
{
	char *i = "asdsd.fs/df;df//sdfsdf;-";
	char *separator = ";./";
	int x;
	// printf("%d\n",x = return_charset_pos(1, i, separator));
	// printf("STade\n");
	// printf("%s\n", return_split_string_part(6, (x - 1), i));
	printf("%s\n", return_count_of_words(i, separator));
	// ft_putstr(ft_split(i, separator)[1]);
	return 0;
}