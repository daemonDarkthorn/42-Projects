/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 09:03:12 by glarivie          #+#    #+#             */
/*   Updated: 2015/11/27 13:45:19 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_isop: Vérifie si le caractère "c" est un opérateur "+" ou "-"
*/
static t_bool	ft_isop(char c)
{
	return ((c == '-' || c == '+') ? TRUE : FALSE);
}

/*
** ft_atoi: Converti une chaine de caractère en INT
** 1 - Tant que le caractère est un espace, incrémente le compteur "index"
** 2 - Si le caractère n'est pas un espace, "+", "-", un chiffre, retourne FALSE
** 3 - Si le premier caractère rencontré est un "-", inverse le résultat
** 4 - Tant que le caractère rencontré est un chiffre de la table ASCII,
** le converti en INT et multiplie par 10 le retour pour augementer de dizaine
*/
int				ft_atoi(const char *str)
{
	int		ret;
	int		index;
	int		isneg;

	ret = 0;
	index = 0;
	isneg = 1;
	while (ft_isspace(str[index]) && str[index])
		index++;

	if (!ft_isdigit((int)str[index]) && !ft_isop(str[index]))
		return (FALSE);
	if (str[index] == '+')
		index++;
	else if (str[index] == '-')
	{
		isneg = -1;
		index++;
	}
	while (ft_isdigit((int)str[index]))
	{
		ret = (ret * 10) + (str[index] - '0');
		index++;
	}
	return (ret * isneg);
}
