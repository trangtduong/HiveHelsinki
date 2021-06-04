/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:56:23 by thduong           #+#    #+#             */
/*   Updated: 2021/06/03 13:15:03 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
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

char	*ft_concat_params(int argc, char **argv)
{
	int		len;
	int		i;
	char	*ret;
	char	*c;

	len = 0;
	i = -1;
	while (++i < argc)
	{
		len += ft_strlen(argv[i]);
	}
	ret = (char *)malloc((len + argc + 10) * sizeof(char));
	c = "\n";
	i = 0;
	while (++i < argc)
	{
		ret = ft_strcat(ret, argv[i]);
		if (i < argc - 1)
			ret = ft_strcat(ret, c);
	}
	return (ret);
}
