/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:45:23 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/26 18:05:02 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
int     main(void)
{
        char    a[] = "Hello ";
        char    b[] = "my name is";
        ft_strncat(a, b, 3);
        printf("%s", a);
}
*/
