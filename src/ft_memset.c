void	*ft_memset(void *s, int c, int n)
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
