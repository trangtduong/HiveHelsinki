/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 20:41:34 by thduong           #+#    #+#             */
/*   Updated: 2021/06/13 20:00:09 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	process_open_parenthesis(t_stack_char *os, int *is_start)
{
	os->n++;
	os->st[os->n] = '(';
	*is_start = 1;
}

void	process_close_parenthesis(t_stack_int *vs, t_stack_char *os)
{
	while (os->n >= 0)
	{
		if (os->st[os->n] == '(')
		{
			os->n--;
			break ;
		}
		vs->st[vs->n - 1] = eval(vs->st[vs->n - 1],
									vs->st[vs->n], os->st[os->n]);
		vs->n--;
		os->n--;
	}
}

void	process_op(t_stack_int *vs, t_stack_char *os, char op, int *is_start)
{
	while (os->n >= 0 && precedence(os->st[os->n]) >= precedence(op))
	{
		vs->st[vs->n - 1] = eval(vs->st[vs->n - 1],
									vs->st[vs->n], os->st[os->n]);
		vs->n--;
		os->n--;
	}
	os->n++;
	os->st[os->n] = op;
	if (*is_start == 1)
	{
		vs->n++;
		vs->st[vs->n] = 0;
	}
}

void	process_digit(t_stack_int *vs, char **str, int *is_start)
{
	int d;

	d = 0;
	while (is_digit(**str))
	{
		d = d * 10 + (**str - '0');
		*str = *str + 1;
	}
	vs->n++;
	vs->st[vs->n] = d;
	*str = *str - 1;
	*is_start = 0;
}

int		eval_expr(char *str)
{
	t_stack_int		vs;
	t_stack_char	os;
	int				is_start;

	vs.st = (int *)malloc(ft_strlen(str) * sizeof(int));
	vs.n = -1;
	os.st = (char *)malloc(ft_strlen(str) * sizeof(char));
	os.n = -1;
	is_start = 1;
	while (*str)
	{
		if (*str == '(')
			process_open_parenthesis(&os, &is_start);
		else if (is_digit(*str))
			process_digit(&vs, &str, &is_start);
		else if (*str == ')')
			process_close_parenthesis(&vs, &os);
		else if (is_operator(*str))
			process_op(&vs, &os, *str, &is_start);
		str++;
	}
	process_close_parenthesis(&vs, &os);
	return (vs.st[0]);
}
