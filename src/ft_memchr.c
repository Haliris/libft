void	*ft_memchr(const void *s, int c, unsigned int n)
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
