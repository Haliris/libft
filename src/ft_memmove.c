/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteissie <jteissie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:35:42 by jteissie          #+#    #+#             */
/*   Updated: 2024/03/23 16:36:56 by jteissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	const int	*from;
	int			*to;

	from = src;
	to = dest;
	if (to > from)
	{
		i = n;
		while (i >= 0)
		{
			to[i - 1] = from[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			to[i] = from[i];
			i++;
		}
	}
	return (dest);
}
