/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteissie <jteissie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:14:10 by jteissie          #+#    #+#             */
/*   Updated: 2024/03/27 14:28:53 by jteissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_sep(char c, char sep)
{
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

static int	count_words(char const *str, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (check_sep(str[i], sep)
			&& !check_sep(str[i - 1], sep))
			words++;
		i++;
	}
	return (words);
}

static char	*build_str(char const *str, int index, int word_index)
{
	char	*split_str;
	int		i;

	i = 0;
	split_str = malloc(sizeof(char) * word_index + 1);
	if (!split_str)
		return (NULL);
	while (word_index > 0)
	{
		split_str[i] = str[index - word_index];
		i++;
		word_index--;
	}
	split_str[i] = '\0';
	return (split_str);
}

static char	**assemble(char **split, char const *s, char c)
{
	int	i;
	int	word_index;
	int	split_index;

	i = 0;
	word_index = 0;
	split_index = 0;
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

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	words = 0;
	words = count_words(s, c);
	split = malloc(sizeof(char *) * words + 1);
	if (!split)
		return (NULL);
	return (assemble(split, s, c));
}
