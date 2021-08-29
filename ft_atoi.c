/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:58:18 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/29 00:16:12 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	atoierror(int sign)
{
	if (sign > 0)
		return (-1);
	else
		return (0);
}

static int	atoiisspace(const char *nptr, int i)
{
	unsigned char	c;

	c = nptr[i];
	return (c == '\t' || c == '\n' || c == '\v' || \
	c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	nbr;
	int	size;

	i = 0;
	while (atoiisspace(nptr, i))
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	nbr = 0;
	size = 0;
	while (('0' <= nptr[i]) && (nptr[i] <= '9'))
	{
		if (++size == 20)
			return (atoierror(sign));
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * nbr);
}
