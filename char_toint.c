#include <stdio.h>
#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}
int 	main(void)
{
	char c;
	char z;
	char str[3];
	char *ptr;
	int n;
	int m;

	c = '0';
	z = '9';
	ptr = &str;
	n = c - 48;
	m = z - 48;
	printf("%p", &str[0]);
	printf("%p", ptr);
	printf("%c", c);
	printf("%d", n);
	printf("%c", z);
	printf("%d", m);
	return(0);
}