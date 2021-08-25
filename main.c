/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:30:45 by faguilar          #+#    #+#             */
/*   Updated: 2021/08/25 08:50:16 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <unistd.h>

void	test_ft_isalpha()
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
}

void	test_ft_isdigit()
{
	int	i;
	int	ft;
	int	orig;

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

void	test_ft_strlcat()
{
	char 	strlcat_s[10] =  "123456789";
	char 	strlcat_d[10] =  "abcdefghi";
	char 	strlcat_d2[10] = "abcdefghi";
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

void	test_ft_substr()
{
	char *substr_s = "qwertyuiopasdfghjklzxcvbnm";
	int substr_start = 1;
	int substr_len = 5;
	printf("ft_substr: %s\n",ft_substr(substr_s, substr_start, substr_len));
}

void	test_ft_atoi()
{
	int r;
	int o;

	r = ft_atoi("0");
	o = atoi("0");
	if(r!=o) printf("1- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("546:5");
	o = atoi("546:5");
	if(r!=o) printf("2- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("-4886");
	o = atoi("-4886");
	if(r!=o) printf("3- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("+548");
	o = atoi("+548");
	if(r!=o) printf("4- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("054854");
	o = atoi("054854");
	if(r!=o) printf("5- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("000074");
	o = atoi("000074");
	if(r!=o) printf("6- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("+-54");
	o = atoi("+-54");
	if(r!=o) printf("7- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("-+48");
	o = atoi("-+48");
	if(r!=o) printf("8- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("--47");
	o = atoi("--47");
	if(r!=o) printf("9- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("++47");
	o = atoi("++47");
	if(r!=o) printf("A- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("+47+5");
	o = atoi("+47+5");
	if(r!=o) printf("B - ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("-47-5\e");
	o = atoi("-47-5\e");
	if(r!=o) printf("C- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("\e475");
	o = atoi("\e475");
	if(r!=o) printf("D- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("\t\n\r\v\f  469 \n");
	o = atoi("\t\n\r\v\f  469 \n");
	if(r!=o) printf("F- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("-2147483648");
	o = atoi("-2147483648");
	if(r!=o) printf("G- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("2147483647");
	o = atoi("2147483647");
	if(r!=o) printf("H- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("\t\n\r\v\fd469 \n");
	o = atoi("\t\n\r\v\fd469 \n");
	if(r!=o) printf("I- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("\n\n\n  -46\b9 \n5d6");
	o = atoi("\n\n\n  -46\b9 \n5d6");
	if(r!=o) printf("J- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
	r = ft_atoi("");
	o = atoi("");
	if(r!=o) printf("K- ft_atoi: |%i| \tatoi: |%i|\n",r,o);
}

void	test_ft_trim()
{
	// char str[100] = "bananaaaa1 bana2 bananane3 ba4 banan5 ban6";
	char **res;
	int i = 0;

	res = ft_split("       ", ' ');
	if (res)
	{
		printf("all spaces > OK\n");
	}
	res = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	while (res[i] != (void *)0)
	{
		printf("%s\n", res[i]);
		i++;
	}
}

void	test_ft_itoa()
{
	printf("ft_itoa: MAX INT |%s|\n",ft_itoa(2147483647));
	printf("ft_itoa: MIN_INT|%s|\n",ft_itoa(-2147483648));
	printf("ft_itoa: -100000|%s|\n",ft_itoa(-100000));
	printf("ft_itoa: 10000|%s|\n",ft_itoa(10000));
	printf("ft_itoa: 0|%s|\n",ft_itoa(0));
	printf("ft_itoa: 7|%s|\n",ft_itoa(7));
}

char	dummy(unsigned int i, char c)
{
	c = c + i;
	return (c);
}

char	war_mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
void	test_ft_strmapi()
{
	printf("%s\n",ft_strmapi("Uma String", dummy));
	printf("%s\n",ft_strmapi("", dummy));
	printf("%s\n",ft_strmapi("000000000", dummy));
	printf("%s\n",ft_strmapi("Uma String", war_mapi));
	printf("%s\n",ft_strmapi("", war_mapi));
	printf("%s\n",ft_strmapi("LoReM iPsUm", war_mapi));
}

int	main(void)
{
	// test_ft_isalpha();
	// test_ft_isalpha();
	// test_ft_strlcat();
	// test_ft_substr();
	// test_ft_atoi();
	// test_ft_trim();
	// test_ft_itoa();
	test_ft_strmapi();
}
