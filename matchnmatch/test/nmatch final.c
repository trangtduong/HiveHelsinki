/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:04:54 by thduong           #+#    #+#             */
/*   Updated: 2021/06/06 17:22:03 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		g_count = 0;

void	matching(char *s1, char *s2, int i1, int i2)
{
	int i;

	printf("%s  -  %s, count: %d\n", s2 + i2, s1 + i1, g_count);
	if (s1[i1] == '\0' && s2[i2] == '\0')
	{
		printf("--------------end of string!\n");
		g_count++;
		return ;
	}
	if (s2[i2] == '*')
	{
		i = 0;
		printf("loop\n");
		while (s1[i1 + i] != '\0')
		{
			matching(s1, s2, i1 + i, i2 + 1);
			i++;
		}
		matching(s1, s2, i1 + i, i2 + 1);
		printf("end loop\n");
	}
	else if (s1[i1] != s2[i2])
	{
		printf("-----------------mismatched\n");
		return ;
	}
	else
	{
		printf("------------------match next char\n");
		matching(s1, s2, i1 + 1, i2 + 1);
	}
}

int		nmatch(char *s1, char *s2)
{
	g_count = 0;
	matching(s1, s2, 0, 0);
	return (g_count);
}
