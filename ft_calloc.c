/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 02:01:54 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/21 11:29:41 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;
	size_t	i;

	arr = (char *)malloc(nmemb * size);
	if (size == 0 || nmemb == 0 || !arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
