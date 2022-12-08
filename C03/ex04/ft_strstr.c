/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:06:04 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/27 10:42:14 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check(int i, char *str, int length_find, char *to_find)
{
	int	n;
	int	l;

	n = 0;
	l = 0;
	while (n < length_find)
	{
		if (str[i + n] == to_find[n])
			l++;
		n++;
	}
	if (l == length_find)
		l = 1;
	else
		l = 0;
	return (l);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	length_find;
	int	i;
	int	k;

	if (to_find[0] == '\0')
		return (str);
	length_find = ft_strlen(to_find);
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (k == 0)
			k = ft_check(i, str, length_find, to_find);
		if (k == 1)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "Hello my name is";
	char	b[] = "name";
	char	*ptr;

	ptr = ft_strstr(a, b);
	printf("%s", ptr);
	return (0);
}
*/
