/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:36:53 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/01 20:47:38 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int	f;

	if (nb > 0)
		f = nb * ft_recursive_factorial(nb - 1);
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (f);
}
/*
int     main(void)
{
        printf("%d", ft_recursive_factorial(5));
}
*/
