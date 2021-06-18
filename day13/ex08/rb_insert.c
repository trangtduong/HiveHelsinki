/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:12:29 by thduong           #+#    #+#             */
/*   Updated: 2021/06/11 20:18:14 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree_rb.h"

t_rb_node	*create_node(void *data, enum e_rb_color color, t_rb_node *parent)
{
	t_rb_node *node;

	node = (t_rb_node *)malloc(sizeof(t_rb_node));
	if (!node)
		return (NULL);
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	node->color = color;
	return (node);
}

t_rb_node	insert_data(t_rb_node *root, t_rb_node *temp,
						int (*cmpf)(void *, void *))
{
	if (!root)
		return (temp);
	if (cmpf(temp->data, root->data) < 0)
	{
		root->left = insert_data(root->left, temp);
		root->left->parent = root;
	}
	else if (cmpf(temp->data, root->data) >= 0)
	{
		root->right = insert_data(root->right, temp);
		root->right->parent = root;
	}
	return (root);
}

void right_rotate(t_rb_node *temp)
{
	t_rb_node *left;

	left = temp->left;
	temp->left = left->right;
	if (temp->left)
		temp->left->parent = temp;
	left->parent = temp->parent;
	if (!temp->parent)
		root = left;
	else if (temp == temp->parent->left)
		temp->parent->left = left;
	else
		temp->parent->right = left;
	left->right = temp;
	temp->parent = left;
}

void left_rotate(t_rb_node *temp)
{
	t_rb_node *right;

	right = temp->right;
	temp->right = right->left;
	if (temp->right)
		temp->right->parent = temp;
	right->parent = temp->parent;
	if (!temp->parent)
		root
}

void rb_insert(struct s_rb_node **root, void *data, int (*cmpf)(void *, void *))
{
	
}