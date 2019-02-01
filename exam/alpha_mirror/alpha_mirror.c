/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:26:23 by cromo             #+#    #+#             */
/*   Updated: 2019/01/31 19:37:26 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	mirror(char c)
{
	if (c >= 'a' && c <= 'z')
		c = 'a' + 'z' - c;
   	else if (c >= 'A' && c <= 'Z')
		c = 'A' + 'Z' - c;	
	return (c);	
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while(argv[j][i] != '\0')
			{
				if (((argv[j][i] >= 'a') && (argv[j][i] <= 'z')) ||
			   		((argv[j][i] >= 'A') && (argv[j][i] <= 'Z')))
					argv[j][i] = mirror(argv[j][i]);
				ft_putchar(argv[j][i]);
				i++;
			}
			j++;
			if (j > 1 && j < argc )
				ft_putchar(' ');
		}
	}
	ft_putchar('\n');
	return (0);
}
