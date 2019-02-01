/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 12:13:21 by cromo             #+#    #+#             */
/*   Updated: 2019/01/18 13:35:02 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
:
#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour > 24)
		return;
	else if (hour == 24 || (hour >= 0 && hour <= 10) )
	{
		if (hour % 12 == 0)
			hour = 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M\n", (hour), ((hour + 1) % 12));
	}
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 P.M.\n", (hour), (hour + 1));
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n", (hour), ((hour + 1) % 12));
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 A.M.\n", (hour % 12), (12));
	else
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M\n", (hour % 12), ((hour + 1) % 12));
}
