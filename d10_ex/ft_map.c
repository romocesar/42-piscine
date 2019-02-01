/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 21:38:08 by cromo             #+#    #+#             */
/*   Updated: 2019/01/22 22:00:20 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This program creates a function that applies a function into every member of an
//int array and proceeds to return the generated array
#include <stdio.h>
#include <stdlib.h>

int		power2(int x)
{
	int res;

	res = x * x;
	return (res);
}

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *map;

	i = 0;
	map = (int*)(malloc(sizeof(int) * length));
	while (i < length)
	{
		map[i] = (*f)(tab[i]);
		i++;
	}
	return (map);
}
int		main(void)
{
	int train[] = {1, 2, 3, 4, 5};
	int *train_2;

	train_2 = ft_map(train, 5, &power2);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", train_2[i]);
	}
	return (0);
}

