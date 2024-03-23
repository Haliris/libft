/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteissie <jteissie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:12:25 by jteissie          #+#    #+#             */
/*   Updated: 2024/03/23 17:13:53 by jteissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	const char		*src_str;
	char			*dest_str;

	i = 0;
	src_str = src;
	dest_str = dest;
	while (i < n)
	{
		dest_str[i] = src_str[i];
		i++;
	}
	return ((void *)dest_str);
}
