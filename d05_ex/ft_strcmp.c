/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 13:11:01 by cromo             #+#    #+#             */
/*   Updated: 2019/01/25 13:49:04 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (res);
}

int		main(void)
{
	int		res;
	char 	s1[4] = "abc";
	char	s2[4] = "ab";

	res = ft_strcmp(s1, s2);
	printf("%d", res);
	return (0);
}
