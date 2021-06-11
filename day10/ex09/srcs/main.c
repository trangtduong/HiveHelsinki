/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:09:05 by thduong           #+#    #+#             */
/*   Updated: 2021/06/08 13:09:08 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char **argv)
{
	int		x;
	int		y;

	if (argc != 4)
		return (1);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[3]);
	if (y == 0 && ft_strcmp(argv[2], "/") == 0)
		write(1, "Stop : division by zero", 23);
	else if (y == 0 && ft_strcmp(argv[2], "%") == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_advanced_do_op(x, y, argv[2]);
	write(1, "\n", 1);
	return (0);
}
