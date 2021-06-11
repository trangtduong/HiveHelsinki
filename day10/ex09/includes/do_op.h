/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 06:45:02 by thduong           #+#    #+#             */
/*   Updated: 2021/06/08 13:08:42 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

typedef	struct	s_opp
{
	char	*operator;
	int		(*function)(int, int);
}				t_opp;

int				ft_add(int x, int y);
int				ft_sub(int x, int y);
int				ft_mul(int x, int y);
int				ft_div(int x, int y);
int				ft_mod(int x, int y);
int				ft_usage(int x, int y);
void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);
void			ft_advanced_do_op(int x, int y, char *operator);

#endif
