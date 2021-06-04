/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 20:15:47 by thduong           #+#    #+#             */
/*   Updated: 2021/06/03 20:54:15 by thduong          ###   ########.fr       */
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

int		is_sep(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		word_count(char *str, char *charset)
{
	int count;
	int i;

	count = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (is_sep(str[i], charset) == 0 && is_sep(str[i + 1], charset) == 1)
			count++;
	}
	if (is_sep(str[0], charset) == 0)
		count -= 1;
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		a_index;
	int		start;
	int		i;

	array = (char**)malloc(sizeof(char *) * (word_count(str, charset) + 1));
	a_index = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 1)
		{
			i++;
			continue ;
		}
		start = i;
		while (is_sep(str[i], charset) == 0)
			i++;
		if (start == 0 || str[i] == '\0')
			continue ;
		array[a_index] = m_strncpy(str, start, i - start);
		a_index++;
	}
	array[word_count(str, charset)] = 0;
	return (array);
}
