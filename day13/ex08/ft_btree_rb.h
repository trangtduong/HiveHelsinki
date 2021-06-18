/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_rb.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:08:04 by thduong           #+#    #+#             */
/*   Updated: 2021/06/11 19:11:36 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_RB_H
# define FT_BTREE_RB_H

enum	e_rb_color
{
	RB_BLACK,
	RB_RED
};

typedef	struct	s_rb_node

{
	struct s_rb_node	*parent;
	struct s_rb_node	*left;
	struct s_rb_node	*right;
	void				*data;
	enum e_rb_color		color;
}				t_rb_node;

#endif
