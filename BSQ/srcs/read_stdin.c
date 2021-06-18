/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:46:36 by lonnguye          #+#    #+#             */
/*   Updated: 2021/06/16 20:19:37 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		write_stdin_to_file(char *filemap)
{
	int		fd;
	int		ret;
	char	buffer[BUF_SIZE + 1];
	int		size;

	fd = open(filemap, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd == -1)
		return (0);
	size = 0;
	while ((ret = read(0, buffer, BUF_SIZE)))
	{
		buffer[ret] = '\0';
		write(fd, buffer, ret);
		size += ret;
	}
	close(fd);
	return (size);
}

int		char_count(char *filemap)
{
	int		fd;
	int		size;
	char	buffer[BUF_SIZE + 1];
	int		ret;

	if ((fd = open(filemap, O_RDONLY)) == -1)
		return (0);
	size = 0;
	while ((ret = read(fd, buffer, BUF_SIZE)))
		size += ret;
	close(fd);
	return (size);
}

char	*read_file(char *filemap, int size)
{
	int		fd;
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	fd = open(filemap, O_RDONLY);
	if (fd == -1)
		return (NULL);
	read(fd, str, size);
	close(fd);
	str[size] = '\0';
	return (str);
}
