/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 09:56:08 by thduong           #+#    #+#             */
/*   Updated: 2021/06/16 14:58:56 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define MIN(a, b) (a < b ? a : b)
# define MIN_OF_3(a, b, c) (MIN(a, b) < c ? MIN(a, b) : c)
# define BUF_SIZE 10000

typedef	struct	s_map_metadata
{
	char	empty;
	char	obstacle;
	char	full;
	int		height;
}				t_map_metadata;

typedef	struct	s_max_search
{
	int		max_value;
	int		max_x;
	int		max_y;
	int		width;
	int		**tab;
	int		cur;
}				t_max_search;

int				write_stdin_to_file(char *filemap);
int				char_count(char *filemap);
char			*bsq_solver(char *map, int *size);
char			*read_file(char *filemap, int size);
void			process_map_from_stdin(void);
void			process_map_from_file(char *filemap);
void			free_max_search_tab(t_max_search *max_search);
t_max_search	init_max_search(int width);
#endif
