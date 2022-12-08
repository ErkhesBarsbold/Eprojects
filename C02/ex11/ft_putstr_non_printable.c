/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:59:11 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/26 13:13:52 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

void	checking_print(int i)
{
	if (i > 9)
		i += 87;
	else
		i += 48;
	write (1, &i, 1);
}

void	convert(char a)
{
	int	div;
	int	mod;
	int	src;

	src = a;
	if (src < 0)
		src += 256;
	div = src / 16;
	mod = src % 16;
	write (1, "\\", 1);
	checking_print(div);
	checking_print(mod);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	returner;

	returner = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
		{
			write (1, &str[i], 1);
		}
		else
		{
			convert(str[i]);
		}
		i++;
	}
}
/*
int     main(void)
{
        char    a[6];

	a[0] = 1;
	a[1] = 254;
	a[2] = 220;
	a[3] = 100;
	a[4] = 'H';

        ft_putstr_non_printable(a);
}
*/
