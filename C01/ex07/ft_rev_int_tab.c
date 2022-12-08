/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:49:25 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/24 11:49:36 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	swap;
	int	size1;

	size1 = size;
	n = 1;
	while (n <= size / 2)
	{
		swap = tab[n - 1];
		tab[n - 1] = tab[size1 - 1];
		tab[size1 - 1] = swap;
		n++;
		size1--;
	}
}

/*
int	main(void)
{
	int    a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
	int	n = 10, i=0;
	ft_rev_int_tab(a, n);
	while (i < n)
	{
		printf("%d ",a[i]);
		i++;
	}
}
*/
