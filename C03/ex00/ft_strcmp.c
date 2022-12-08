/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarsbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:24:52 by ebarsbol          #+#    #+#             */
/*   Updated: 2022/11/26 14:17:29 by ebarsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;
	int	i;

	i = 0;
	diff = 0;
	while (s1[i] == s2[i] && s1[i] != 0)
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}
/*
int	main(void)
{
	char	a[] = "helno";
	char	b[] = "heloo";
	int	i;
	i = ft_strcmp(a,b);
	printf("%d",i);
}
*/
