/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_funcs_malloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 08:24:35 by thduong           #+#    #+#             */
/*   Updated: 2021/06/13 13:07:45 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strdup(char *src)
{
	int		c;
	char	*str;

	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	str = (char *)malloc(sizeof(char) * (c + 1));
	str[c] = '\0';
	while (--c >= 0)
	{
		str[c] = src[c];
	}
	return (str);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int dest_len;
	int src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = -1;
	while (++i < src_len)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + src_len] = '\0';
	return (dest);
}

char	*str_dup_n(char *str, int start, int n)
{
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (n + 1));
	dup[n] = '\0';
	while (n--)
	{
		dup[n] = str[start + n];
	}
	return (dup);
}
