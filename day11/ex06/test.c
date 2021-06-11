/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:17:45 by thduong           #+#    #+#             */
/*   Updated: 2021/06/09 09:39:34 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_clear(t_list **begin_list);

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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	if (elem)
	{
		elem->next = *begin_list;
		*begin_list = elem;
	}
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
	t_list *list1;
	t_list *list2;
	t_list *list3;

	list = NULL;
	ft_list_push_front(&list, "first");
	list1 = list;
	printf("First list: \n");
	print_list(list1);
	printf("Second list: \n");
	ft_list_push_front(&list, "second");
	list2 = list;
	print_list(list2);
	printf("Third list: \n");
	ft_list_push_front(&list, "third");
	list3 = list;
	print_list(list3);
	printf("Main list: \n");

	print_list(list);
	printf("-----Clear----\n");
	ft_list_clear(&list);
	printf("main list: \n");
	print_list(list);
	printf("first list \n");
	print_list(list1);
	printf("Second list\n");
	print_list(list2);
	printf("Third list\n");
	print_list(list3);
	return (0);
}