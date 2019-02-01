/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 16:29:46 by cromo             #+#    #+#             */
/*   Updated: 2019/01/17 16:54:57 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

//This program dynamically allocates memory for a char array (String), adds
//adds values and then displays them in the console
//Define a global variable for the length of the dynamically allocated array of chars
#define LEN		42

int		main(void)
{
	//Declare a pointer to a char, the first element of the string
	char			*p;
	unsigned int 	i;

	//Dynamically allocating memory to an array of char p
	//Must cast malloc return value from void * to char *
	//Must allocate 1 additional space of memory for NULL terminator
	p = (char*)malloc(sizeof(*p) * (LEN + 1));
	i = 0;
	//Allocate values until LEN - 1 index since counter i starts at 0
	while (i < LEN)
	{
		p[i] = (i % 10) + '0';
		printf("%c", p[i++]);
	}
	p[i] = '\0';
	free(p);
	return(0);
}
