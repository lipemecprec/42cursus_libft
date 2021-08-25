/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 20:50:47 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/24 22:25:40 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n >= 0)
	{
		n = n / 10;
		i++;
		if (n == 0)
			break ;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*a;
	int			len;
	long int	nbr;

	nbr = (long int)n;
	len = ft_intlen(nbr);
	a = (char *)ft_calloc(sizeof(char), len + 1);
	if (a == (NULL))
		return (NULL);
	a[len] = '\0';
	if (n == 0)
		a[--len] = '0';
	if (n < 0)
	{
		a[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		a[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (a);
}
