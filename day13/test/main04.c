/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 06:19:23 by thduong           #+#    #+#             */
/*   Updated: 2021/06/12 07:45:24 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree_extra.h"

void	btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *));

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		(*applyf)(root->item);
		btree_apply_prefix(root->left, (*applyf));
		btree_apply_prefix(root->right, (*applyf));
	}
}

int		main(void)
{
	t_btree	*root;

	// root = sample_tree();
	root = NULL;
	btree_insert_data(&root, (void *)"5", &cmp);
	btree_apply_prefix(root, &ft_putstr);
	free_btree(root);
}
