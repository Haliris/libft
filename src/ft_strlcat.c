
static size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}	

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	total_len;

	i = 0;
	dest_len = ft_strlen(dest);
	total_len = ft_strlen(dest) + ft_strlen(src);
	if (dest_len >= size)
		return (total_len);
	while (i < size - 1 && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}
