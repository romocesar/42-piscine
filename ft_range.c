/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 21:33:51 by cromo             #+#    #+#             */
/*   Updated: 2019/01/31 17:44:38 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
//This function return an array an array of ints. Array must include all values 
//between min and max, except for max. If min >= max, null pointer should be returned
int		*ft_range(int min, int max)
{
	//Initialize pointer of int array to be dynamically allocated
	int		*p;
	//Initialize counter for int array to be generated
	int		i;

	//Verify if min >= max
	if (min >= max)
		return (NULL);
	//if availability of memory space in heap
	if (!(p = (int*)(malloc(sizeof(*p) * (max - min)))))
		return (NULL);
	//Element-wise value allocation
	i = 0;
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;	
	}
	return (p);
}

int		main(void)
{
	int		min;
	int 	max;
	int 	*i;

	min = 1;
	max = -3;
	i = ft_range(min, max);
	printf("%i\n", *i);
	printf("%i\n", *(i + 1));
	printf("%i\n", *(i + 2));
	printf("%i\n", *(i + 3));
	printf("%i\n", *(i + 4));
	return (0);
}
