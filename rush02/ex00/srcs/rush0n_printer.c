/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 10:04:28 by jsaarine          #+#    #+#             */
/*   Updated: 2021/06/13 13:51:23 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	rush0n_printer(int rush_n, int w, int h, int first_match)
{
	if (!first_match)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(rush_n);
	ft_putstr("] [");
	ft_putnbr(w);
	ft_putstr("] [");
	ft_putnbr(h);
	ft_putstr("]");
}
