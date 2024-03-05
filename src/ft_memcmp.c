int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;
	unsigned const char	*str_1;
	unsigned const char	*str_2;

	i = 0;
	str_1 = s1;
	str_2 = s2;
	while (i < n)
	{
		if (str_1[i] != str_2[i])
			return (str_1[i] - str_2[i]);
		i++;
	}
	return (0);
}
