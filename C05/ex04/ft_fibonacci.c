/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:37:57 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/01 20:57:10 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_fibonacci(int index)
{
	int	s;

	s = 0;
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	if (index >= 2)
		s = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (s);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(8));
}
*/
