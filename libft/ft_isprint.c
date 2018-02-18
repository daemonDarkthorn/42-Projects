/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/14 19:57:59 by glarivie          #+#    #+#             */
/*   Updated: 2015/11/27 14:43:24 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Vérifie qu'un caractère est imprimable
*/

int		ft_isprint(int c)
{
	return ((c >= 32 && c <= 126) ? TRUE : FALSE);
}
