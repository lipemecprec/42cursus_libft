/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:16:22 by faguilar          #+#    #+#             */
/*   Updated: 2021/09/01 20:07:44 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	remmsub;

	if (!s)
		return (NULL);
	remmsub = ft_strlen(s) - start;
	if (start < ft_strlen(s))
	{
		if (remmsub > len)
			sub = (char *)ft_calloc(sizeof(char), len + 1);
		else
			sub = (char *)ft_calloc(sizeof(char), remmsub + 1);
		if (!sub)
			return (NULL);
		ft_strlcpy(sub, &s[start], len + 1);
	}
	else
		sub = (char *)ft_calloc(1, 1);
	return (sub);
}
