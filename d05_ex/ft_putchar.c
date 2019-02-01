/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 12:36:18 by cromo             #+#    #+#             */
/*   Updated: 2019/01/16 12:36:23 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	/*
	*  arg 1: stdout representation,
	*  arg &c: reference to char var c,
	*  arg 1: # of bytes to handle.
	*/
	write(1, &c, 1);
	return (0);
}
