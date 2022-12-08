/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:08:11 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/06 12:04:12 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	ft_concatenate(char *dest, char *src, char *sep, int *s)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[*s] = src[i];
		*s = *s + 1;
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
	{
		dest[*s] = sep[i];
		*s = *s + 1;
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
		n++;
	return (n);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (i < size)
	{	
		s += ft_strlen(strs[i]);
		if (i + 1 != size)
			s += ft_strlen(sep);
		i++;
	}
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		n;
	int		i;
	int		s;

	s = 0;
	i = 0;
	n = ft_total_len(size, strs, sep);
	dest = (char *) malloc (n + 1);
	if (!dest)
		return (NULL);
	while (i < size)
	{
		if (i + 1 == size)
			ft_concatenate(dest, strs[i], "", &s);
		else
			ft_concatenate(dest, strs[i], sep, &s);
		i++;
	}
	dest[s] = '\0';
	return (dest);
}
/*
int 	main(void)
{
	char	**ptr;
	char	*dest;
	char	sep[] = "//";

	ptr = (char **) malloc(2 * sizeof(char *));
	ptr[0] = (char *)malloc	(5);
	ptr[1] = (char *)malloc(4);
	ptr[2] = (char *)malloc(5);
	ptr[0] = "HELLO";
	ptr[1] = "123";
	ptr[2] = "1234";
	dest = ft_strjoin(3, ptr, sep);
	printf("%s", dest);
}
*/
