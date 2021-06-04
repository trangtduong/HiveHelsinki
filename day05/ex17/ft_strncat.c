/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 23:49:28 by thduong           #+#    #+#             */
/*   Updated: 2021/05/31 23:56:30 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int dest_len;
	int src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (nb > src_len || nb < 0)
	{
		nb = src_len;
	}
	i = -1;
	while (++i < nb)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + nb] = '\0';
	return (dest);
}
