/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:36:22 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/01 20:45:23 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	f = 1;
	i = 1;
	while (i <= nb)
	{
		f *= i;
		i++;
	}
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (f);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
*/
