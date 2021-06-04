/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:42:19 by thduong           #+#    #+#             */
/*   Updated: 2021/06/01 17:49:01 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar_non_printable(char i)
{
	const char	*hex = "0123456789abcdef";

	if (i >= 32)
		return ;
	ft_putchar('\\');
	ft_putchar(hex[i / 16]);
	ft_putchar(hex[i % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32)
			ft_putchar(*str);
		else
			ft_putchar_non_printable(*str);
		str++;
	}
}
