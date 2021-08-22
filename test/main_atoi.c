
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main()
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
