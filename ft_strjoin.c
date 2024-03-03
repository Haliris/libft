#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int	joined_len;
	int	i;
	int	parse_index;

	i = 0;
	parse_index = 0;
	joined_len = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc (sizeof(char) * joined_len + 1);
	if (!joined)
		return (NULL);
	while (s1[parse_index])
	{
		joined[i] = s1[parse_index];
		i++;
		parse_index++;
	}
	parse_index = 0;
	while (s2[parse_index])
	{
		joined[i] = s2[parse_index];
		i++;
		parse_index++;
	}
	joined[i] = '\0';
	return (joined);
}
