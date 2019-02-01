#include <stdio.h>

void		ft_putstr(char *str)
{
	printf("%p\n", str);
	printf("%c", str[0]);
	printf("%c", str[1]);
	printf("%c", str[2]);
}
int		main(void)
{

	char s[3];
	s[0] = '1';
	s[1] = '2';
	s[2] = '3';

	printf("%s\n", s);
	printf("%p\n", s);
	printf("%p\n", &s[0]);
	printf("%c\n", *s);
	printf("%c\n", (0 + '0'));
	printf("%d\n", (48 - '0'));
	//ft_putstr(s);
	//printf("%d\n", ft_putintptr(s));

	return(0);
}
