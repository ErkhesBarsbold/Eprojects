/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:41:59 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/20 10:51:12 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_comb(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' )
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{	
			c = b + 1;
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					ft_comb(a, b, c);
					c = c + 1;
				}
			}
			b = b + 1;
		}
		a = a + 1;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/
