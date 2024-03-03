char    *strncmp(char *s1, char *s2, int size)
{
    int i;

    i = 0;
    while (i < n - 1 && (s1[i] || s2[i])) //n ou n-1 jsp
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}