/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_do_op.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 23:13:05 by thduong           #+#    #+#             */
/*   Updated: 2021/06/08 13:09:33 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

int		ft_usage(int x, int y)
{
	int		i;
	char	*empty;
	char	*operator;

	(void)x;
	(void)y;
	i = 0;
	empty = "";
	operator = g_opptab[i].operator;
	ft_putstr("error : only [ ");
	while (ft_strcmp(operator, empty) != 0)
	{
		operator = g_opptab[i].operator;
		ft_putstr(operator);
		ft_putstr(" ");
		i++;
	}
	ft_putstr("] are accepted.");
	return (0);
}

void	ft_advanced_do_op(int x, int y, char *operator)
{
	int		matched;
	t_opp	op;
	int		i;

	i = 0;
	matched = 0;
	while (ft_strcmp(g_opptab[i].operator, "") != 0)
	{
		if (ft_strcmp(g_opptab[i].operator, operator) == 0)
		{
			op = g_opptab[i];
			matched = 1;
		}
		i++;
	}
	if (matched == 0)
	{
		op = g_opptab[i];
		op.function(x, y);
	}
	else
		ft_putnbr(op.function(x, y));
}
