/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:17:16 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/27 10:39:55 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

char	*ft_strcat(char *dest, char *src)

{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
        char	a[] = "eklfjlksej";
        char	b[] = "flkaeles";
	ft_strcat(a, b);
        printf("%s", a);
}
*/
