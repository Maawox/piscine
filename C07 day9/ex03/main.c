#include "ft_strjoin.c"

int main (int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc - 1, argv, argv[argc - 1]));
}