/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteissie <jteissie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:36:54 by jteissie          #+#    #+#             */
/*   Updated: 2024/03/23 17:37:28 by jteissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

const char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
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
