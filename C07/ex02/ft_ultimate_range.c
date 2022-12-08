/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:45:26 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/04 12:15:45 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*assigner;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	assigner = (int *) malloc (size * sizeof(int));
	*range = assigner;
	if (assigner == 0)
	{
		*range = 0;
		return (-1);
	}
	while (i < size)
	{
		assigner[i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main(void)
{
	int	*ptr;
	int	i;
	int	n;
	int	min;
	int 	max;

	min = 1;
	max = 100;
	i = 0;
	n = ft_ultimate_range(&ptr, min, max);
	while (i < max - min)
	{
		printf("%d ",ptr[i]);
		i++;
	}
	printf("\n%d",n);
	return (0);
}
*/
