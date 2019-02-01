#include <stdio.h>
#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}
int 	main(void)
{
	int a;
	int b;
	int *ptr;

	a = 4;
	b = 8;
	ptr = &a;
	printf("%s", "Printing address of a: ");
	printf("%p", &a);
	printf("%s", "\n");
	printf("%s", "Printing address of a through ptr: ");
	printf("%p", ptr);
	printf("%s", "\n");
	printf("%s", "Printing address of b: ");
	printf("%p", &b);
	printf("%s", "\n");
	printf("%s", "Printing address of b through ptr: ");
	printf("%p", (ptr - 1));
	printf("%s", "\n");
	printf("%s", "Printing address of b through adress of a: ");
	printf("%p", (&a - 1));
	printf("%s", "Printing value of b through address of a: ");
	printf("%d", *(&a - 1));
	return(0);
}