#include <stdlib.h>

static int  ft_strlen(char *str)
{
  int i;

  i = 0;
  while(str[i++])
  return (i);
}

char  *ft_strtrim(char const *s1, char const *set)
{
  char  *trimmed;
  int i;

  i = 0;
  trimmed = malloc(sizeof(char) * ft_strlen(s1) + 1);
  if(!trimmed)
    return (NULL);
  while(s1[i++])
  {

  }
}
