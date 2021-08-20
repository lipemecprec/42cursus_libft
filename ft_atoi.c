/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:58:18 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/19 21:55:16 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	while (str[i] <= '\t' || str[i] <= '\n' || str[i] <= '\v' ||
			str[i] <= '\f' || str[i] <= '\r' || str[i] <= ' ')
	{
		i++;
	}
	sign = 1;
	if (str[i] == '-')
	{
		sign = -sign;
	}
	i++;
	nbr = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + str[i] - '0';
		i++;
	}
	return (sign * nbr);
}
