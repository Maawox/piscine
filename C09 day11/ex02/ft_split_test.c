#include <stdlib.h>

int		ft_check_charset(char c, char *charset)
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
	return (!ft_check_charset(c, charset) && ft_check_charset(c_b, charset));
}

int		ft_count_word(char *str, char *charset)
{
	int	words_count;
	int	i;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')
	{
		if (ft_check_word(str[i], str[i - 1], charset) ||
			(!ft_check_charset(str[i], charset) && i == 0))
			words_count++;
		i++;
	}
	return (words_count);
}

int		*ft_count_char(char *str, char *charset)
{
	int	index;
	int	i;
	int	words_count;
	int	*words_size;

	i = 0;
	words_count = ft_count_word(str, charset);
	words_size = malloc(words_count * sizeof(int));
	while (i <= words_count)
	{
		words_size[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (!ft_check_charset(str[i], charset))
			words_size[index]++;
		else if (i > 0 && !ft_check_charset(str[i - 1], charset))
			index++;
		i++;
	}
	return (words_size);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;
	int		index;
	int		*words_size;

	words = malloc((ft_count_word(str, charset) + 1) * sizeof(char*));
	words_size = ft_count_char(str, charset);
	index = 0;
	j = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!ft_check_charset(str[i], charset))
		{
			if (i == 0 || ft_check_word(str[i], str[i - 1], charset))
				words[index] = malloc(words_size[index] * sizeof(char));
			words[index][j] = str[i];
			words[index][++j] = '\0';
		}
		else if (i > 0 && !ft_check_charset(str[i - 1], charset) && ++index)
			j = 0;
	}
	words[ft_count_word(str, charset)] = 0;
	return (words);
}