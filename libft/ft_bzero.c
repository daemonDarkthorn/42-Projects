/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 22:17:51 by glarivie          #+#    #+#             */
/*   Updated: 2015/11/24 15:10:07 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Inscrit le chiffre 0 sur le pointeur *s, n fois
*/

void	ft_bzero(void *s, size_t n)
{
	if (n > 0)
		ft_memset(s, 0, n);
}
