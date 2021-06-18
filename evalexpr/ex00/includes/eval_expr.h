/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 06:34:39 by thduong           #+#    #+#             */
/*   Updated: 2021/06/13 20:00:00 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_stack_int
{
	int	*st;
	int	n;
}				t_stack_int;

typedef struct	s_stack_char
{
	char	*st;
	int		n;
}				t_stack_char;

void			ft_putnbr(int nbr);
void			ft_putchar(char c);
int				ft_strlen(char *str);
int				eval_expr(char *str);
int				is_operator(char o);
int				is_digit(char c);
int				precedence(char o);
int				eval(int a, int b, char operator);

#endif
