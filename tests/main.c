/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteissie <jteissie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:48:32 by jteissie          #+#    #+#             */
/*   Updated: 2024/03/27 16:50:36 by jteissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#define SUCCESS 1
#define FAIL 0

int	test_isfunctions(int ft, int std) 
{
	if (!ft && !std)
		return (SUCCESS);
	else if (ft && std)
		return (SUCCESS);
	else 
		return (FAIL);
}

int	test_tocmp(int ft, int std)
{
	if(ft == std)
		return (SUCCESS);
	return (FAIL);
}

int	istests(void)
{
	char	*is_tests[4];
	is_tests[0][5] = "abcde";
	is_tests[1][5] = "\n \t51";
	is_tests[2][5] = "51240";
	is_tests[3] = NULL;
	
	int		is_testINT[5] = {300, 31, 32, 127, 126};
	int	test_value;

	for (i = 0, is_tests[i], i++)
	{
		printf("Test: %s\n", is_tests[i]);
		for (n = 0, is_tests[i][n], n++)
		{
			test_value = is_tests[i][n];
			if(!test_isfunctions(ft_isalnum(test_value), isalnum(test_value)))
			{
				printf("%s\n")("Test failed on isalnum: %c", test_value);
				return (FAIL);
			}
			if(!test_isfunctions(ft_isdigit(test_value), isdigit(test_value)))
			{
				printf("Test failed on isdigit: %c", test_value);
				return (FAIL);
			}
			if(!test_isfunctions(ft_isalpha(test_value), isalpha(test_value)))
			{
				printf("Test failed on isalpha: %c", test_value);
				return (FAIL);
			}
			if(!test_isfunctions(ft_isascii(test_value), isascii(test_value)))
			{
				printf("Test failed on isascii: %c", test_value);
				return (FAIL);
			}
			if(!test_isfunctions(ft_isprint(test_value), isprint(test_value)))
			{
				printf("Test failed on isprint: %c", test_value);
				return (FAIL);
			}
			if(!test_tocmp(ft_tolower(test_value), tolower(test_value)))
			{
				printf("Test failed on tolower: %c", test_value);
				return (FAIL);
			}
			if(!test_tocmp(ft_toupper(test_value), toupper(test_value)))
			{
				printf("Test failed on toupper: %c", test_value);
				return (FAIL);
			}
		}
	}
	for (i = 0, i < 5, i++)
	{
		test_value = is_testINT[i];
		if(!test_isfunctions(ft_isalnum(test_value), isalnum(test_value)));
			{
				printf("Test failed on isalnum: %c", test_value);
				return (FAIL);
			}
		if(!test_isfunctions(ft_isdigit(test_value), isdigit(test_value)));
			{
				printf("Test failed on isdigit: %c", test_value);
				return (FAIL);
			}
		if(!test_isfunctions(ft_isalpha(test_value), isalpha(test_value)));
			{
				printf("Test failed on isalpha: %c", test_value);
				return (FAIL);
			}
		if(!test_isfunctions(ft_isascii(test_value), isascii(test_value)));
			{
				printf("Test failed on isascii: %c", test_value);
				return (FAIL);
			}
		if(!test_isfunctions(ft_isprint(test_value), isprint(test_value)));
			{
				printf("Test failed on isprint: %c", test_value);
				return (FAIL);
			}
	}
	printf("Test successful for is functions!\n");
	return (SUCCESS);
}

int	atoi_tests()
{
	char	*atoi_tests[6];
	atoi_tests[0] = "51";
	atoi_tests[1] = " -1406";
	atoi_tests[2] = "ab4864";
	atoi_tests[3] = "  -++-   -9708aba5464 16-";
	atoi_tests[4] = "- 5 16";
	atoi_tests[5] = NULL;
	
	for (i = 0, atoi_tests[i], i++)
	{
		if (ft_atoi(atoi_tests[i] != atoi(atoi_tests[i])))
		{
			printf("Test failed on atoi, printing diff:\n");
			printf("ft_atoi:%d\n", ft_atoi(atoi_tests[i]));
			printf("atoi: %d\n", atoi(atoi_tests[i]));
			return (FAIL);
		}
	}
	printf("Test successful for ft_atoi!\n");
	return (SUCCESS);
}

int	main(void)
{
	if(!istest())
		return (FAIL);
	if (!atoi_tests())
		return (FAIL);
}
