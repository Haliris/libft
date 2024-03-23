/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteissie <jteissie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:38:32 by jteissie          #+#    #+#             */
/*   Updated: 2024/03/23 16:39:13 by jteissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	total_len;

	i = 0;
	dest_len = ft_strlen(dest);
	total_len = ft_strlen(dest) + ft_strlen(src);
	if (dest_len >= size)
		return (total_len);
	while (i < size - 1 && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}
