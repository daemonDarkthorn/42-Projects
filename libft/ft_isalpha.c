/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/14 13:36:10 by glarivie          #+#    #+#             */
/*   Updated: 2015/11/27 14:38:56 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Vérifie qu'un caractère est une lettre majuscule ou minuscule
*/

int		ft_isalpha(int c)
{
	return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? TRUE : FALSE);
}
