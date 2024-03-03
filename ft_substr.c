
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	int	i;

	i = 0;
	sub_str = malloc (sizeof(char) * len + 1); //byte null inclu dans len ou non?
	if (!sub_str)
		return (NULL);
	while (s[start] && i >= len)
	{
		sub_str[i] = s[start];
		start++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
