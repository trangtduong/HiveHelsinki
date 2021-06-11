/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 11:26:08 by thduong           #+#    #+#             */
/*   Updated: 2021/06/06 14:45:39 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match_char(char c1, char c2)
{
	if (c2 == '*')
	{
		return (0);
	}
	return (c1 - c2);
}

int	match_solver(char *s1, char *s2, int i1, int i2, int *count)
{
	int i;

	if (s1[i1] == '\0' && s2[i2] == '\0')
	{
		*count = *count + 1;
		return (1);
	}
	if (match_char(s1[i1], s2[i2]) != 0)
		return (0);
	if (s2[i2] == '*')
	{
		i = 0;
		while (s1[i1 + i] != '\0')
		{
			match_solver(s1, s2, i1 + i, i2 + 1, count);
			i++;
		}
	}
	return (match_solver(s1, s2, i1 + 1, i2 + 1, count));
}

int	nmatch(char *s1, char *s2)
{
	int count;

	count = 0;
	match_solver(s1, s2, 0, 0, &count);
	return (count);
}