/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:54:11 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/07 21:38:46 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include<stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_set(char **dest, char *str, int a[2], int *c)
{
	int	i;
	int	j;

	j = 0;
	i = a[0];
	dest[*c] = (char *) malloc (a[1] - a[0] + 1);
	while (i < a[1])
	{
		dest[*c][j] = str[i];
		j++;
		i++;
	}
	dest[*c][j] = '\0';
	*c = *c + 1;
}

int	ft_split_len(char **dest, char *str, char *charset, int *c)
{
	int	i;
	int	a[2];
	int	s;

	s = 0;
	a[0] = 0;
	i = 0;
	a[1] = 0;
	while (i <= ft_strlen(str))
	{
		if (ft_check(str[i], charset) == 1 || str[i] == '\0')
			a[1] = i;
		if (a[1] > a[0])
		{
			if (*c != -1)
				ft_set(dest, str, a, c);
			s++;
			a[0] = a[1] + 1;
		}
		if (a[1] == a[0] && a[0] != 0)
			a[0]++;
		i++;
	}
	return (s);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**dest;
	int		c;

	c = -1;
	i = ft_split_len(dest, str, charset, &c) + 1;
	c = 0;
	dest = (char **) malloc (i * sizeof(char *));
	ft_split_len(dest, str, charset, &c);
	dest[c] = 0;
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "HELiiiiiiiiiiEpEhhRhhiOhhhhEp";
	char	b[] = "EOR";
	char	**pointer;
	int	i;
	i = 0;
	pointer = ft_split(a,b);
	while (pointer[i] != 0)
		printf("%s\n", pointer[i++]);
	return (0);

}
*/
