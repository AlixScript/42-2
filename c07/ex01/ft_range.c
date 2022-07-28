/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldalibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 07:48:14 by ldalibar          #+#    #+#             */
/*   Updated: 2022/07/27 23:49:08 by ldalibar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*stock;
	int	i;
	int	len;

	len = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	stock = (int *) malloc(sizeof(int) * len + 1);
	if (stock == NULL)
		return (0);
	while (stock[i])
		write(1, &stock, 1);
	/*
	printf("%d\n", len);

	while (i < len)
	{
		stock[i] = i;
		//printf("i = %d\n", stock);
		i++;
	}
	printf("%d\n", *stock);
	*/
	return (0);
}

int main()
{
	ft_range(5, 10);
	return (0);
}
