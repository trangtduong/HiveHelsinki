/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_lines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:45:18 by thduong           #+#    #+#             */
/*   Updated: 2021/06/13 13:32:25 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		char_count(t_list *list)
{
	int	count;

	count = 0;
	while (list)
	{
		count += ft_strlen(list->str);
		list = list->next;
	}
	return (count);
}

char	*convert_to_string(t_list *list)
{
	char	*str;
	int		c;

	c = char_count(list);
	str = (char *)malloc(sizeof(char) * (c + 1));
	while (list)
	{
		str = ft_strcat(str, list->str);
		list = list->next;
	}
	return (str);
}

int		line_count(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		if (str[i + 1] == '\0' && str[i] != '\n')
			count++;
		i++;
	}
	return (count);
}

char	**read_lines(t_list *list)
{
	char	*str;
	char	**array;
	int		i;
	int		a_index;
	int		start;

	str = convert_to_string(list);
	array = (char **)malloc(sizeof(char *) * (line_count(str) + 1));
	array[line_count(str)] = 0;
	a_index = 0;
	i = 0;
	start = 0;
	while (str[i])
	{
		if (str[i + 1] == '\n' || str[i + 1] == '\0')
		{
			array[a_index] = str_dup_n(str, start, i - start + 1);
			a_index++;
			start = i + 2;
			i++;
		}
		i++;
	}
	return (array);
}
