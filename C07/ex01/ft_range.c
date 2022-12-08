/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:58:08 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/12/05 19:13:40 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	range = (int *) malloc (size * sizeof(int));
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int	*ptr;
	int	i;
	int	min;
	int	max;

	min = -2147483648;
	max = -2147089175;
	i = 0;
	ptr = ft_range(min, max);
	while (i < max - min)
	{	
		printf("%d ",ptr[i]);
		i++;
	}
}
*/
