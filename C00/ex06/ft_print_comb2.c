/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 23:03:42 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/20 11:13:39 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(char a, char b, char c, char d)

{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print2(char a, char b)
{
	char	c;
	char	d;

	c = a;
	d = b + 1;
	while (c <= '9')
	{	
		while (d <= '9')
		{
			ft_print(a, b, c, d);
			d = d + 1;
		}
		c = c + 1;
		d = '0';
	}	
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			ft_print2(a, b);
			b = b + 1;
		}
		a = a + 1;
	}
}

/*
int main(void)

{
	ft_print_comb2();	
}
*/
