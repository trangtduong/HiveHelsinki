/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 16:12:09 by thduong           #+#    #+#             */
/*   Updated: 2021/06/11 18:05:52 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		node_count(t_btree *root)
{
	if (root)
		return (node_count(root->left) + node_count(root->right) + 1);
	return (0);
}

void	push_queue(t_btree **queue, int *level, int first, int *last)
{
	if (queue[first]->left != NULL)
	{
		*last = *last + 1;
		queue[*last] = queue[first]->left;
		level[*last] = level[first] + 1;
	}
	if (queue[first]->right != NULL)
	{
		*last = *last + 1;
		queue[*last] = queue[first]->right;
		level[*last] = level[first] + 1;
	}
}

void	btree_apply_by_level(t_btree *root,
			void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int		n;
	t_btree	**queue;
	int		first;
	int		last;
	int		*level;

	if (!root)
		return ;
	n = node_count(root);
	queue = (t_btree **)malloc(sizeof(t_btree *) * n);
	level = (int *)malloc(sizeof(int) * n);
	first = 0;
	last = 0;
	queue[0] = root;
	level[0] = 0;
	while (first <= last)
	{
		if (first == 0 || level[first] != level[first - 1])
			applyf(queue[first]->item, level[first], 1);
		else
			applyf(queue[first]->item, level[first], 0);
		push_queue(queue, level, first, &last);
		first++;
	}
}
