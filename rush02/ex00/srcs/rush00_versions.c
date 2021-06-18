/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_versions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:45:21 by jsaarine          #+#    #+#             */
/*   Updated: 2021/06/13 13:34:42 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rush00_00(int x, int y, int width, int height)
{
	if (y == 0 || y == (height - 1))
	{
		if (x == 0 || x == width - 1)
			return ('o');
		else
			return ('-');
	}
	else
	{
		if (x == 0 || x == (width - 1))
			return ('|');
		else
			return (' ');
	}
}

char	rush00_01(int x, int y, int width, int height)
{
	if (y == 0)
	{
		if (x == 0)
			return ('/');
		else if (x == (width - 1))
			return ('\\');
		else
			return ('*');
	}
	else if (y == (height - 1))
	{
		if (x == 0)
			return ('\\');
		else if (x == (width - 1))
			return ('/');
		else
			return ('*');
	}
	else
	{
		if (x == 0 || x == (width - 1))
			return ('*');
		else
			return (' ');
	}
}

char	rush00_02(int x, int y, int width, int height)
{
	if (y == 0)
	{
		if (x == 0)
			return ('A');
		else if (x == (width - 1))
			return ('A');
		else
			return ('B');
	}
	else if (y == (height - 1))
	{
		if (x == 0)
			return ('C');
		else if (x == (width - 1))
			return ('C');
		else
			return ('B');
	}
	else
	{
		if (x == 0 || x == (width - 1))
			return ('B');
		else
			return (' ');
	}
}

char	rush00_03(int x, int y, int width, int height)
{
	if (y == 0)
	{
		if (x == 0)
			return ('A');
		else if (x == (width - 1))
			return ('C');
		else
			return ('B');
	}
	else if (y == (height - 1))
	{
		if (x == 0)
			return ('A');
		else if (x == (width - 1))
			return ('C');
		else
			return ('B');
	}
	else
	{
		if (x == 0 || x == (width - 1))
			return ('B');
		else
			return (' ');
	}
}

char	rush00_04(int x, int y, int width, int height)
{
	if (y == 0)
	{
		if (x == 0)
			return ('A');
		else if (x == (width - 1))
			return ('C');
		else
			return ('B');
	}
	else if (y == (height - 1))
	{
		if (x == 0)
			return ('C');
		else if (x == (width - 1))
			return ('A');
		else
			return ('B');
	}
	else
	{
		if (x == 0 || x == (width - 1))
			return ('B');
		else
			return (' ');
	}
}
