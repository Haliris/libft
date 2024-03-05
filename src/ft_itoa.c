#include <stdlib.h>

void	ft_putnbr_array(char *str, int nb, int *index)
{
	long int	number;

	number = nb;
	if (number < 0)
	{
		str[0] = '-';
		number *= -1;
		*index = *index + 1;
	}
	if (number > 9)
	{
		ft_putnbr_array(str, number / 10, index);
		str[*index] = number % 10 + '0';
	       *index = *index + 1;
       		return ;	       
	}
	str[*index] = number + '0';
	*index = *index + 1;
	return ;
}

char	*ft_itoa(int n)
{
	int	digits;
	char	*string;
	int	digits_count;
	int	i;

	digits = n;
	digits_count = 0;
	i = 0;
	if (n == 0)
		digits_count = 1;
	while (digits != 0)
	{
		digits /= 10;
		digits_count++;
	}
	if (n < 0)
		digits_count++;
	string = malloc(sizeof(char) + digits_count + 1);
	if (!string)
		return (NULL);
	ft_putnbr_array(string, n, &i);
	string[i] = '\0';
	return (string);
}
