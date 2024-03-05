int     ft_atoi(const char *nptr)
{
    int i;
    int result;
    int minus;

    i = 0;
    result = 0;
    minus = 0;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            minus = 1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
    if (minus)
        result *= -1;
    return (result);
}