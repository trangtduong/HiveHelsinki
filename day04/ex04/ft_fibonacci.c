/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thduong <thduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 23:13:19 by thduong           #+#    #+#             */
/*   Updated: 2021/05/28 23:49:53 by thduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int ret;

	if (index < 0)
		ret = -1;
	if (index == 0)
		ret = 0;
	if (index == 1)
		ret = 1;
	if (index >= 2)
		ret = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (ret);
}
