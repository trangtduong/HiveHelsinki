/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:51:48 by thduong           #+#    #+#             */
/*   Updated: 2021/06/07 20:58:26 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_foreach(int *tab, int length, void (*f)(int));

int main(void)
{
	int tab[7] = {0, 1, 2, 3, 4, 5, 6};

	ft_foreach(tab, 7, &ft_putnbr);
	return (0);
}
