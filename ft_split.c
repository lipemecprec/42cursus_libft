/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:15:31 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/26 22:05:32 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_splitcount(char const *s, char c)
{
	int	i;
	int	size;
	int	word;

	i = 0;
	word = 0;
	size = 0;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			// printf("size: %d\n", size);
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
	// printf("words: %d\n", word);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	size_t	size;
	int		slen;
	char	**split;

	slen = ft_strlen(s);
	split = (char **)ft_calloc(sizeof(char *), ft_splitcount(s, c) + 1);
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	size = 0;
	while (i < slen + 1 && slen > 0)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (size > 0)
			{
				split[j] = (char *)ft_calloc(sizeof(char), size + 1);
				if (split[j] != (NULL))
					ft_strlcpy(split[j], &s[i - size], size + 1);
				size = 0;
				j++;
			}
			if(s[i] == '\0')
				split[j] = ft_calloc(0, 0);
		}
		else
			size++;
		i++;
	}
	return (split);
}
