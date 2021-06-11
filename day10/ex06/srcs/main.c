/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 23:13:05 by thduong           #+#    #+#             */
/*   Updated: 2021/06/08 08:21:39 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	op;
	int	(*f[5]) (int, int);

	if (argc != 4)
		return (1);
	f[0] = &add;
	f[1] = &subtract;
	f[2] = &multiply;
	f[3] = &divide;
	f[4] = &modulo;
	x = ft_atoi(argv[1]);
	op = select_operator(argv[2]);
	y = ft_atoi(argv[3]);
	if (op == -1)
		write(1, "0", 1);
	else if (y == 0 && op == 3)
		write(1, "Stop : division by zero", 23);
	else if (y == 0 && op == 4)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr((f[op])(x, y));
	write(1, "\n", 1);
	return (0);
}
