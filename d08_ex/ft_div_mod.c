#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b == 0)
	{
		printf("Division by zero.\n");
		*div = 0;
		*mod = 0;
	}
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
	y = 3;
	div = &x;
	mod = &y;

	ft_div_mod(x, y, div, mod);
	printf("%d", x);
	printf("%d", y);
	return(0);
}
