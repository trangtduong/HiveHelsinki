/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 22:30:38 by thduong           #+#    #+#             */
/*   Updated: 2021/06/07 20:49:07 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char str[] = "Hello!\n";
	int a;
	int b;
	int *pa;
	int *pb;

	a = 24;
	b = 42;
	pa = &a;
	pb = &b;
	ft_swap(pa, pb);
	ft_putstr(str);
	ft_strlen(str);
	ft_strcmp(str, str);
	return (0);
}
