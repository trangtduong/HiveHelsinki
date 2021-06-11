/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:50:47 by thduong           #+#    #+#             */
/*   Updated: 2021/06/10 15:57:12 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		display_error(int error, char *filename)
{
	if (error == ENOENT)
	{
		ft_putstr(2, "cat: ");
		ft_putstr(2, filename);
		ft_putstr(2, ": No such file or directory\n");
		return (0);
	}
	else if (error == EISDIR)
	{
		ft_putstr(2, "cat: ");
		ft_putstr(2, filename);
		ft_putstr(2, ": Is a directory\n");
		return (0);
	}
	else if (error == EACCES)
	{
		ft_putstr(2, "cat: ");
		ft_putstr(2, filename);
		ft_putstr(2, ": Permission denied\n");
		return (0);
	}
	return (0);
}

void	display_from_stdin(void)
{
	char c;

	while ((read(0, &c, 1)))
		write(1, &c, 1);
}

int		display_from_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ft_strcmp(filename, "-") == 0)
	{
		display_from_stdin();
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1 && errno != 13)
	{
		display_error(errno, filename);
		return (1);
	}
	if (fd == -1 && errno == 13)
		fd = open(filename, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(1, buf);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
