/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:08:14 by cromo             #+#    #+#             */
/*   Updated: 2019/01/18 14:57:35 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] > -1 && str[i] < 33)
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i++] - '0';
	}
	return (result * sign);
}
int		main(void)
{
	char s[] = "-12u";
	char s1[] = "\0-3t";
	char s2[] = "+ \t 3 u1";
	char s3[] = "54-43";
	int r;

	r = ft_atoi(s);
	printf("%d\n", r);
	r = ft_atoi(s1);
	printf("%d\n", r);
	r = ft_atoi(s2);
	printf("%d\n", r);
	r = ft_atoi(s3);
	printf("%d\n", r);
	return (0);
}
