/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 22:00:59 by thduong           #+#    #+#             */
/*   Updated: 2021/06/04 16:40:59 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*m_strncpy(char *src, int start, int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	str[n] = '\0';
	while (--n >= 0)
	{
		str[n] = src[start + n];
	}
	return (str);
}

int		is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

int		word_count(char *str)
{
	int count;
	int i;

	count = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (is_space(str[i]) == 0 && is_space(str[i + 1]) == 1)
			count++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		a_index;
	int		start;
	int		i;

	array = (char**)malloc(sizeof(char *) * (word_count(str) + 1));
	array[word_count(str)] = 0;
	a_index = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_space(str[i]) == 1)
		{
			i++;
			continue ;
		}
		start = i;
		while (is_space(str[i]) == 0)
			i++;
		array[a_index] = m_strncpy(str, start, i - start);
		a_index++;
	}
	return (array);
}
