/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:10:05 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/26 13:15:15 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *srcm, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;

	i = 0;
	length = 0;
	while (srcm[length] != 0)
		length++;
	if (size > 0)
	{
		while (srcm[i] != 0 && i < size - 1)
		{	
			dest[i] = srcm[i];
			i++;
		}
		dest[i] = 0;
	}
	return (length);
}
/*
int	main(void)
{
	char a[] = "Hello there";
	char b[10];
	unsigned int i;

	i = ft_strlcpy(b, a, 10);
	printf("%d", i);
}
*/
