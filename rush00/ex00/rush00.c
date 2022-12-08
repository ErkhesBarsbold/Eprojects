/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprochaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:51:57 by vprochaz          #+#    #+#             */
/*   Updated: 2022/11/19 22:45:03 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);

void	loop(char x, char y, char a, char b)
{
	int	i;

	i = 0;
	if (x > 0)
		ft_putchar(a);
	while (i < x - 2)
	{
		ft_putchar(b);
		i++;
	}
	if (x > 1)
		ft_putchar(a);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;
	char	degree;
	char	dash;
	char	pipe;
	char	blank;

	degree = 'o';
	dash = '-';
	pipe = '|';
	blank = ' ';
	i = 0;
	if (y > 0)
		loop(x, y, degree, dash);
	while (i < y - 2)
	{
		loop(x, y, pipe, blank);
		i++;
	}
	if (y > 1)
		loop(x, y, degree, dash);
}
