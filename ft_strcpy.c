/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:58:17 by cromo             #+#    #+#             */
/*   Updated: 2019/01/31 17:54:09 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *source)
{
	int i;

	i = 0;
	while(dest[i] != '\0' && source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	return(dest);
}

int		main(void)
{
	char src[5 + 1] = "abcba";
	char dst[] = "frg";

	ft_strcpy(dst, src);
	printf("%s\n", src);
	printf("%s", dst);
	return (0);
}
