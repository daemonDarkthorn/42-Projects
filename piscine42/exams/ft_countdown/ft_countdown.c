/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countdown.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/07 17:33:22 by exam              #+#    #+#             */
/*   Updated: 2015/08/07 17:38:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char	number;

	number = '9';
	while (number >= '0')
	{
		write(1, &number, 1);
		number--;
	}
	write(1, "\n", 1);
	return (0);
}
