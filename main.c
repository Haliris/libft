#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int     main(int argc, char *argv[])
{
    (void)argc;
    printf("isalpha: %d\n", isalpha(argv[1][1]));
    printf("ft_isalpha: %d\n", ft_isalpha(argv[1][1]));
    printf("\n");
    printf("isdigit: %d\n", isdigit(argv[1][1]));
    printf("ft_isdigit: %d\n", ft_isdigit(argv[1][1]));
    printf("\n");
    printf("isalnum: %d\n", isalnum(argv[1][1]));
    printf("ft_isalnum: %d\n", ft_isalnum(argv[1][1]));
    printf("\n");
    printf("isascii: %d\n", isascii(argv[1][1]));
    printf("ft_isascii: %d\n", ft_isascii(argv[1][1]));
    printf("\n");
    printf("isprint: %d\n", isprint(argv[1][1]));
    printf("ft_isprint: %d\n", ft_isprint(argv[1][1]));
    printf("\n");
    printf("strlen: %llu\n", strlen(argv[1]));
    printf("ft_strlen: %d\n", ft_strlen(argv[1]));
    printf("\n");
    printf("toupper: %c\n", toupper(argv[1][1]));
    printf("ft_toupper: %c\n", ft_toupper(argv[1][1]));
    printf("\n");
    printf("tolower: %c\n", tolower(argv[1][1]));
    printf("ft_tolower: %c\n", ft_tolower(argv[1][1]));
    printf("\n");
    printf("strchr: %s\n", strchr(argv[1], 'c'));
    printf("ft_strchr: %s\n", ft_strchr(argv[1], 'c'));
    printf("\n");
    printf("strncmp: %llu\n", strncmp(argv[1], "Hello World", 11));
    printf("ft_is_alnum: %d\n", ft_is_alnum(argv[1], "Hello World", 11));
    printf("\n");
    printf("atoi: %d\n", atoi("   -514"));
    printf("ft_atoi: %d\n", ft_atoi("   -514"));
    printf("\n");
}