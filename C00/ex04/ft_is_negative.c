/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:31:36 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/20 10:49:08 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int a)
{
	char	b;

	b = 'P';
	if (a < 0)
		b = 'N';
	ft_putchar(b);
}

/*
int 	main(void)
{
	ft_is_negative(12389);
}
*/
