/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteissie <jteissie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:48:32 by jteissie          #+#    #+#             */
/*   Updated: 2024/03/27 21:17:08 by jteissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <ctype.h>
#define SUCCESS 1
#define FAIL 0
#define SEPARATOR "---------------\n"


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

int	is_tests(void)
{
	int	i;
	int	n;
	char	*is_tests[4];
	is_tests[0] = "abcde";
	is_tests[1] = "\n \t51";
	is_tests[2] = "51240";
	is_tests[3] = NULL;
	
	int		is_testINT[5] = {300, 31, 1000, 127, 126};
	int	test_value;

	for (i = 0; is_tests[i]; i++)
	{
		printf("Test %d: %s\n",i, is_tests[i]);
		for (n = 0; is_tests[i][n]; n++)
		{
			test_value = is_tests[i][n];
			if(!test_isfunctions(ft_isalnum(test_value), isalnum(test_value)))
			{
				printf("Test failed on isalnum: %c", test_value);
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
	for (i = 0; i < 5; i++)
	{
		test_value = is_testINT[i];
		printf("TestINT %d:%d\n", i, test_value);
		if(!test_isfunctions(ft_isalnum(test_value), isalnum(test_value)))
			{
				printf("Test failed on isalnum: %c", test_value);
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
	}
	printf("Test successful for is functions!\n");
	printf("%s", SEPARATOR);
	return (SUCCESS);
}

int	atoi_tests()
{
	int	i;
	char	*atoi_tests[6];
	atoi_tests[0] = "51";
	atoi_tests[1] = " -1406";
	atoi_tests[2] = "ab4864";
	atoi_tests[3] = "-9708aba5464 16-";
	atoi_tests[4] = "- 5 16";
	atoi_tests[5] = NULL;
	
	for (i = 0; atoi_tests[i]; i++)
	{
		printf("Test %d: ft_atoi:%d atoi:%d\n", i, atoi(atoi_tests[i]), ft_atoi(atoi_tests[i]));
		if (ft_atoi(atoi_tests[i]) != atoi(atoi_tests[i]))
		{
			printf("Test failed on atoi, printing diff:\n");
			printf("ft_atoi:%d\n", ft_atoi(atoi_tests[i]));
			printf("atoi: %d\n", atoi(atoi_tests[i]));
			return (FAIL);
		}
	}
	printf("Test successful for ft_atoi!\n");
	printf("%s", SEPARATOR);
	return (SUCCESS);
}

int	stringh_tests()
{
	size_t	i;
	char	*str_tests[6];
	int	strchr_value = 52; //'4'
	size_t	n = 12;
	char	*dup_str;
	char	*ref_str;

	str_tests[0] = "Hello42World";
	str_tests[1] = "         %aa45\n51142ab";
	str_tests[2] = "42School+-+ time";
	str_tests[3] = "";
	str_tests[4] = "aubfvaiufbnpi agdsgd.:q&6948---à)&&art&llyfqf %££¨*uh fù*ù*uiahIOHQanvwpkmr&gfbja ba uhfaiu42h fiaiihahjaoub ha";
	str_tests[5] = NULL;

	for(i = 0; str_tests[i]; i++)
	{
		printf("Test %ld:%s\n", i, str_tests[i]);
		if (ft_strlen(str_tests[i]) != strlen(str_tests[i]))
		{
			printf("Failure on strlen test:%s\n", str_tests[i]);
			return (FAIL);
		}
		if (ft_strchr(str_tests[i], strchr_value) != strchr(str_tests[i], strchr_value))
		{
			printf("Failure on strchr test:%s\n", str_tests[i]);
			return (FAIL);
		}
		if (ft_strrchr(str_tests[i], strchr_value) != strrchr(str_tests[i], strchr_value))
		{
			printf("Failure on strrchr test:%s\n", str_tests[i]);
			printf("ft_strrchr:%s\nstrrchr:%s\n", ft_strrchr(str_tests[i], strchr_value), strrchr(str_tests[i], strchr_value));
			return (FAIL);
		}
		if (ft_strncmp(str_tests[i], str_tests[2], n) != strncmp(str_tests[i], str_tests[2], n))
		{
			printf("Failure on strncmp test:%s\n", str_tests[i]);
			return (FAIL);
		}
		if (ft_strnstr(str_tests[i], "42", n) != strstr(str_tests[i], "42") && strstr(str_tests[i], "42") < &str_tests[i][n])
		{
			printf("Failure on strnstr test:%s\n", str_tests[i]);
			printf("ft_strnstr:%s\nstrstr:%s\ni=%ld\n", ft_strnstr(str_tests[i], "42", n), strstr(str_tests[i], "42"), i);
			return (FAIL);
		}
		dup_str = ft_strdup(str_tests[i]);
		ref_str = strdup(str_tests[i]);
		if (strcmp(dup_str, ref_str) != 0)
		{
			printf("Failure on ft_strdup test:%s\n", str_tests[i]);
			printf("dup_str:%s\nref_str:%s\n", dup_str, ref_str);
			return (FAIL);
		}
		free(dup_str);
		free(ref_str);
	}
	printf("Test succesful for string.h functions!\n");
	printf("%s", SEPARATOR);
	return (SUCCESS);
}

int	main(void)
{
	if(!is_tests())
		return (1);
	if(!atoi_tests())
		return (1);
	if(!stringh_tests())
		return (1);
	printf("Success, Winner winner!!\n");
	return (0);
}
