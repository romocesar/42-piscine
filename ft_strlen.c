/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:36:38 by cromo             #+#    #+#             */
/*   Updated: 2019/01/24 15:46:00 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
 * This function returns the size of a string, if string is empty program
 * returns 0
 */
int 	ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return(i);
}

int		main(void)
{
	char *str;

	str = "";
	printf("%s\n", str);
	printf("%d\n", ft_strlen(str));
	return (0);
}
