/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:45:21 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/22 18:15:40 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static unsigned int	ft_cutstart(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (ft_inset(s1[i], set) == 1))
		i++;
	return (i);
}

static unsigned int	ft_cutend(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	while ((i >= 0) && (ft_inset(s1[i], set) == 1))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*trim;
	size_t			len;

	start = ft_cutstart(s1, set);
	end = ft_cutend(s1, set);
	len = end - start;
	if (len > 0)
		trim = ft_substr(s1, start, len);
	else
		trim = "";
	return (trim);
}
