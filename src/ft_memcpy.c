void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	const char*	src_str;
	char*	dest_str;

	i = 0;
	src_str = src;
	dest_str = dest;
	while (i < n)
	{
		dest_str[i] = src_str[i];	
		i++;
	}
	return ((void *)dest_str);
}
