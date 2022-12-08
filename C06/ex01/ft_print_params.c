/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:44:22 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/01 22:47:01 by ebarsbol         ###   ########.fr       */
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

	n = 1;
	while (n < argc)
	{
		ft_putstr(argv[n]);
		write (1, "\n", 1);
		n++;
	}
	return (0);
}
