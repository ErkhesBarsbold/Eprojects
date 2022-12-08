/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:38:31 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/02 12:10:29 by ebarsbol         ###   ########.fr       */
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
		}
	}
	if (nb < 2)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	while (nb >= 2 && nb < 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(2147483647));
	return (0);
}
*/
