/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 22:32:26 by cromo             #+#    #+#             */
/*   Updated: 2019/01/22 02:24:13 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//#define ASCII_a_value 'a'
//#define ASCII_A_value 'A'
//#define ASCII_z_value 'z'
//#define ASCII_Z_value 'Z'
//Creates a function that transforms every letter of every word to uppercase
char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	//Iterate through every element of string until it hits NULL character
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (str[i] + (65 - 97));
		}
		i++;
	}
	return (str);
}

int 	main(void)
{
	char 	*s;
	char	s1[] = "Forty-three";
	
	s = s1;
	//Call function and display return value
	printf("%s", s);
	ft_strupcase(s);
	printf("%s", s);
	return (0);
}
