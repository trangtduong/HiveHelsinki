/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:47:05 by thduong           #+#    #+#             */
/*   Updated: 2021/06/10 16:03:34 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

# define BUF_SIZE 	29

void	ft_putstr(int fd, char *str);
int		ft_strcmp(char *s1, char *s2);
int		display_from_file(char *filename);
void	display_from_stdin(void);
#endif
