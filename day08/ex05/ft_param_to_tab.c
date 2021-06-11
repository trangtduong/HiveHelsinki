/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:14:22 by thduong           #+#    #+#             */
/*   Updated: 2021/06/04 19:46:33 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char				**ft_split_whitespaces(char *str);

int					ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char				*ft_strdup(char *src)
{
	int		c;
	char	*str;

	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	str = (char *)malloc(sizeof(char) * (c + 1));
	str[c] = '\0';
	while (--c >= 0)
	{
		str[c] = src[c];
	}
	return (str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *tab;

	tab = (t_stock_par *)malloc((ac + 1) * sizeof(t_stock_par));
	if (!tab)
	{
		return (0);
	}
	tab[ac].str = 0;
	tab[ac].copy = 0;
	tab[ac].size_param = 0;
	tab[ac].tab = 0;
	while (--ac >= 0)
	{
		tab[ac].size_param = ft_strlen(av[ac]);
		tab[ac].str = av[ac];
		tab[ac].copy = ft_strdup(av[ac]);
		tab[ac].tab = ft_split_whitespaces(av[ac]);
	}
	return (tab);
}
