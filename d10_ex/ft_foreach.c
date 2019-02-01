/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 21:25:05 by cromo             #+#    #+#             */
/*   Updated: 2019/01/22 21:36:20 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int d)
{
	printf("%d", d);
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while(i < length)
	{
		(*f)(tab[i++]);
	}
}

int		main(void)
{

	int train[] = {1, 2, 3, 4, 5};

	ft_foreach(train, 5, &ft_putnbr);
	return (0);
}
