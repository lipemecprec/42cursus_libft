/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:30:45 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/22 13:05:25 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <bsd/string.h>

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

	char 	strlcat_s[10] =  "123456789";
	char 	strlcat_d[10] =  "abcdefghi";
	char 	strlcat_d2[10] = "abcdefghi";
	int 	i = 0;
	size_t	strlcat_a;
	size_t	strlcat_b;
	size_t 	strlcat_size = 5;

    printf("%s\n", strlcat_s);
    printf("%s\n", strlcat_d);
    strlcat_a = strlcat(strlcat_d, strlcat_s, strlcat_size);
    printf("%s\n", strlcat_d);
    printf("%li\n", strlcat_a);

    printf("s = %s\n", strlcat_s);
    printf("d2 = %s\n", strlcat_d2);
    strlcat_b = strlcat(strlcat_d2, strlcat_s, strlcat_size);
    printf("%s\n", strlcat_d2);
    printf("%li\n", strlcat_b);
}
