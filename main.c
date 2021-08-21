/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:30:45 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/19 21:38:03 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	i;
	int	ft;
	int	orig;

	i = -254;
	while (i <= 254)
	{
		ft = ft_isalpha(i);
		orig = isalpha(i);
		if (!ft != !orig)
			printf("isAlpha(%c) - NG: ft: %d e orig: %d\n", i, ft, orig);
		i++;
	}
	i = -254;
	while (i <= 254)
	{
		ft = ft_isdigit(i);
		orig = isdigit(i);
		if (!ft != !orig)
			printf("isAlpha(%c) - NG: ft: %d e orig: %d\n", i, ft, orig);
		i++;
	}
}
