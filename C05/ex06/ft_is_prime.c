/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:38:14 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/03 12:50:40 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb >= 2)
	{
		i = 2;
		while (i * i <= nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
			if (i == 46341)
				return (1);
		}
	}
	if (nb < 2)
		return (0);
	return (1);
}
/*
int	main(void)
{
	printf("%d",ft_is_prime(2147483647));
	return (0);
}
*/
