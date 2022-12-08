/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:49:48 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/03 12:42:34 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
	{
		write (1, &str[n], 1);
		n++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	n = argc - 1;
	while (n > 0)
	{
		ft_putstr(argv[n]);
		write (1, "\n", 1);
		n--;
	}
	return (0);
}
