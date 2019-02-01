/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preprocessing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:44:45 by cromo             #+#    #+#             */
/*   Updated: 2019/01/31 17:56:55 by cromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define THAT
#ifdef THAT
int		main(void)
{
#ifndef THIS
	write(1, "this", 4);
#ifdef SOMETHING
	write(1, "something", 9);
#endif
	return (0);
#endif
}
#endif

/*
*Output generated after preprocessing (cpp)
* # 14 "preprocessing.c" 2
*
*
*int		main(void)
*{
*
*	write(1, "this", 4);
*
*
*
*	return (0);
*
*}
*/
