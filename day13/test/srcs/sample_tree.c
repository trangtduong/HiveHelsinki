#include "ft_btree_extra.h"

t_btree	*sample_tree(void)
{
	t_btree	*root;

	root = btree_create_node("5");
	root->left = btree_create_node("3");
	root->right = btree_create_node("7");
	root->left->left = btree_create_node("1");
	root->left->right = btree_create_node("4");
	root->right->left = btree_create_node("6");
	root->right->right = btree_create_node("9");
	return (root);
}
