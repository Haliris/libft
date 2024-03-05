void	ft_bzero(void *s, int n)
{
	int	i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (s);
}
