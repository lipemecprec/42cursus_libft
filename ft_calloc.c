/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 02:01:54 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/27 22:02:37 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb * size <= 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == (NULL))
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
