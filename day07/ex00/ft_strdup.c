/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 08:24:35 by thduong           #+#    #+#             */
/*   Updated: 2021/06/03 13:07:26 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
