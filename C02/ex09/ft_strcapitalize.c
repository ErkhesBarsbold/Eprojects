/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:23:22 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/26 10:58:56 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_ch(char a)
{
	int	i;
	int	b;

	b = a;
	i = 0;
	if (b > 47 && b < 58)
		i = 1;
	if (b > 64 && b < 91)
		i = 1;
	if (b > 96 && b < 123)
		i = 1;
	return (i);
}

void	swap(int *first, int *last, char *str)
{
	int	i;

	if (*last >= *first)
	{
		i = *first + 1;
		if (str[*first] > 96 && str[*first] < 123)
			str[*first] -= 32;
		while (i <= *last)
		{
			if (str[i] > 64 && str[i] < 91)
			{
				str[i] = str[i] + 32;
			}
			else
				i++;
		}
		*first = -1;
		*last = -1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;
	int	last;

	i = 0;
	first = -1;
	last = -1;
	while (i <= ft_strlen(str))
	{
		if (ft_ch(str[i]) == 1)
		{
			if (first == -1)
				first = i;
		}
		if (ft_ch(str[i]) != 1 && first != -1)
		{
			last = i - 1;
			if (first != -1 && last != -1)
				swap(&first, &last, str);
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	a[] = ":}<Uf8G{Gid/nVz";
	ft_strcapitalize(a);
	printf("%s", a);
}
*/
