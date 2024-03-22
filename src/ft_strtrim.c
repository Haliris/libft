/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteissie <jteissie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:37:51 by jteissie          #+#    #+#             */
/*   Updated: 2024/03/22 15:11:12 by jteissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t   ft_strlen(char const *str)
{
  size_t  i;

  i = 0;
  while(str[i])
    i++;
  return (i);
}

static int  ft_isset(char c, char const *set)
{
  size_t  i;

  i = 0;
  while(set[i])
  {
    if (set[i] == c)
      return (1);
    i++;
  }
  return (0);
}

char  *ft_strtrim(char const *s1, char const *set)
{
  size_t  start;
  size_t  end;
  size_t  i;
  char    *str;
  
  start = 0;
  end = ft_strlen(s1);
  while(s1[start] && ft_isset(s1[start], set))
    start++;
  while(end > start && ft_isset(s1[end - 1], set))
    end--;
  str = malloc(sizeof(char) * (end - start) + 1);
  if (!str)
    return (NULL);
  i = 0;
  while (start < end)
    str[i++] = s1[start++];
  str[i] = 0;
  return (str);
}

/*
#include <stdio.h>

int main(int argc, char *argv[])
{
  (void) argc;
  printf("%s\n", ft_strtrim(argv[1], argv[2]));
}*/
