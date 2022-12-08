/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:09:31 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/06 10:56:48 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		ft_find_pos(char ch, char *base);
int		ft_convert(int n, int x, int y);
int		ft_check(char *str);
int		ft_strlen(char *str);
void	ft_putnbr_base(int nbr, char *dest, char *base, int *s);

int	ft_whitespace(char *str, int *n)
{
	int	i;

	*n = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*n *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	k;
	int	n;
	int	pos;

	s = 0;
	i = ft_whitespace(str, &n);
	k = i;
	while (ft_find_pos(str[i], base) != -1)
		i++;
	while (k < i)
	{
		pos = ft_find_pos(str[k], base);
		s += ft_convert(pos, ft_strlen(base), i - k - 1);
		k++;
	}
	s *= n;
	return (s);
}

int	ft_len(long n, int l)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / l;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	n;
	int		i;
	int		s;
	int		l;
	char	*dest;

	l = ft_check(base_to);
	s = 0;
	if (ft_check(base_from) > 1 && l > 1)
	{
		n = ft_atoi_base(nbr, base_from);
		i = ft_len(n, l);
		dest = (char *) malloc (i + 1);
		if (n < 0)
		{
			n *= -1;
			dest[s] = '-';
			s++;
		}
		ft_putnbr_base(n, dest, base_to, &s);
		dest[s] = 0;
	}
	else
		dest = 0;
	return (dest);
}
/*
int	main(void)
{
	char	base_from[] = "0123456789";
	char	str[] = "----+++++2147483647";
	char	base_to[] = "0123456789abcdef";
	char	*dest;

	dest = ft_convert_base(str, base_from, base_to);
	return (0);
}
*/
