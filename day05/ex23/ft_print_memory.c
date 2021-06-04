/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:51:05 by thduong           #+#    #+#             */
/*   Updated: 2021/06/01 20:51:22 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_print_hex(char i)
{
	const char	*hex = "0123456789abcdef";
	ft_putchar(hex[i / 16]);
	ft_putchar(hex[i % 16]);
}

void	ft_print_address(void *addr)
{
	const char	*hex = "0123456789abcdef";
	long		addr_nb;
	int			index[8];
	int			i;

	addr_nb = (long)addr;
	i = 8;
	while (--i >= 0)
	{
		index[i] = addr_nb % 16;
		addr_nb = addr_nb / 16;
	}
	i = -1;
	while (++i < 8)
	{
		ft_putchar(hex[index[i]]);
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void	ft_print_oneline_memory(char *addr, int size)
{
	int		i;

	if (size == 0)
		return ;
	ft_print_address(addr);
	i = -1;
	while (++i < size)
	{
		
		ft_print_hex(*(addr + i));
		if (i % 2 == 1)
		{
			ft_putchar(' ');
		}
	}
	i = -1;
	while (++i < size)
	{
		if (*(addr + i) < 32)
			ft_putchar('.');
		else
			ft_putchar(*(addr + i));
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	n_lines;

	if (size == 0)
		return (addr);
	n_lines = size / 16;
	if (size % 16 != 0)
		n_lines++;
	i = -1;
	while (++i < n_lines)
	{
		ft_print_oneline_memory((char*)(addr + 16 * i), 16);
	}
	return (addr);
}
