/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 19:35:57 by thduong           #+#    #+#             */
/*   Updated: 2021/06/13 19:59:33 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		is_operator(char o)
{
	if (o == '+' || o == '-' || o == '*' || o == '/' || o == '%')
		return (1);
	return (0);
}

int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		precedence(char o)
{
	if (o == '+' || o == '-')
		return (1);
	if (o == '*' || o == '/' || o == '%')
		return (2);
	return (0);
}

int		eval(int a, int b, char operator)
{
	if (operator == '+')
		return (a + b);
	if (operator == '-')
		return (a - b);
	if (operator == '*')
		return (a * b);
	if (operator == '/')
		return (a / b);
	if (operator == '%')
		return (a % b);
	return (0);
}
