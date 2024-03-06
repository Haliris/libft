
static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t		strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i])
	{
		src[i] = dest[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
