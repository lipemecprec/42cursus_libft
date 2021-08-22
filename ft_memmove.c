/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:44:43 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/22 00:39:07 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;

	temp = (char *)malloc(n);
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, src, n);
	ft_strlcpy(dest, temp, n);
	free(temp);
	return ((void *)dest);
}

