/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:44:43 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/30 23:05:31 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destc;
	unsigned char	*srcc;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	i = 1;
	if (dest > src)
	{
		while (i <= n)
		{
			destc[n - i] = srcc[n - i];
			i++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
