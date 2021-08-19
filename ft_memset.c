/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:26:35 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/18 22:56:04 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (str[n] > 0)
	{
		str[n] = c;
		n--;
	}
	return (s);
}