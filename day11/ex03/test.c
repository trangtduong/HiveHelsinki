/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:17:45 by thduong           #+#    #+#             */
/*   Updated: 2021/06/09 09:40:14 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data);
int	ft_list_size(t_list *begin_list);

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

void	print_list(t_list *list)
{
	while (list != NULL)
	{	
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list *list;

	ft_list_push_front(&list, "first");
	print_list(list);
	printf("%d", ft_list_size(list));
	printf("\n");
	ft_list_push_front(&list, "second");
	print_list(list);
	printf("%d", ft_list_size(list));
	printf("\n");
	ft_list_push_front(&list, "third");
	print_list(list);
	printf("%d", ft_list_size(list));
	printf("\n");
}