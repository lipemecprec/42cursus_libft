/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 23:47:31 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/21 00:58:15 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destmem;
	unsigned char	*srcmem;
	size_t			i;

	destmem = (unsigned char *)dest;
	srcmem = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destmem[i] = srcmem[i];
		i++;
	}
	return (dest);
}
