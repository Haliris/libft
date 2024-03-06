#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
int     ft_isdigit(int c);
int     ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_strlen(char *str);
char    ft_toupper(int c);
int     ft_atoi(const char *nptr);
char    ft_tolower(int c);
char    *ft_strchr(char *str, char c);
int     ft_strncmp(char *s1, char *s2, int size);
char	*ft_strdup(char *s);
#endif
