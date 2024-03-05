int     ft_isalnum(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}