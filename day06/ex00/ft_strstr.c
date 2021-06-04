/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 18:25:17 by thduong           #+#    #+#             */
/*   Updated: 2021/05/31 21:06:14 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*str != to_find[0])
		{
			str++;
			continue ;
		}
		i = 0;
		while (str[i] != '\0' && to_find[i] != '\0' && str[i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
			{
				return (str);
			}
			i++;
		}
		str++;
	}
	return ((char *)0);
}
