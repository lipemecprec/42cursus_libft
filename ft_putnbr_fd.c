/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:43:43 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/31 23:13:57 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putdigit_fd(int n, int fd)
{
	char	c;

	c = n + '0';
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = (long int)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putdigit_fd(nbr % 10, fd);
}
