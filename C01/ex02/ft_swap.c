/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:39:15 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/24 11:39:22 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	save;

	save = *a;
	*a = *b;
	*b = save;
}

/*int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 20;
	ft_swap(&a,&b);
	printf("%d %d",a ,b);
	return (0);
}*/
