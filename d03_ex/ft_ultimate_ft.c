/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 10:02:19 by cromo             #+#    #+#             */
/*   Updated: 2019/01/25 10:33:11 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * This program creates a program that changes the value of a number through
 * the use of pointers, reference
 */

#include <stdio.h>

void	ft_ultimate_ft(int 	*********nbr)
{
	*********nbr = 42;
}

int		main(void)
{
	int n;
	int *p1;
	int **p2;
	int ***p3;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;
	int *********p9;

	n = 4;
	p1 = &n;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	printf("%p\n", &n);
	printf("%p\n", p1);
	printf("%p\n", p2);
	printf("%p\n", p3);
	printf("%p\n", p4);
	printf("%p\n", p5);
	printf("%p\n", p6);
	printf("%p\n", p7);
	printf("%p\n", p8);
	printf("%p\n", p9);
	printf("Printing the value of n through the pointers");
	printf("%d\n", *p1);
	printf("%d\n", **p2);
	printf("%d\n", ***p3);
	printf("%d\n", ****p4);
	printf("%d\n", *****p5);
	printf("%d\n", ******p6);
	printf("%d\n", *******p7);
	printf("%d\n", ********p8);
	printf("%d\n", *********p9);
	ft_ultimate_ft(p9);
    printf("Printing n after ft_ultimate_ft: %d\n", n);
	return (0);
}
