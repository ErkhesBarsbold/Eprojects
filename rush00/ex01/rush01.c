/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprochaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:51:57 by vprochaz          #+#    #+#             */
/*   Updated: 2022/11/19 22:05:10 by vprochaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void    rush(int x, int y);
void    ft_putchar(char c);

void loop(char x, char a, char b, char c)
{
	int i = 0;
	if (x > 0)
		ft_putchar(a);
	while (i < x - 2)
	{
		ft_putchar(b);
		i++;
	}
	if (x > 1)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char slash = '/';
	char star = '*';
	char rev_slash = '\\';
	char blank = ' ';
	int i = 0;

	if (y > 0)
		loop(x, slash, star, rev_slash);
	while(i < y - 2)
	{
		loop(x, star, blank, star);
		i++;
	}
	if(y > 1)
		loop(x, rev_slash, star, slash);
}
