/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:12:08 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/24 12:14:08 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	returner;

	returner = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
		}
		else
		{
			returner = 0;
		}
		i++;
	}
	return (returner);
}

/*
int     main(void)
{
        int checker;
        char    a[] = "HELLOWORLD";
        char    b[12] ;
        checker = ft_str_is_uppercase(a);
        printf("%d", checker);
}
*/
