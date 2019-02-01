#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int x;
	int y;
	int *div;
	int *mod;

	x = 10;
	y = 0;
	div = &x;
	mod = &y;

	ft_div_mod(x, y, div, mod);
	return(0);
}