/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 23:59:41 by thduong           #+#    #+#             */
/*   Updated: 2021/06/08 05:07:54 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	select_operator(char *c)
{
	const	char	*op = "+-*/%";
	int				i;

	if (c[1] == '\0')
	{
		i = -1;
		while (++i < 5)
		{
			if (c[0] == op[i])
				return (i);
		}
	}
	return (-1);
}
