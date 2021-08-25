/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:15:31 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/25 08:55:17 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_splitcount(char const *s, char c)
{
	int	i;
	int	size;
	int	word;

	i = 1;
	word = 0;
	size = 0;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (size > 0)
			{
				word++;
				size = 0;
			}
		}
		else
			size++;
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	size_t	words;
	size_t	size;
	int		slen;
	char	**split;

	slen = ft_strlen(s);
	words = ft_splitcount(s, c);
	split = (char **)ft_calloc(sizeof(char *), words + 2);
	if (!split || words == 0)
		return (NULL);
	i = 0;
	j = 0;
	size = 0;
	while (i < slen + 1)
	{
		size++;
		if (s[i] == c || s[i] == '\0')
		{
			split[j] = (char *)ft_calloc(sizeof(char), size + 1);
			if (split[j] != (NULL))
				ft_strlcpy(split[j], &s[i - size + 1], size);
			size = 0;
			j++;
		}
		i++;
	}
	split[j] = ft_calloc(0, 0);
	return (split);
}
