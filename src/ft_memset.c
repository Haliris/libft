void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	char	*str;
	
	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
