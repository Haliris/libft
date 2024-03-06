#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;
	char	*ptr_char;

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ptr_char = (char *)ptr;
	i = 0;
	while (i < nmemb)
	{
		ptr_char[i] = 0;
		i++;
	}
	return (ptr);
}
