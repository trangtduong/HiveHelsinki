/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 00:01:30 by thduong           #+#    #+#             */
/*   Updated: 2021/05/28 08:42:46 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}

char	*ft_strrev(char *str)
{
	int		index;
	int		strlen;
	char	c;

	strlen = ft_strlen(str);
	index = 0;
	while (index < strlen / 2)
	{
		c = str[index];
		str[index] = str[strlen - 1 - index];
		str[strlen - index - 1] = c;
		index++;
	}
	return (str);
}
