/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_extra.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 05:58:54 by thduong           #+#    #+#             */
/*   Updated: 2021/06/11 09:22:30 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_EXTRA_H
# define FT_BTREE_EXTRA_H

# include <stdlib.h>
# include <stdio.h>

typedef	struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;

t_btree			*btree_create_node(void *item);
void			ft_putstr(void *c);
void			free_btree(t_btree *node);
t_btree			*sample_tree(void);
int				cmp(void *s1, void *s2);
#endif
