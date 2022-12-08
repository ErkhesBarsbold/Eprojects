/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:37:34 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/01 20:52:24 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	f;

	f = 1;
	if (power > 0)
		f *= nb * ft_recursive_power(nb, power - 1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (f);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(2, 10));
}
*/
