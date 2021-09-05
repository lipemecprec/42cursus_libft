/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:30:45 by faguilar          #+#    #+#             */
/*   Updated: 2021/09/05 01:08:41 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
// #define _CRTDBG_MAP_ALLOC
#include <stdio.h>
// #include <crtdbg.h>

// _CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );


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

void	test_ft_isalnum()
{
	int	i;
	int	ft;
	int	orig;

	i = -254;
	while (i <= 254)
	{
		ft = ft_isalnum(i);
		orig = isalnum(i);
		if (!ft != !orig)
			printf("isAlpha(%d) - NG: char (%c) ft: %d e orig: %d\n", i, i, ft, orig);
		i++;
	}
}

void	test_ft_isascii()
{
	int	i;
	int	ft;

	i = -254;
	while (i <= 254)
	{
		ft = ft_isascii(i);
		if ((ft == 0 && (0 <= i && i <= 127)) || (ft == 1 && (i < 0 || 127 < i)))
			printf("isAscii(%d) - NG: char (%c) ft: %d", i, i, ft);
		i++;
	}
}

void	test_ft_isprint()
{
	int	i;
	int	ft;
	int	orig;

	i = -254;
	while (i <= 254)
	{
		ft = ft_isprint(i);
		orig = isprint(i);
		if (!ft != !orig)
			printf("isprint(%d) - NG: char (%c) ft: %d e orig: %d\n", i, i, ft, orig);
		i++;
	}
}

void	test_ft_strlen()
{
	char 	*s;

	s = (char *)malloc(20 * sizeof(char));
	s = "01234567890123456789";
	if (ft_strlen(s) != strlen(s))
		printf("strlen(%s) - NG\n", s);
	s = "";
	if (ft_strlen(s) != strlen(s))
		printf("strlen(%s) - NG\n", s);
	s = "\0";
	if (ft_strlen(s) != strlen(s))
		printf("strlen(%s) - NG\n", s);
	s = "\n\v\f\t\r ";
	if (ft_strlen(s) != strlen(s))
		printf("strlen(%s) - NG\n", s);
	s = "             \0         ";
	if (ft_strlen(s) != strlen(s))
		printf("strlen(%s) - NG\n", s);
	s = 0;
	// long	temp;
		// temp = ft_strlen(s);
		// temp = strlen(s);
}

void	test_ft_memset()
{
	char 	*s;
	char 	*s_orig;
	int	c;
	size_t	size;
	char 	*ft;
	char 	*orig;

	size = 0;
	while (size < 512)
	{
		s = ft_calloc(size, sizeof(char));
		s_orig = ft_calloc(size, sizeof(char));
		c = size / 127;
		ft = ft_memset(s, c, size);
		orig = memset(s_orig, c, size);
		if (memcmp(orig, ft, size) != 0)
			printf("memset fail at > %zu with > %d | s > %s | s_orig > %s\n", size, c, s, s_orig);
		size ++;
	}
}

void	test_ft_memcpy()
{
	char	*input[5] = {"", "\0", "1234567890\0", "çªº  😊  ✔  ✨  \0", "'\0"};
	char	*dest;
	char	*dest_orig;
	int		i = 0;

	dest = (char *)ft_calloc(20, 1);
	dest_orig = (char *)ft_calloc(20, 1);
	while (i < 5)
	{
		ft_memcpy(dest, &input[i], 7);
		memcpy(dest_orig, &input[i], 7);
		if (memcmp(dest, dest_orig, 7) != 0)
			printf("memcpy fail\n");
		i++;
	}
}

void	test_ft_memmove()
{
	if (ft_memmove(((void *)0), ((void *)0), 5))
		printf("memmove null fail\n");

	// char	src[] = "lorem ipsum dolor sit amet";
    // char	*dest;

	// dest = src + 1;
	// printf("test_ft_memmove > %s\n",ft_memmove(dest, src, 8));
	// printf("test_ft_memmove > %s\n",ft_memmove(dest, "123456789", 5));
	// printf("test_ft_memmove > %s\n",ft_memmove(dest, "con\0se\0ctur", 8));
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
	r = ft_atoi("2147483648000000000");
	o = atoi("2147483648000000000");
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

void	test_ft_split()
{
	// char str[100] = "bananaaaa1 bana2 bananane3 ba4 banan5 ban6";
	char **res;
	int i = 0;

	printf("ft_split with multiple spaces:\n");
	res = ft_split("       ", ' ');
	if (res)
	{
		printf("all spaces > OK\n");
	}
	printf("ft_split with words and single spaces:\n");
	res = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	i = 0;
	while (res[i] != 0)
	{
		printf("%s\n", res[i]);
		i++;
	}
	printf("ft_split with words and multiple spaces:\n");
	res = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	i = 0;
	while (res[i] != 0)
	{
		printf("%s\n", res[i]);
		i++;
	}
	printf("ft_split with empty string:\n");
	res = ft_split("", 'z');
	i = 0;
	while (res[i] != 0)
	{
		printf("%s\n", res[i]);
		i++;
	}
	if (res)
	{
		printf("empty > OK\n");
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

void	test_ft_strmapi()
{
	printf("%s\n",ft_strmapi("Uma String", dummy));
	printf("%s\n",ft_strmapi("", dummy));
	printf("%s\n",ft_strmapi("000000000", dummy));

	// _CrtDumpMemoryLeaks();
}

void	test_ft_strjoin()
{
	char    s1[] = "lorem ipsum";
	char    s2[] = "dolor sit amet";
	char    *strjoin;

	strjoin = ft_strjoin(s1, s2);
	printf("strjoin: %s", strjoin);
}

void	test_ft_strtrim()
{
	char s1[10];
	s1[0] = '\0';
	printf("strtrim: |%s|\n",ft_strtrim(" abcOOaOOOOacb   ", " abc"));
	printf("strtrim: |%s|\n",ft_strtrim("", " abc"));
	printf("strtrim: |%s|\n",ft_strtrim("O", " abc"));
	printf("strtrim: |%s|\n",ft_strtrim(" Oa", " abc"));
	printf("strtrim: |%s|\n",ft_strtrim(" OOOOOOOOO   ", " "));
	printf("strtrim: |%s|\n",ft_strtrim(" OOOOOOOOO   ", ""));
	printf("strtrim: |%s|\n",ft_strtrim(s1, "OOOO"));
	printf("strtrim: |%s|\n",ft_strtrim("NULL", s1));
	printf("strtrim: |%s|\n",ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " "));
	printf("strtrim: |%s|\n",ft_strtrim("lorem ipsum dolor sit amet", "te"));
	printf("strtrim: |%s|\n",ft_strtrim(" lorem ipsum dolor sit amet", " l"));
	printf("strtrim: |%s|\n",ft_strtrim("lorem ipsum dolor sit amet", "tel"));
	printf("strtrim: |%s|\n",ft_strtrim("               ", " "));
}

// void	test_ft_lstadd_front()
// {
// 	int i = 0;
// 	int size = 0;
// 	char *c;
// 	t_list **head = malloc(sizeof(t_list));
// 	t_list *temp = NULL;

// 	printf("ft_lstadd_front\nhead: %p\n", head);
// 	while (i < 25)
// 	{
// 		c = ft_itoa(i);
// 		temp = ft_lstnew(c);
// 		ft_lstadd_front(head, temp);
// 		i++;
// 	}

// 	temp = *head;
// 	while (temp->next != NULL)
// 	{
// 		printf("%s >> ", temp->content);
// 		temp = temp->next;
// 	}
// 	printf("%s >> ", temp->content);
// 	printf("\nsize: %d\n", size);


// }

// void	test_ft_lstadd_back()
// {
// 	int i = 0;
// 	int size = 0;
// 	char *c;
// 	t_list **head = malloc(sizeof(t_list));
// 	t_list *temp = NULL;

// 	printf("ft_lstadd_front\nhead: %p\n", head);
// 	while (i < 25)
// 	{
// 		c = ft_itoa(i);
// 		temp = ft_lstnew(c);
// 		ft_lstadd_back(head, temp);
// 		i++;
// 	}

// 	temp = *head;
// 	while (temp->next != NULL)
// 	{
// 		printf("%s >> ", temp->content);
// 		temp = temp->next;
// 	}
// 	printf("%s >> ", temp->content);
// 	printf("\nsize: %d\n", size);

// }

// void	del(void *a)
// {
// 	t_list *tmp;

// 	tmp = a;
// 	tmp->content = 0;
// 	free(tmp->content);
// }

// void	test_ft_lstdelone()
// {
// 	int i = 0;
// 	char *c;
// 	t_list **head = malloc(sizeof(t_list));
// 	t_list *temp = NULL;

// 	while (i < 7)
// 	{
// 		c = ft_itoa(i);
// 		temp = ft_lstnew(c);
// 		ft_lstadd_back(head, temp);
// 		if (i%2 == 0)
// 			ft_lstdelone(temp, del);
// 		i++;
// 	}

// 	printf("ft_lstadd_front\nhead: %p\n", head);
// 	temp = *head;
// 	while (1)
// 	{
// 		printf("node: %p, content: %s, next: %p \n", temp, temp->content, temp->next);
// 		if (temp->next == NULL)
// 			break ;
// 		temp = temp->next;
// 	}
// }

// void	test_ft_strcmp()
// {
// 	// [fail]: your strncmp doesn't stop at \0
// 	// Diffs:
// 	// 	strncmp: |0|
// 	// ft_strncmp: |-1|
// 	char *s1 = "atoms\0\0\0\0";
// 	char *s2 = "atoms\0abc";
// 	size_t size = 8;
// 	int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : ((strncmp(s1, s2, size) < 0) ? -1 : 0));
// 	int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : ((ft_strncmp(s1, s2, size) < 0) ? -1 : 0));

// 	if (i1 == i2)
// 		printf("test_ft_strcmp > TEST_SUCCESS\n");
// 	else
// 		printf("test_ft_strcmp > TEST_FAILED\n");
// }

// void	test_ft_strnstr()
// {
// 	// [fail]: your strnstr does not work with empty strings and 0 length
// 	// Diffs:
// 	// 	strnstr: |AAAAAAAAAAAAA|
// 	// ft_strnstr: |(null)|
// 	char *s1 = "AAAAAAAAAAAAA";
// 	size_t max = strlen(s1);
// 	char *i1 = strnstr(s1, s1, max);
// 	char *i2 = ft_strnstr(s1, s1, max);

// 	if (i1 == i2)
// 		printf("n > TEST_SUCCESS\n");
// 	else
// 		printf("n > TEST_FAILED\n");

// 	char	*ss1 = "oh no not the empty string !";
// 	char	*ss2 = "";
// 	size_t	ssmax = 0;
// 	printf("strtrim: |%s|\n",ft_strnstr(ss1, ss2, ssmax));
// 	printf("strtrim: |%s|\n",strnstr(ss1, ss2, ssmax));
// 	char *si1 = ft_strnstr(ss1, ss2, ssmax);
// 	char *si2 = strnstr(ss1, ss2, ssmax);

// 	if (si1 == si2)
// 		printf("n > TEST_SUCCESS\n");
// 	else
// 		printf("n > TEST_FAILED\n");

// }

// void	test_ft_calloc()
// {
// 	// [fail]: your calloc don't work with 0 size
// 	void *str = ft_calloc(0, 0);

// 	if (str == ((void *)0))
// 		printf("test_ft_calloc > TEST_FAILED\n");
// 	else
// 	{
// 		free(str);
// 		printf("test_ft_calloc > TEST_SUCCESS\n");
// 	}
// }

// void	test_ft_substr6()
// {
// 	// [crash]: you did not protect your malloc
// 	char *s = "malloc protection !";

// 	char *ret = ft_substr(s, 0, 5);
// 	if (ret == ((void *)0))
// 		printf("test_ft_substr6 > TEST_SUCCESS\n");
// 	else
// 	{
// 		printf("test_ft_substr6 > TEST_FAILED\n");
// 		(void)s;
// 		(void)ft_substr;
// 	}
// }

// void	test_ft_substr9()
// {
// 	// [fail]: your substr does not work when start >= ft_strlen(s)
// 	// Diffs:
// 	// 	substr: ||
// 	// ft_substr: | strjoin d|
// 	char *str = "01234";
// 	size_t size = 10;
// 	char *ret = ft_substr(str, 10, size);

// 	if (!strncmp(ret, "", 1))
// 	{
// 		free(ret);
// 		printf("test_ft_substr9 > TEST_SUCCESS\n");
// 	}
// 	else
// 	{
// 		free(ret);
// 		printf("test_ft_substr9 > TEST_FAILED\n");
// 	}
// }

// void	test_ft_putnbr_fd()
// {
// 	int arr[6] = {0, 7, -2147483648, 2147483647, -3000, 123456789 };
// 	int i = 0;

// 	while (i < 6)
// 	{
// 		ft_putnbr_fd(arr[i], open("test.txt", O_RDWR+O_APPEND));
// 		ft_putchar_fd('\n', open("test.txt", O_RDWR+O_APPEND));
// 		i++;
// 	}
// }

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_memcpy();
	test_ft_memmove();
	// test_ft_strlcat();
	// test_ft_substr();
	// test_ft_atoi();
	// test_ft_split();
	// test_ft_itoa();
	// test_ft_strjoin();
	// test_ft_strtrim();
	// test_ft_lstadd_front();
	// test_ft_lstadd_back();
	// test_ft_lstdelone();
	// test_ft_strcmp();
	// test_ft_strnstr();
	// test_ft_calloc();
	// test_ft_substr6();
	// test_ft_substr9();
	// test_ft_putnbr_fd();
	// test_ft_strmapi();

}
