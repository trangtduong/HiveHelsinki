/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 13:06:25 by thduong           #+#    #+#             */
/*   Updated: 2021/06/13 16:42:57 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>

# define BUF_SIZE 30000

typedef	struct	s_list
{
	char			*str;
	struct s_list	*next;
}				t_list;

t_list			*read_input_to_linkedlist(void);
char			**read_lines(t_list *list);
void			free_linkedlist(t_list **begin);
void			free_array(char **array);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
void			ft_putchar(char c);
char			*ft_strdup(char *src);
char			*ft_strcat(char *dest, char *src);
char			*str_dup_n(char *str, int start, int n);
char			rush00_00(int x, int y, int width, int height);
char			rush00_01(int x, int y, int width, int height);
char			rush00_02(int x, int y, int width, int height);
char			rush00_03(int x, int y, int width, int height);
char			rush00_04(int x, int y, int width, int height);
void			shape_detector(char **input);
void			rush0n_printer(int rush_n, int w, int h, int first_match);

#endif
