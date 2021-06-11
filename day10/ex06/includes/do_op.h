/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 23:07:26 by thduong           #+#    #+#             */
/*   Updated: 2021/06/08 08:21:05 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		add(int x, int y);
int		subtract(int x, int y);
int		multiply(int x, int y);
int		divide(int x, int y);
int		modulo(int x, int y);
int		select_operator(char *c);
#endif
