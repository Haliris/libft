void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	const unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
