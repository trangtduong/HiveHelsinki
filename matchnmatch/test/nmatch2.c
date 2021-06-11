/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:19:13 by thduong           #+#    #+#             */
/*   Updated: 2021/06/06 14:19:47 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int g_count;

void	match_solver2(char *s1, char *s2, int i1, int i2)
{
	// int i;
	printf("*%d* *%d*\n", i1, i2);
	if (i1 > 0 && i2 > 0 && s1[i1-1] == '\0' && s2[i2-1] == '\0')
	{
		g_count = g_count + 1;
		return ;
	}	
	if (s2[i2-1] == '\0')
		return;
	if (s2[i2-1] == '*')
	{
		match_solver2(s1, s2, i1+1, i2);
		match_solver2(s1, s2, i1+1, i2+1);
	}
	else if (i1 > 0 && s1[i1-1] == s2[i2-1])
	{
		match_solver2(s1, s2, i1+1, i2+1);
		match_solver2(s1, s2, i1, i2+1);
	}
	else if (i1 == 0)
		match_solver2(s1, s2, 1, i2);
}

int	nmatch(char *s1, char *s2)
{
	g_count = 0;
	match_solver2(s1, s2, 0, 1);
	return (g_count);
}
