/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 06:05:49 by thduong           #+#    #+#             */
/*   Updated: 2021/06/11 07:48:56 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree_extra.h"

int	main(void)
{
	t_btree *node;
	void	*item;

	item = "Hello";
	node = btree_create_node(item);
	printf("%s\n", (char *)(node->item));
	if (node->left == NULL && node->right == NULL)
		printf("NULL in left and right\n");
	else
		printf("There's something in left and right\n");
	free(node);
	return (0);
}
