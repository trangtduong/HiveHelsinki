/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 06:19:23 by thduong           #+#    #+#             */
/*   Updated: 2021/06/11 07:54:14 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree_extra.h"

void			btree_apply_infix(t_btree *root, void (*applyf)(void *));

int		main(void)
{
	t_btree	*root;

	root = sample_tree();
	btree_apply_infix(root, &ft_putstr);
	free_btree(root);
}
