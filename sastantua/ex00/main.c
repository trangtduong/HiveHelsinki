/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:49:30 by thduong           #+#    #+#             */
/*   Updated: 2021/05/30 18:50:47 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void sastantua(int size);

int main(int count, char **argv)
{
	int i;
	int size;

	i = -1;
	while(++i < count)
		{
			size = atoi(argv[i]);
			sastantua(size);
		}
	return (0);
}