/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:37:17 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/01 20:50:15 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	f;

	f = 1;
	i = 0;
	while (i < power)
	{
		f *= nb;
		i++;
	}
	if (power < 0)
		return (0);
	return (f);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(2, 12));
}
*/
