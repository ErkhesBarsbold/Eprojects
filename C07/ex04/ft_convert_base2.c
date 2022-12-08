/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:06:23 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/06 10:56:12 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_pos(char ch, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == ch)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_convert(int n, int x, int y)
{
	int	i;
	int	s;

	i = 0;
	s = 1;
	while (i < y)
	{
		s = s * x;
		i++;
	}
	s *= n;
	return (s);
}

int	ft_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			return (0);
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(long nbr, char *dest, char *base, int *s)
{
	int	mod;
	int	div;
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(base);
	div = nbr / l;
	mod = nbr % l;
	if (div > 0)
		ft_putnbr_base(div, dest, base, s);
	while (i < l)
	{
		if (mod == i)
			dest[*s] = base[i];
		i++;
	}
	*s = *s + 1;
}
