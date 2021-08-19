/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:19:38 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/18 23:19:39 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0;
	last = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = i;
	}
	if (c == '\0')
	{
		last = i;
	}
	if (last != -1)
		return (s[last]);
	return (NULL);
}
