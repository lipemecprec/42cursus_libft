/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:30:45 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/22 00:40:08 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// #include <ctype.h>
// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	int	i;
// 	int	ft;
// 	int	orig;

// 	i = -254;
// 	while (i <= 254)
// 	{
// 		ft = ft_isalpha(i);
// 		orig = isalpha(i);
// 		if (!ft != !orig)
// 			printf("isAlpha(%c) - NG: ft: %d e orig: %d\n", i, ft, orig);
// 		i++;
// 	}
// 	i = -254;
// 	while (i <= 254)
// 	{
// 		ft = ft_isdigit(i);
// 		orig = isdigit(i);
// 		if (!ft != !orig)
// 			printf("isAlpha(%c) - NG: ft: %d e orig: %d\n", i, ft, orig);
// 		i++;
// 	}

// 	char 	strlcat_s[10] =  "123456789";
// 	char 	strlcat_d[10] =  "abcdefghi";
// 	char 	strlcat_d2[10] = "abcdefghi";
// 	int 	i = 0;
// 	size_t	strlcat_a;
// 	size_t	strlcat_b;
// 	size_t 	strlcat_size = 5;

//     printf("%s\n", strlcat_s);
//     printf("%s\n", strlcat_d);
//     strlcat_a = strlcat(strlcat_d, strlcat_s, strlcat_size);
//     printf("%s\n", strlcat_d);
//     printf("%li\n", strlcat_a);

//     printf("s = %s\n", strlcat_s);
//     printf("d2 = %s\n", strlcat_d2);
//     strlcat_b = strlcat(strlcat_d2, strlcat_s, strlcat_size);
//     printf("%s\n", strlcat_d2);
//     printf("%li\n", strlcat_b);
}

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		main(int argc, const char *argv[])
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	int		arg;

	dest = src + 1;
	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		if (dest != ft_memmove(dest, "consectetur", 5))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
	}
	else if (arg == 2)
	{
		if (dest != ft_memmove(dest, "con\0sec\0\0te\0tur", 10))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
	}
	else if (arg == 3)
	{
		if (dest != ft_memmove(dest, src, 8))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
	}
	else if (arg == 4)
	{
		if (src != ft_memmove(src, dest, 8))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
	}
	else if (arg == 5)
	{
		if (src != ft_memmove(src, dest, 0))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
	}
	return (0);
}
