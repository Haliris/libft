#ifndef LIBFT_H
# define LIBFT_H
int     ft_isdigit(char c);
int     ft_isalpha(char c);
int     ft_isalnum(char c);
int     ft_isascii(char c);
int     ft_isprint(char c);
int     ft_strlen(char *str);
char    ft_toupper(char c);
int     ft_atoi(const char *nptr);
char    ft_tolower(char c);
char    *ft_strchr(char *str, char c);
int     ft_strncmp(char *s1, char *s2, int size);
#endif