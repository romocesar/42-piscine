#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char ptr);
void 	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

int		 main(void)
{
	int		a;
	int		*ptr;
	char	nl;

	a = 3;
	ptr = &a;
	nl = '\t';
	ft_putaddr(ptr);
	printf("\n");
	/*
	**write(1, &nl, 1);
	**write(1, &nl, 1);
	**ft_putaddr(&a);
	*/
	ft_putaddr(&a);
	return(0);
}

void	ft_putchar(char ptr)
{
	write(1, &ptr, 1);
}

void 	ft_putnbr(int ptr)
{
	write(1, &ptr, 1);
}

void	ft_putaddr(void *p)
{
	printf("%p", p);
}
