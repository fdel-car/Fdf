/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iso.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 23:42:15 by fdel-car          #+#    #+#             */
/*   Updated: 2016/03/05 00:09:34 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_iso(int x, int y, int which)
{
	if (which == 0)
		return ((x - y) * 10 + WIDTH / 2);
	else
		return ((x + y) * 10 + HEIGHT / 2);
}
