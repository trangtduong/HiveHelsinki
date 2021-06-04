/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:13:22 by thduong           #+#    #+#             */
/*   Updated: 2021/05/31 22:51:35 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_char_or_num(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');
	}
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			continue ;
		if (i == 0)
			str[i] += ('A' - 'a');
		else if (is_char_or_num(str[i - 1]) == 0)
			str[i] += ('A' - 'a');
	}
	return (str);
}
