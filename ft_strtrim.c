/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:45:21 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/26 23:19:37 by faguilar         ###   ########.fr       */
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

static unsigned int	ft_getstart(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (ft_inset(s1[i], set) == 1))
		i++;
	return (i);
}

static unsigned int	ft_getend(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	if(i != 0)
		i--;
	while (i >= 0)
	{
		if (ft_inset(s1[i], set) != 1)
	 		break;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*trim;
	size_t			len;

	if(s1)
	{
		start = ft_getstart(s1, set);
		end = ft_getend(s1, set);
		len = end - start + 1;
	}
	else
		len = 0;
	trim = calloc(len, sizeof(char));
	if (!trim)
		return (NULL);
	if (len > 0)
		trim = ft_substr(s1, start, len);
	else
		trim = "";
	trim[len + 1] = '\0';
	return (trim);
}
