/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strputtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 17:37:32 by fdel-car          #+#    #+#             */
/*   Updated: 2016/02/29 17:45:13 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strputtab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_putendl(tab[i]);
		i++;
	}
}
