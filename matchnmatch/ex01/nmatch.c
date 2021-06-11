/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:04:54 by thduong           #+#    #+#             */
/*   Updated: 2021/06/06 17:39:36 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_count = 0;

void	matching(char *s1, char *s2, int i1, int i2)
{
	int i;

	if (s1[i1] == '\0' && s2[i2] == '\0')
	{
		g_count++;
		return ;
	}
	if (s2[i2] == '*')
	{
		i = 0;
		while (s1[i1 + i] != '\0')
		{
			matching(s1, s2, i1 + i, i2 + 1);
			i++;
		}
		matching(s1, s2, i1 + i, i2 + 1);
	}
	else if (s1[i1] == s2[i2])
		matching(s1, s2, i1 + 1, i2 + 1);
}

int		nmatch(char *s1, char *s2)
{
	g_count = 0;
	matching(s1, s2, 0, 0);
	return (g_count);
}
