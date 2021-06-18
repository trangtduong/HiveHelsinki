/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input_to_linkedlist.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvuorenl <rvuorenl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 12:34:46 by rvuorenl          #+#    #+#             */
/*   Updated: 2021/06/13 17:03:31 by rvuorenl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_list	*create_new_node(char *str)
{
	t_list *newnode;

	newnode = (t_list*)malloc(sizeof(t_list));
	if (!newnode)
		return (0);
	newnode->str = str;
	newnode->next = 0;
	return (newnode);
}

void	create_push_back(t_list **head, char *str)
{
	t_list *newnode;
	t_list *headcopy;

	newnode = create_new_node(str);
	if (!newnode)
		return ;
	if (!*head)
	{
		*head = newnode;
		return ;
	}
	headcopy = *head;
	while (headcopy->next != 0)
		headcopy = headcopy->next;
	headcopy->next = newnode;
}

t_list	*read_input_to_linkedlist(void)
{
	char	buffer[BUF_SIZE + 1];
	char	*str;
	int		ret;
	t_list	*head;

	head = 0;
	while ((ret = read(0, buffer, BUF_SIZE)) != 0)
	{
		buffer[ret] = '\0';
		str = ft_strdup(buffer);
		create_push_back(&head, str);
	}
	return (head);
}
