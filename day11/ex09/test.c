/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 15:55:22 by thduong           #+#    #+#             */
/*   Updated: 2021/06/09 16:23:42 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(void *str)
{
	while (*(char *)str != '\0')
		ft_putchar(*(char *)str++);
}

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*elem;
	t_list	*ret;

	if (ac <= 0)
		return (0);
	ret = NULL;
	i = -1;
	while (++i < ac)
	{
		elem = ft_create_elem(av[i]);
		elem->next = ret;
		ret = elem;
	}
	return (ret);
}

int		main(int argc, char **argv)
{
	t_list *list;

	list = ft_list_push_params(argc, argv);
	ft_list_foreach(list, &ft_putstr);
	return (0);
}