/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:46:14 by cromo             #+#    #+#             */
/*   Updated: 2019/01/24 16:01:03 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
 * This program creates a function that swaps one string by the other by using
 * reference pointers 
 */
void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int num1;
	int num2;

	num1 = 3;
	num2 = 5;
	ft_swap(&num1, &num2);

	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
	return (0);
}
