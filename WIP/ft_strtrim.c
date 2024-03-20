#include <stdlib.h>

static size_t  ft_strlen(const char *str)
{
  int i;

  i = 0;
  while(str[i])
    i++;
  return (i);
}

static const char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	needle_i;
	size_t	needle_len;

	i = 0;
	needle_i = 0;
	needle_len = ft_strlen(needle);
	if (!needle_len || !haystack)
		return (NULL);
	while (i < n && haystack[i])
	{
		while (haystack[i + needle_i] == needle[needle_i])
		{
			needle_i++;
			if (needle_i == needle_len)
				return (&haystack[i]);
		}
		needle_i = 0;
		i++;
	}
	return (NULL);
}

static int  ft_search(char const *s1, char const *set, int *end_position)
{
  int i;
  int search_index;
  int occurence;

  i = 0;
  search_index = 0;
  occurence = 0;
  search_index = ft_strlen(set);
  if (ft_strnstr(s1, set, search_index))
    occurence++;
  i = ft_strlen(s1);
  while (search_index >= 0)
  {
    if (s1[i] != set[search_index])
      break ;
    if (search_index == 0)
    {
      if(occurence == 0)
        *end_position = 1;
      occurence++;
    }
    search_index--;
    i--;
  }
  return (occurence);
}

char  *ft_strtrim(char const *s1, char const *set)
{
  char  *trimmed;
  unsigned int   i;
  int   occurence;
  int   end_position;

  i = 0;
  end_position = 0;
  occurence = ft_search(s1, set, &end_position);
  trimmed = malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set) * occurence) + 1);
  if (!trimmed)
    return (NULL);
  if (occurence && end_position)
  {
    while (i < ft_strlen(s1) - ft_strlen(set))
    {
      trimmed[i] = s1[i];
      i++;
    }
  }
  else if (occurence && !end_position)
  {
    while (i < ft_strlen(s1) - occurence * ft_strlen(set))
    {
      trimmed[i] = s1[i + ft_strlen(set)];
      i++;
    }
  }
  trimmed[i] = '\0';
  return (trimmed);
}

/*
#include <stdio.h>

int main(int argc, char *argv[])
{
  (void) argc;
  printf("%s", ft_strtrim(argv[1], argv[2]));
}*/
