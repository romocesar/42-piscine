/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:08:36 by cromo             #+#    #+#             */
/*   Updated: 2019/01/18 16:20:42 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	//If src is less than len characters long, the
    // remainder of dst is filled with `\0' characters
	
	//Declare counter
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char src[5];
	char dst[7];

	src[0] = 'a';
	src[1] = 'b';
	src[2] = '\0';
	src[3] = 'b';
	src[4] = '\n';
	ft_strncpy(&dst[0], &src[0]);
	printf("%s\n", src);
	printf("%s", dst);
	return (0);	
}
