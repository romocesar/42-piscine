/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:57:28 by cromo             #+#    #+#             */
/*   Updated: 2019/01/31 17:47:27 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	char c;

	c = n + '0';
	ft_putchar(c);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}
