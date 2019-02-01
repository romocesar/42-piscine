#include<stdio.h>
#include<unistd.h>

int		main(void)
{
	int 	a;
	int 	*pa;
	int 	**pp;

	a = 1;
	pa = &a;
	pp = &pa;
	printf("%s", "Displaying value of *pa:");
	printf("%d", *pa);
	printf("\n");
	a = 4;
	printf("%s", "Modifying value of a through a = 4: ");
	printf("%d", a);
	printf("\n");
	*pa = 7;
	printf("%s", "Modifying value of a through *pa = 7: ");
	printf("%d", a);
	printf("\n");
	**pp = 21;
	printf("%s", "Modifying value of a through **pp = 21: ");
	printf("%d", a);
	printf("\n");
	printf("%s", "Displaying address of pointer pa through pa ... ");
	printf("%p", pa);
	printf("\n");
	printf("%s", "Displaying address of pointer pa through *pp ... ");
	printf("%p", *pp);


}