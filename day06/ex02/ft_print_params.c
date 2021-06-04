/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 22:59:59 by thduong           #+#    #+#             */
/*   Updated: 2021/06/01 23:05:14 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int c, char **argv)
{
	int i;

	i = 0;
	while (++i < c)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
