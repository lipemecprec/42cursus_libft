/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:16:22 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/31 00:12:08 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	remmlen;

	if (!s)
		return (NULL);
	remmlen = ft_strlen(s) - start;
	if (remmlen >= len)
		sub = (char *)ft_calloc(sizeof(char), len + 1);
	else
		sub = (char *)ft_calloc(sizeof(char), remmlen + 1);
	if (!sub)
		return (NULL);
	if (ft_strlen(s) > start)
		ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
