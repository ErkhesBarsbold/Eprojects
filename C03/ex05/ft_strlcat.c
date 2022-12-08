/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 23:13:28 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/27 10:36:49 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_dest;
	unsigned int	length_src;
	unsigned int	length_combined;
	unsigned int	i;

	i = 0;
	length_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	length_combined = length_dest + length_src;
	while (src[i] != 0 && length_dest + i < size - 1)
	{
		dest[length_dest + i] = src [i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (length_combined);
}
/*
int	main(void)
{
	char first[16];
	char last[] = "a potentiallylongstring";
	int r;
	int size = 16;

	first[0] = 'H';
	first[1] = 'E';
	first[2] = '\0';
	r = ft_strlcat(first, last, 16);
	printf("Value returned: %d\n",r);
	if( r > size )
		printf("String truncated \n%s",first);
	else
		printf("String was fully copied");

	return(0);
}
*/
