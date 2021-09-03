/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 01:34:41 by faguilar          #+#    #+#             */
/*   Updated: 2021/09/02 21:25:07 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (size == 0)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i < size)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && ((i + j) < size))
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
