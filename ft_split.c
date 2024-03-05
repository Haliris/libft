#include <stdlib.h>

int	check_sep(char c, char sep)
{
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

int	count_words(char const *str, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (check_sep(str[i], sep) && !check_sep(str[i - 1], sep)) //probleme pour debut string
				words++;
		i++;
	}
	return (words);
}

char	*build_str(char *str, int index, int word_index)
{
	char	*split_str;
	int	i;

	i = 0;
	split_str = malloc(sizeof(char) * word_index + 1);
	if (!split_str)
		return (NULL);
	while (word_index > 0) //pas sur
	{
		split_str[i] = str[index - word_index];
		i++;
		word_index--;
	}
	split_str[i] = '\0';
	return (split_str);
}

char	**ft_split(char *s, char c)
{
	int	i;
	char	**split;
	int	words;
	int	word_index;
	int	split_index;

	i = 0;
	words = 0;
	word_index = 0;
	split_index = 0;
	words = count_words(s, c);
	split = malloc(sizeof(char *) * words + 1);
	while (s[i])
	{
		while (!check_sep(s[i], c))
		{
			word_index++;
			i++;
		}
		if (check_sep(s[i], c) && !check_sep(s[i - 1], c))
		{
			split[split_index] = build_str(s, i, word_index);
			split_index++;
			word_index = 0;
		}
		i++;
	}
	split[split_index] = NULL;
	return (split);
}
