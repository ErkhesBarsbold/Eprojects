/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:54:05 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/02 12:15:07 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_strswap(char **str1, char **str2)
{
	char	*swap;

	swap = *str1;
	*str1 = *str2;
	*str2 = swap;
}

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

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;
	int	i;

	i = 0;
	diff = 0;
	while (s1[i] == s2[i] && s1[i] != 0)
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}

void	ft_sort_strings(int argc, char **argv)
{
	int	n;
	int	j;
	int	size;

	size = argc;
	n = 1;
	while (n <= argc)
	{	
		j = 1;
		while (j < size - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_strswap(&argv[j], &argv[j + 1]);
			j++;
		}
		size--;
		n++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	ft_sort_strings(argc, argv);
	while (n < argc)
	{
		ft_putstr(argv[n]);
		write (1, "\n", 1);
		n++;
	}
	return (0);
}
