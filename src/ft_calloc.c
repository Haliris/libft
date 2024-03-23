/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteissie <jteissie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:05:28 by jteissie          #+#    #+#             */
/*   Updated: 2024/03/23 17:05:55 by jteissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;
	char	*ptr_char;

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ptr_char = (char *)ptr;
	i = 0;
	while (i < nmemb)
	{
		ptr_char[i] = 0;
		i++;
	}
	return (ptr);
}
