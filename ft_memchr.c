/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:56:05 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/19 23:22:53 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i <= n)
	{
		if(str[i] == (unsigned char *)c)
			return (str[i]);
		n++;
	}
	return (NULL);
}
